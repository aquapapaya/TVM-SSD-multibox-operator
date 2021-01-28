import tvm
from tvm import relay
from tvm.contrib import graph_runtime

import cv2
import tensorflow as tf
import numpy as np

import time

import shutil

######################################################################
# Set parameters
# --------------

target = 'cuda -max_num_threads=64'
target_host = 'c'
ctx = tvm.gpu(0)

model_path = './coco_ssd_mobilenet_v1_1.0_uint8.tflite'
input_name = 'normalized_input_image_tensor'
data_type = 'uint8' # input's data type
data_shape = (1, 300, 300, 3)
resulting_file_directory = 'ssd_result'

######################################################################
# Load a TFLite model
# -------------------

import os
tflite_model_file = os.path.join(model_path)
tflite_model_buf = open(tflite_model_file, "rb").read()

# Get TFLite model from buffer
try:
    import tflite
    tflite_model = tflite.Model.GetRootAsModel(tflite_model_buf, 0)
except AttributeError:
    import tflite.Model
    tflite_model = tflite.Model.Model.GetRootAsModel(tflite_model_buf, 0)

######################################################################
# Convert the TFLite model into Relay IR
# --------------------------------------

import tvm.relay as relay
dtype_dict = {input_name: data_type}
shape_dict = {input_name: data_shape}

mod, params = relay.frontend.from_tflite(tflite_model,
                                         shape_dict=shape_dict,
                                         dtype_dict=dtype_dict)

print("Printing relay module to relay_module.txt...")
with open('relay_module.txt', 'w') as f:
    print(mod.astext(show_meta_data=False), file=f)

######################################################################
# Load and pre-process demo image
# -------------------------------

img_org = cv2.imread('kite.jpg')
img = cv2.cvtColor(img_org, cv2.COLOR_BGR2RGB)
img = cv2.resize(img, (300, 300))
img = img.reshape(1, img.shape[0], img.shape[1], img.shape[2]) # (1, 300, 300, 3)
img = img.astype(np.uint8)
flatten_image_data = img.flatten()
np.savetxt('input.txt', flatten_image_data, delimiter='\n')

######################################################################
# Compile the Relay module
# ------------------------

with tvm.transform.PassContext(opt_level=3, config={"tir.disable_vectorize":True}):
    graph, lib, params = relay.build(mod, target=target, target_host=target_host, params=params)

######################################################################
# Generate the five files for EV
# ------------------------------

print("Printing host code to host_code.cc...")
with open('host_code.cc', 'w') as f:
    print(lib.get_source(), file=f)

print("Printing device code to device_code.cl...")
with open('device_code.cl', 'w') as f:
    print(lib.imported_modules[0].get_source(), file=f)

print("Printing meta json to device_code.tvm_meta.json...")
lib.imported_modules[0].save("device_code", "cu")
os.remove("device_code")

print("Printing binary parameters to binary_params.bin...")
with open('binary_params.bin', 'wb') as writer:
    writer.write(relay.save_param_dict(params))
    writer.close()

print("Printing graph to graph.json...")
with open('graph.json', 'w') as f:
    print(graph, file=f)

######################################################################
# Move all resulting files to a directory
# ---------------------------------------

import shutil

try:
    shutil.rmtree(resulting_file_directory)
except OSError as e:
    print("Preparing a directory for resulting files")

os.mkdir(resulting_file_directory)

shutil.move('input.txt', resulting_file_directory)
shutil.move('relay_module.txt', resulting_file_directory)
shutil.move('host_code.cc', resulting_file_directory)
shutil.move('device_code.cl', resulting_file_directory)
shutil.move('device_code.tvm_meta.json', resulting_file_directory)
shutil.move('binary_params.bin', resulting_file_directory)
shutil.move('graph.json', resulting_file_directory)

######################################################################
# Create TVM runtime and do inference
# -----------------------------------

def run(graph, lib, params, ctx, input_img):
    # create module
    m = graph_runtime.create(graph, lib, ctx)
    # set input and parameters
    tvm_input = tvm.nd.array(input_img, ctx=ctx)
    m.set_input(input_name, tvm_input)
    m.set_input(**params)
    # run
    timeStart = time.time()
    m.run()
    timeEnd = time.time()
    print("Inference time: %f" % (timeEnd - timeStart))
    # get outputs
    bounding_boxs, class_IDs, scores = m.get_output(0), m.get_output(1), m.get_output(2)
    return class_IDs, scores, bounding_boxs

class_IDs, scores, bounding_boxs = run(graph, lib, params, ctx, img)
print("class_IDs of TVM:", class_IDs.asnumpy()[0])
with open('class_IDs.txt', 'w') as f:
    print(class_IDs, file=f)
print("scores of TVM:", scores.asnumpy()[0])
with open('scores.txt', 'w') as f:
    print(scores, file=f)
print("bounding_boxs of TVM:", bounding_boxs.asnumpy()[0])
with open('bounding_boxs.txt', 'w') as f:
    print(bounding_boxs, file=f)

