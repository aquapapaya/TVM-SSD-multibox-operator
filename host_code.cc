#include "tvm/runtime/c_runtime_api.h"
#include "tvm/runtime/c_backend_api.h"
void* __tvm_module_ctx = NULL;
static void* __tvm_set_device_packed = NULL;
static void* fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_add_clip_cast_cl_16034316225406185231__kernel0_packed = NULL;
static void* fused_nn_conv2d_subtract_add_add_cast_fixed_point_multiply_add_clip_cast_clip_2_kernel0_packed = NULL;
static void* fused_cast_sum_12_kernel0_packed = NULL;
static void* fused_nn_conv2d_multiply_subtract_add_add_cast_fixed_point_multiply_add_clip_cas_1311353059221188438__4_kernel0_packed = NULL;
static void* fused_nn_avg_pool2d_multiply_10_kernel0_packed = NULL;
static void* fused_nn_pad_2_kernel0_packed = NULL;
static void* fused_nn_pad_1_kernel0_packed = NULL;
static void* fused_vision_non_max_suppression_kernel0_packed = NULL;
static void* fused_vision_non_max_suppression_kernel1_packed = NULL;
static void* fused_vision_non_max_suppression_kernel2_packed = NULL;
static void* fused_nn_pad_7_kernel0_packed = NULL;
static void* fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_7_kernel0_packed = NULL;
static void* fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_4_kernel0_packed = NULL;
static void* fused_nn_avg_pool2d_multiply_17_kernel0_packed = NULL;
static void* fused_nn_avg_pool2d_multiply_8_kernel0_packed = NULL;
static void* fused_nn_pad_4_kernel0_packed = NULL;
static void* fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_2_kernel0_packed = NULL;
static void* fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_5_kernel0_packed = NULL;
static void* fused_cast_sum_11_kernel0_packed = NULL;
static void* fused_multiply_12_kernel0_packed = NULL;
static void* fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_11_kernel0_packed = NULL;
static void* fused_nn_conv2d_multiply_subtract_add_add_cast_fixed_point_multiply_add_clip_cas_1311353059221188438__kernel0_packed = NULL;
static void* fused_nn_avg_pool2d_multiply_9_kernel0_packed = NULL;
static void* fused_multiply_9_kernel0_packed = NULL;
static void* fused_nn_conv2d_multiply_subtract_add_add_cast_fixed_point_multiply_add_clip_cas_1311353059221188438__3_kernel0_packed = NULL;
static void* fused_cast_sum_2_kernel0_packed = NULL;
static void* fused_nn_conv2d_multiply_subtract_add_add_cast_fixed_point_multiply_add_clip_cas_2927425864328527930__2_kernel0_packed = NULL;
static void* fused_cast_sum_7_kernel0_packed = NULL;
static void* fused_cast_multiply_2_kernel0_packed = NULL;
static void* fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_6_kernel0_packed = NULL;
static void* fused_strided_slice_split_kernel0_packed = NULL;
static void* fused_strided_slice_split_kernel1_packed = NULL;
static void* fused_strided_slice_split_kernel2_packed = NULL;
static void* fused_strided_slice_split_kernel3_packed = NULL;
static void* fused_strided_slice_split_kernel4_packed = NULL;
static void* fused_strided_slice_split_kernel5_packed = NULL;
static void* fused_cast_multiply_3_kernel0_packed = NULL;
static void* fused_nn_avg_pool2d_multiply_13_kernel0_packed = NULL;
static void* fused_nn_conv2d_subtract_add_add_cast_fixed_point_multiply_add_clip_cast_clip_3_kernel0_packed = NULL;
static void* fused_nn_avg_pool2d_multiply_7_kernel0_packed = NULL;
static void* fused_nn_pad_9_kernel0_packed = NULL;
static void* fused_nn_avg_pool2d_multiply_3_kernel0_packed = NULL;
static void* fused_nn_pad_kernel0_packed = NULL;
static void* fused_cast_multiply_1_kernel0_packed = NULL;
static void* fused_reshape_cast_subtract_fixed_point_multiply_add_clip_cast_reshape_cast_subt_10421831741047255328__kernel0_packed = NULL;
static void* fused_nn_avg_pool2d_multiply_6_kernel0_packed = NULL;
static void* fused_cast_sum_kernel0_packed = NULL;
static void* fused_cast_sum_14_kernel0_packed = NULL;
static void* fused_multiply_11_kernel0_packed = NULL;
static void* fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_5_kernel0_packed = NULL;
static void* fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_1_kernel0_packed = NULL;
static void* fused_nn_avg_pool2d_multiply_4_kernel0_packed = NULL;
static void* fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_add_clip_cast_2_kernel0_packed = NULL;
static void* fused_concatenate_1_kernel0_packed = NULL;
static void* fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_6_kernel0_packed = NULL;
static void* fused_cast_sum_1_kernel0_packed = NULL;
static void* fused_cast_sum_17_kernel0_packed = NULL;
static void* fused_cast_multiply_5_kernel0_packed = NULL;
static void* fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_9_kernel0_packed = NULL;
static void* fused_cast_multiply_kernel0_packed = NULL;
static void* fused_nn_pad_6_kernel0_packed = NULL;
static void* fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_12_kernel0_packed = NULL;
static void* fused_cast_sum_10_kernel0_packed = NULL;
static void* fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_7_kernel0_packed = NULL;
static void* fused_cast_sum_15_kernel0_packed = NULL;
static void* fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_add_clip_cast_1_kernel0_packed = NULL;
static void* fused_nn_conv2d_subtract_add_add_cast_fixed_point_multiply_add_clip_cast_clip_kernel0_packed = NULL;
static void* fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_9_kernel0_packed = NULL;
static void* fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_kernel0_packed = NULL;
static void* fused_cast_sum_13_kernel0_packed = NULL;
static void* fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_11_kernel0_packed = NULL;
static void* fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_3_kernel0_packed = NULL;
static void* fused_reshape_reshape_cast_subtract_fixed_point_multiply_add_clip_cast_reshape_c_14817192852064521498__kernel0_packed = NULL;
static void* fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_3_kernel0_packed = NULL;
static void* fused_nn_avg_pool2d_multiply_kernel0_packed = NULL;
static void* fused_nn_avg_pool2d_multiply_14_kernel0_packed = NULL;
static void* fused_cast_sum_8_kernel0_packed = NULL;
static void* fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_add_clip_cast_3_kernel0_packed = NULL;
static void* fused_cast_sum_4_kernel0_packed = NULL;
static void* fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_10_kernel0_packed = NULL;
static void* fused_cast_sum_3_kernel0_packed = NULL;
static void* fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_10_kernel0_packed = NULL;
static void* fused_vision_multibox_transform_loc_kernel0_packed = NULL;
static void* fused_vision_multibox_transform_loc_kernel1_packed = NULL;
static void* fused_vision_get_valid_counts_kernel0_packed = NULL;
static void* fused_nn_pad_8_kernel0_packed = NULL;
static void* fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_1_kernel0_packed = NULL;
static void* fused_nn_pad_10_kernel0_packed = NULL;
static void* fused_cast_sum_9_kernel0_packed = NULL;
static void* fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_4_kernel0_packed = NULL;
static void* fused_cast_sum_5_kernel0_packed = NULL;
static void* fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_kernel0_packed = NULL;
static void* fused_nn_conv2d_multiply_subtract_add_add_cast_fixed_point_multiply_add_clip_cas_1311353059221188438__6_kernel0_packed = NULL;
static void* fused_nn_avg_pool2d_multiply_11_kernel0_packed = NULL;
static void* fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_add_clip_cast_kernel0_packed = NULL;
static void* fused_nn_conv2d_multiply_subtract_add_add_cast_fixed_point_multiply_add_clip_cas_2927425864328527930__1_kernel0_packed = NULL;
static void* fused_nn_avg_pool2d_multiply_15_kernel0_packed = NULL;
static void* fused_nn_pad_5_kernel0_packed = NULL;
static void* fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_8_kernel0_packed = NULL;
static void* fused_multiply_10_kernel0_packed = NULL;
static void* fused_cast_multiply_4_kernel0_packed = NULL;
static void* fused_multiply_8_kernel0_packed = NULL;
static void* fused_nn_pad_3_kernel0_packed = NULL;
static void* fused_reshape_6_kernel0_packed = NULL;
static void* fused_nn_avg_pool2d_multiply_12_kernel0_packed = NULL;
static void* fused_nn_conv2d_multiply_subtract_add_add_cast_fixed_point_multiply_add_clip_cas_1311353059221188438__7_kernel0_packed = NULL;
static void* fused_nn_avg_pool2d_multiply_16_kernel0_packed = NULL;
static void* fused_cast_multiply_6_kernel0_packed = NULL;
static void* fused_nn_conv2d_subtract_add_add_cast_fixed_point_multiply_clip_cast_kernel0_packed = NULL;
static void* fused_nn_conv2d_multiply_subtract_add_add_cast_fixed_point_multiply_add_clip_cas_1311353059221188438__5_kernel0_packed = NULL;
static void* fused_cast_sum_16_kernel0_packed = NULL;
static void* fused_nn_pad_11_kernel0_packed = NULL;
static void* fused_nn_avg_pool2d_multiply_5_kernel0_packed = NULL;
static void* fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_8_kernel0_packed = NULL;
static void* fused_nn_conv2d_subtract_add_add_cast_fixed_point_multiply_add_clip_cast_clip_1_kernel0_packed = NULL;
static void* fused_nn_conv2d_multiply_subtract_add_add_cast_fixed_point_multiply_add_clip_cas_1311353059221188438__1_kernel0_packed = NULL;
static void* fused_nn_conv2d_multiply_subtract_add_add_cast_fixed_point_multiply_add_clip_cas_1311353059221188438__2_kernel0_packed = NULL;
static void* fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_12_kernel0_packed = NULL;
static void* fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_2_kernel0_packed = NULL;
static void* fused_nn_conv2d_multiply_subtract_add_add_cast_fixed_point_multiply_add_clip_cas_2927425864328527930__kernel0_packed = NULL;
static void* fused_nn_avg_pool2d_multiply_1_kernel0_packed = NULL;
static void* fused_cast_sum_6_kernel0_packed = NULL;
static void* fused_nn_avg_pool2d_multiply_2_kernel0_packed = NULL;
static void* fused_reshape_7_kernel0_packed = NULL;
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_add_clip_cast_cl_16034316225406185231_(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[6];
  void* stack_tcode = stack;
  TVMValue stack1[11];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* arg2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg2_code = ((int32_t*)arg_type_ids)[(2)];
  void* arg3 = (((TVMValue*)args)[3].v_handle);
  int32_t arg3_code = ((int32_t*)arg_type_ids)[(3)];
  void* arg4 = (((TVMValue*)args)[4].v_handle);
  int32_t arg4_code = ((int32_t*)arg_type_ids)[(4)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* placeholder1 = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg2)[0].data);
  void* arg2_shape = (((DLTensor*)arg2)[0].shape);
  void* arg2_strides = (((DLTensor*)arg2)[0].strides);
  void* placeholder3 = (((DLTensor*)arg3)[0].data);
  void* arg3_shape = (((DLTensor*)arg3)[0].shape);
  void* arg3_strides = (((DLTensor*)arg3)[0].strides);
  void* compute = (((DLTensor*)arg4)[0].data);
  void* arg4_shape = (((DLTensor*)arg4)[0].shape);
  void* arg4_strides = (((DLTensor*)arg4)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  if (!(arg2_strides == NULL)) {
  }
  if (!(arg3_strides == NULL)) {
  }
  if (!(arg4_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder1;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_handle) = compute;
  ((int32_t*)stack_tcode)[(2)] = 3;
  (((TVMValue*)stack_value)[3].v_handle) = placeholder3;
  ((int32_t*)stack_tcode)[(3)] = 3;
  (((TVMValue*)stack_value)[4].v_handle) = placeholder2;
  ((int32_t*)stack_tcode)[(4)] = 3;
  (((TVMValue*)stack_value)[5].v_int64) = ((int64_t)100);
  ((int32_t*)stack_tcode)[(5)] = 0;
  (((TVMValue*)stack_value)[6].v_int64) = ((int64_t)1);
  ((int32_t*)stack_tcode)[(6)] = 0;
  (((TVMValue*)stack_value)[7].v_int64) = ((int64_t)24);
  ((int32_t*)stack_tcode)[(7)] = 0;
  (((TVMValue*)stack_value)[8].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(8)] = 0;
  (((TVMValue*)stack_value)[9].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(9)] = 0;
  if (fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_add_clip_cast_cl_16034316225406185231__kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_add_clip_cast_cl_16034316225406185231__kernel0", &fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_add_clip_cast_cl_16034316225406185231__kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_add_clip_cast_cl_16034316225406185231__kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 10, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_conv2d_subtract_add_add_cast_fixed_point_multiply_add_clip_cast_clip_2(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[6];
  void* stack_tcode = stack;
  TVMValue stack1[12];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* arg2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg2_code = ((int32_t*)arg_type_ids)[(2)];
  void* arg3 = (((TVMValue*)args)[3].v_handle);
  int32_t arg3_code = ((int32_t*)arg_type_ids)[(3)];
  void* arg4 = (((TVMValue*)args)[4].v_handle);
  int32_t arg4_code = ((int32_t*)arg_type_ids)[(4)];
  void* arg5 = (((TVMValue*)args)[5].v_handle);
  int32_t arg5_code = ((int32_t*)arg_type_ids)[(5)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* placeholder1 = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg2)[0].data);
  void* arg2_shape = (((DLTensor*)arg2)[0].shape);
  void* arg2_strides = (((DLTensor*)arg2)[0].strides);
  void* placeholder3 = (((DLTensor*)arg3)[0].data);
  void* arg3_shape = (((DLTensor*)arg3)[0].shape);
  void* arg3_strides = (((DLTensor*)arg3)[0].strides);
  void* placeholder4 = (((DLTensor*)arg4)[0].data);
  void* arg4_shape = (((DLTensor*)arg4)[0].shape);
  void* arg4_strides = (((DLTensor*)arg4)[0].strides);
  void* compute = (((DLTensor*)arg5)[0].data);
  void* arg5_shape = (((DLTensor*)arg5)[0].shape);
  void* arg5_strides = (((DLTensor*)arg5)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  if (!(arg2_strides == NULL)) {
  }
  if (!(arg3_strides == NULL)) {
  }
  if (!(arg4_strides == NULL)) {
  }
  if (!(arg5_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder1;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_handle) = compute;
  ((int32_t*)stack_tcode)[(2)] = 3;
  (((TVMValue*)stack_value)[3].v_handle) = placeholder3;
  ((int32_t*)stack_tcode)[(3)] = 3;
  (((TVMValue*)stack_value)[4].v_handle) = placeholder4;
  ((int32_t*)stack_tcode)[(4)] = 3;
  (((TVMValue*)stack_value)[5].v_handle) = placeholder2;
  ((int32_t*)stack_tcode)[(5)] = 3;
  (((TVMValue*)stack_value)[6].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(6)] = 0;
  (((TVMValue*)stack_value)[7].v_int64) = ((int64_t)1);
  ((int32_t*)stack_tcode)[(7)] = 0;
  (((TVMValue*)stack_value)[8].v_int64) = ((int64_t)24);
  ((int32_t*)stack_tcode)[(8)] = 0;
  (((TVMValue*)stack_value)[9].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(9)] = 0;
  (((TVMValue*)stack_value)[10].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(10)] = 0;
  if (fused_nn_conv2d_subtract_add_add_cast_fixed_point_multiply_add_clip_cast_clip_2_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_conv2d_subtract_add_add_cast_fixed_point_multiply_add_clip_cast_clip_2_kernel0", &fused_nn_conv2d_subtract_add_add_cast_fixed_point_multiply_add_clip_cast_clip_2_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_conv2d_subtract_add_add_cast_fixed_point_multiply_add_clip_cast_clip_2_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 11, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_cast_sum_12(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[3];
  void* stack_tcode = stack;
  TVMValue stack1[6];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* T_cast_red = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = T_cast_red;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(2)] = 0;
  (((TVMValue*)stack_value)[3].v_int64) = ((int64_t)32);
  ((int32_t*)stack_tcode)[(3)] = 0;
  (((TVMValue*)stack_value)[4].v_int64) = ((int64_t)32);
  ((int32_t*)stack_tcode)[(4)] = 0;
  if (fused_cast_sum_12_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_cast_sum_12_kernel0", &fused_cast_sum_12_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_cast_sum_12_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 5, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_conv2d_multiply_subtract_add_add_cast_fixed_point_multiply_add_clip_cas_1311353059221188438__4(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[6];
  void* stack_tcode = stack;
  TVMValue stack1[12];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* arg2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg2_code = ((int32_t*)arg_type_ids)[(2)];
  void* arg3 = (((TVMValue*)args)[3].v_handle);
  int32_t arg3_code = ((int32_t*)arg_type_ids)[(3)];
  void* arg4 = (((TVMValue*)args)[4].v_handle);
  int32_t arg4_code = ((int32_t*)arg_type_ids)[(4)];
  void* arg5 = (((TVMValue*)args)[5].v_handle);
  int32_t arg5_code = ((int32_t*)arg_type_ids)[(5)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* placeholder1 = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg2)[0].data);
  void* arg2_shape = (((DLTensor*)arg2)[0].shape);
  void* arg2_strides = (((DLTensor*)arg2)[0].strides);
  void* placeholder3 = (((DLTensor*)arg3)[0].data);
  void* arg3_shape = (((DLTensor*)arg3)[0].shape);
  void* arg3_strides = (((DLTensor*)arg3)[0].strides);
  void* placeholder4 = (((DLTensor*)arg4)[0].data);
  void* arg4_shape = (((DLTensor*)arg4)[0].shape);
  void* arg4_strides = (((DLTensor*)arg4)[0].strides);
  void* T_cast = (((DLTensor*)arg5)[0].data);
  void* arg5_shape = (((DLTensor*)arg5)[0].shape);
  void* arg5_strides = (((DLTensor*)arg5)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  if (!(arg2_strides == NULL)) {
  }
  if (!(arg3_strides == NULL)) {
  }
  if (!(arg4_strides == NULL)) {
  }
  if (!(arg5_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder1;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_handle) = T_cast;
  ((int32_t*)stack_tcode)[(2)] = 3;
  (((TVMValue*)stack_value)[3].v_handle) = placeholder3;
  ((int32_t*)stack_tcode)[(3)] = 3;
  (((TVMValue*)stack_value)[4].v_handle) = placeholder4;
  ((int32_t*)stack_tcode)[(4)] = 3;
  (((TVMValue*)stack_value)[5].v_handle) = placeholder2;
  ((int32_t*)stack_tcode)[(5)] = 3;
  (((TVMValue*)stack_value)[6].v_int64) = ((int64_t)25);
  ((int32_t*)stack_tcode)[(6)] = 0;
  (((TVMValue*)stack_value)[7].v_int64) = ((int64_t)1);
  ((int32_t*)stack_tcode)[(7)] = 0;
  (((TVMValue*)stack_value)[8].v_int64) = ((int64_t)3);
  ((int32_t*)stack_tcode)[(8)] = 0;
  (((TVMValue*)stack_value)[9].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(9)] = 0;
  (((TVMValue*)stack_value)[10].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(10)] = 0;
  if (fused_nn_conv2d_multiply_subtract_add_add_cast_fixed_point_multiply_add_clip_cas_1311353059221188438__4_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_conv2d_multiply_subtract_add_add_cast_fixed_point_multiply_add_clip_cas_1311353059221188438__4_kernel0", &fused_nn_conv2d_multiply_subtract_add_add_cast_fixed_point_multiply_add_clip_cas_1311353059221188438__4_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_conv2d_multiply_subtract_add_add_cast_fixed_point_multiply_add_clip_cas_1311353059221188438__4_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 11, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_avg_pool2d_multiply_10(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[3];
  void* stack_tcode = stack;
  TVMValue stack1[5];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* T_multiply = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = T_multiply;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_int64) = ((int64_t)2166);
  ((int32_t*)stack_tcode)[(2)] = 0;
  (((TVMValue*)stack_value)[3].v_int64) = ((int64_t)64);
  ((int32_t*)stack_tcode)[(3)] = 0;
  if (fused_nn_avg_pool2d_multiply_10_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_avg_pool2d_multiply_10_kernel0", &fused_nn_avg_pool2d_multiply_10_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_avg_pool2d_multiply_10_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 4, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_pad_2(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[3];
  void* stack_tcode = stack;
  TVMValue stack1[5];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* T_pad = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = T_pad;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_int64) = ((int64_t)256);
  ((int32_t*)stack_tcode)[(2)] = 0;
  (((TVMValue*)stack_value)[3].v_int64) = ((int64_t)64);
  ((int32_t*)stack_tcode)[(3)] = 0;
  if (fused_nn_pad_2_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_pad_2_kernel0", &fused_nn_pad_2_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_pad_2_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 4, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_pad_1(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[3];
  void* stack_tcode = stack;
  TVMValue stack1[5];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* T_pad = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = T_pad;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_int64) = ((int64_t)256);
  ((int32_t*)stack_tcode)[(2)] = 0;
  (((TVMValue*)stack_value)[3].v_int64) = ((int64_t)64);
  ((int32_t*)stack_tcode)[(3)] = 0;
  if (fused_nn_pad_1_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_pad_1_kernel0", &fused_nn_pad_1_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_pad_1_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 4, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_vision_non_max_suppression(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[5];
  void* stack_tcode = stack;
  TVMValue stack1[10];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* arg2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg2_code = ((int32_t*)arg_type_ids)[(2)];
  void* arg3 = (((TVMValue*)args)[3].v_handle);
  int32_t arg3_code = ((int32_t*)arg_type_ids)[(3)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* placeholder1 = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg2)[0].data);
  void* arg2_shape = (((DLTensor*)arg2)[0].shape);
  void* arg2_strides = (((DLTensor*)arg2)[0].strides);
  void* nms_v0 = (((DLTensor*)arg3)[0].data);
  void* arg3_shape = (((DLTensor*)arg3)[0].shape);
  void* arg3_strides = (((DLTensor*)arg3)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  if (!(arg3_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  void* compute = TVMBackendAllocWorkspace(2, dev_id, (uint64_t)7668, 2, 32);
  if (compute == NULL) {
    return -1;
  }
  void* argsort_gpu_v0 = TVMBackendAllocWorkspace(2, dev_id, (uint64_t)7668, 2, 32);
  if (argsort_gpu_v0 == NULL) {
    return -1;
  }
  void* argsort_gpu_v1 = TVMBackendAllocWorkspace(2, dev_id, (uint64_t)7668, 0, 32);
  if (argsort_gpu_v1 == NULL) {
    return -1;
  }
  void* num_valid_boxes = TVMBackendAllocWorkspace(2, dev_id, (uint64_t)4, 0, 32);
  if (num_valid_boxes == NULL) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = compute;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_int64) = ((int64_t)30);
  ((int32_t*)stack_tcode)[(2)] = 0;
  (((TVMValue*)stack_value)[3].v_int64) = ((int64_t)64);
  ((int32_t*)stack_tcode)[(3)] = 0;
  if (fused_vision_non_max_suppression_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_vision_non_max_suppression_kernel0", &fused_vision_non_max_suppression_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_vision_non_max_suppression_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 4, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = argsort_gpu_v0;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = compute;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_handle) = argsort_gpu_v1;
  ((int32_t*)stack_tcode)[(2)] = 3;
  (((TVMValue*)stack_value)[3].v_int64) = ((int64_t)64);
  ((int32_t*)stack_tcode)[(3)] = 0;
  if (fused_vision_non_max_suppression_kernel1_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_vision_non_max_suppression_kernel1", &fused_vision_non_max_suppression_kernel1_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val2;
  int ret_type_code2;
  if (TVMFuncCall(fused_vision_non_max_suppression_kernel1_packed, (TVMValue*) stack_value, (int*) stack_tcode, 4, &ret_val2, &ret_type_code2) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder1;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = nms_v0;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(2)] = 3;
  (((TVMValue*)stack_value)[3].v_handle) = argsort_gpu_v1;
  ((int32_t*)stack_tcode)[(3)] = 3;
  (((TVMValue*)stack_value)[4].v_handle) = compute;
  ((int32_t*)stack_tcode)[(4)] = 3;
  (((TVMValue*)stack_value)[5].v_handle) = num_valid_boxes;
  ((int32_t*)stack_tcode)[(5)] = 3;
  (((TVMValue*)stack_value)[6].v_handle) = placeholder2;
  ((int32_t*)stack_tcode)[(6)] = 3;
  (((TVMValue*)stack_value)[7].v_int64) = ((int64_t)64);
  ((int32_t*)stack_tcode)[(7)] = 0;
  (((TVMValue*)stack_value)[8].v_int64) = ((int64_t)30);
  ((int32_t*)stack_tcode)[(8)] = 0;
  if (fused_vision_non_max_suppression_kernel2_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_vision_non_max_suppression_kernel2", &fused_vision_non_max_suppression_kernel2_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val3;
  int ret_type_code3;
  if (TVMFuncCall(fused_vision_non_max_suppression_kernel2_packed, (TVMValue*) stack_value, (int*) stack_tcode, 9, &ret_val3, &ret_type_code3) != 0) {
    return -1;
  }
  if (TVMBackendFreeWorkspace(2, dev_id, num_valid_boxes) != 0) {
    return -1;
  }
  if (TVMBackendFreeWorkspace(2, dev_id, argsort_gpu_v1) != 0) {
    return -1;
  }
  if (TVMBackendFreeWorkspace(2, dev_id, argsort_gpu_v0) != 0) {
    return -1;
  }
  if (TVMBackendFreeWorkspace(2, dev_id, compute) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_pad_7(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[3];
  void* stack_tcode = stack;
  TVMValue stack1[5];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* T_pad = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = T_pad;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_int64) = ((int64_t)256);
  ((int32_t*)stack_tcode)[(2)] = 0;
  (((TVMValue*)stack_value)[3].v_int64) = ((int64_t)64);
  ((int32_t*)stack_tcode)[(3)] = 0;
  if (fused_nn_pad_7_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_pad_7_kernel0", &fused_nn_pad_7_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_pad_7_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 4, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_7(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[4];
  void* stack_tcode = stack;
  TVMValue stack1[8];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* arg2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg2_code = ((int32_t*)arg_type_ids)[(2)];
  void* arg3 = (((TVMValue*)args)[3].v_handle);
  int32_t arg3_code = ((int32_t*)arg_type_ids)[(3)];
  void* arg4 = (((TVMValue*)args)[4].v_handle);
  int32_t arg4_code = ((int32_t*)arg_type_ids)[(4)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* placeholder1 = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg2)[0].data);
  void* arg2_shape = (((DLTensor*)arg2)[0].shape);
  void* arg2_strides = (((DLTensor*)arg2)[0].strides);
  void* placeholder3 = (((DLTensor*)arg3)[0].data);
  void* arg3_shape = (((DLTensor*)arg3)[0].shape);
  void* arg3_strides = (((DLTensor*)arg3)[0].strides);
  void* T_cast = (((DLTensor*)arg4)[0].data);
  void* arg4_shape = (((DLTensor*)arg4)[0].shape);
  void* arg4_strides = (((DLTensor*)arg4)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  if (!(arg2_strides == NULL)) {
  }
  if (!(arg3_strides == NULL)) {
  }
  if (!(arg4_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder1;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_handle) = T_cast;
  ((int32_t*)stack_tcode)[(2)] = 3;
  (((TVMValue*)stack_value)[3].v_handle) = placeholder3;
  ((int32_t*)stack_tcode)[(3)] = 3;
  (((TVMValue*)stack_value)[4].v_handle) = placeholder2;
  ((int32_t*)stack_tcode)[(4)] = 3;
  (((TVMValue*)stack_value)[5].v_int64) = ((int64_t)361);
  ((int32_t*)stack_tcode)[(5)] = 0;
  (((TVMValue*)stack_value)[6].v_int64) = ((int64_t)96);
  ((int32_t*)stack_tcode)[(6)] = 0;
  if (fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_7_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_7_kernel0", &fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_7_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_7_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 7, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_4(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[4];
  void* stack_tcode = stack;
  TVMValue stack1[8];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* arg2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg2_code = ((int32_t*)arg_type_ids)[(2)];
  void* arg3 = (((TVMValue*)args)[3].v_handle);
  int32_t arg3_code = ((int32_t*)arg_type_ids)[(3)];
  void* arg4 = (((TVMValue*)args)[4].v_handle);
  int32_t arg4_code = ((int32_t*)arg_type_ids)[(4)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* placeholder1 = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg2)[0].data);
  void* arg2_shape = (((DLTensor*)arg2)[0].shape);
  void* arg2_strides = (((DLTensor*)arg2)[0].strides);
  void* placeholder3 = (((DLTensor*)arg3)[0].data);
  void* arg3_shape = (((DLTensor*)arg3)[0].shape);
  void* arg3_strides = (((DLTensor*)arg3)[0].strides);
  void* T_cast = (((DLTensor*)arg4)[0].data);
  void* arg4_shape = (((DLTensor*)arg4)[0].shape);
  void* arg4_strides = (((DLTensor*)arg4)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  if (!(arg2_strides == NULL)) {
  }
  if (!(arg3_strides == NULL)) {
  }
  if (!(arg4_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder1;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_handle) = T_cast;
  ((int32_t*)stack_tcode)[(2)] = 3;
  (((TVMValue*)stack_value)[3].v_handle) = placeholder3;
  ((int32_t*)stack_tcode)[(3)] = 3;
  (((TVMValue*)stack_value)[4].v_handle) = placeholder2;
  ((int32_t*)stack_tcode)[(4)] = 3;
  (((TVMValue*)stack_value)[5].v_int64) = ((int64_t)100);
  ((int32_t*)stack_tcode)[(5)] = 0;
  (((TVMValue*)stack_value)[6].v_int64) = ((int64_t)384);
  ((int32_t*)stack_tcode)[(6)] = 0;
  if (fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_4_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_4_kernel0", &fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_4_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_4_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 7, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_avg_pool2d_multiply_17(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[3];
  void* stack_tcode = stack;
  TVMValue stack1[5];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* T_multiply = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = T_multiply;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_int64) = ((int64_t)1);
  ((int32_t*)stack_tcode)[(2)] = 0;
  (((TVMValue*)stack_value)[3].v_int64) = ((int64_t)64);
  ((int32_t*)stack_tcode)[(3)] = 0;
  if (fused_nn_avg_pool2d_multiply_17_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_avg_pool2d_multiply_17_kernel0", &fused_nn_avg_pool2d_multiply_17_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_avg_pool2d_multiply_17_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 4, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_avg_pool2d_multiply_8(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[3];
  void* stack_tcode = stack;
  TVMValue stack1[5];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* T_multiply = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = T_multiply;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_int64) = ((int64_t)2166);
  ((int32_t*)stack_tcode)[(2)] = 0;
  (((TVMValue*)stack_value)[3].v_int64) = ((int64_t)64);
  ((int32_t*)stack_tcode)[(3)] = 0;
  if (fused_nn_avg_pool2d_multiply_8_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_avg_pool2d_multiply_8_kernel0", &fused_nn_avg_pool2d_multiply_8_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_avg_pool2d_multiply_8_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 4, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_pad_4(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[3];
  void* stack_tcode = stack;
  TVMValue stack1[5];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* T_pad = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = T_pad;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_int64) = ((int64_t)256);
  ((int32_t*)stack_tcode)[(2)] = 0;
  (((TVMValue*)stack_value)[3].v_int64) = ((int64_t)64);
  ((int32_t*)stack_tcode)[(3)] = 0;
  if (fused_nn_pad_4_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_pad_4_kernel0", &fused_nn_pad_4_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_pad_4_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 4, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_2(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[6];
  void* stack_tcode = stack;
  TVMValue stack1[11];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* arg2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg2_code = ((int32_t*)arg_type_ids)[(2)];
  void* arg3 = (((TVMValue*)args)[3].v_handle);
  int32_t arg3_code = ((int32_t*)arg_type_ids)[(3)];
  void* arg4 = (((TVMValue*)args)[4].v_handle);
  int32_t arg4_code = ((int32_t*)arg_type_ids)[(4)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* placeholder1 = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg2)[0].data);
  void* arg2_shape = (((DLTensor*)arg2)[0].shape);
  void* arg2_strides = (((DLTensor*)arg2)[0].strides);
  void* placeholder3 = (((DLTensor*)arg3)[0].data);
  void* arg3_shape = (((DLTensor*)arg3)[0].shape);
  void* arg3_strides = (((DLTensor*)arg3)[0].strides);
  void* T_cast = (((DLTensor*)arg4)[0].data);
  void* arg4_shape = (((DLTensor*)arg4)[0].shape);
  void* arg4_strides = (((DLTensor*)arg4)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  if (!(arg2_strides == NULL)) {
  }
  if (!(arg3_strides == NULL)) {
  }
  if (!(arg4_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder1;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_handle) = T_cast;
  ((int32_t*)stack_tcode)[(2)] = 3;
  (((TVMValue*)stack_value)[3].v_handle) = placeholder3;
  ((int32_t*)stack_tcode)[(3)] = 3;
  (((TVMValue*)stack_value)[4].v_handle) = placeholder2;
  ((int32_t*)stack_tcode)[(4)] = 3;
  (((TVMValue*)stack_value)[5].v_int64) = ((int64_t)361);
  ((int32_t*)stack_tcode)[(5)] = 0;
  (((TVMValue*)stack_value)[6].v_int64) = ((int64_t)1);
  ((int32_t*)stack_tcode)[(6)] = 0;
  (((TVMValue*)stack_value)[7].v_int64) = ((int64_t)48);
  ((int32_t*)stack_tcode)[(7)] = 0;
  (((TVMValue*)stack_value)[8].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(8)] = 0;
  (((TVMValue*)stack_value)[9].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(9)] = 0;
  if (fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_2_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_2_kernel0", &fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_2_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_2_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 10, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_5(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[6];
  void* stack_tcode = stack;
  TVMValue stack1[11];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* arg2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg2_code = ((int32_t*)arg_type_ids)[(2)];
  void* arg3 = (((TVMValue*)args)[3].v_handle);
  int32_t arg3_code = ((int32_t*)arg_type_ids)[(3)];
  void* arg4 = (((TVMValue*)args)[4].v_handle);
  int32_t arg4_code = ((int32_t*)arg_type_ids)[(4)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* placeholder1 = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg2)[0].data);
  void* arg2_shape = (((DLTensor*)arg2)[0].shape);
  void* arg2_strides = (((DLTensor*)arg2)[0].strides);
  void* placeholder3 = (((DLTensor*)arg3)[0].data);
  void* arg3_shape = (((DLTensor*)arg3)[0].shape);
  void* arg3_strides = (((DLTensor*)arg3)[0].strides);
  void* T_cast = (((DLTensor*)arg4)[0].data);
  void* arg4_shape = (((DLTensor*)arg4)[0].shape);
  void* arg4_strides = (((DLTensor*)arg4)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  if (!(arg2_strides == NULL)) {
  }
  if (!(arg3_strides == NULL)) {
  }
  if (!(arg4_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder1;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_handle) = T_cast;
  ((int32_t*)stack_tcode)[(2)] = 3;
  (((TVMValue*)stack_value)[3].v_handle) = placeholder3;
  ((int32_t*)stack_tcode)[(3)] = 3;
  (((TVMValue*)stack_value)[4].v_handle) = placeholder2;
  ((int32_t*)stack_tcode)[(4)] = 3;
  (((TVMValue*)stack_value)[5].v_int64) = ((int64_t)361);
  ((int32_t*)stack_tcode)[(5)] = 0;
  (((TVMValue*)stack_value)[6].v_int64) = ((int64_t)1);
  ((int32_t*)stack_tcode)[(6)] = 0;
  (((TVMValue*)stack_value)[7].v_int64) = ((int64_t)48);
  ((int32_t*)stack_tcode)[(7)] = 0;
  (((TVMValue*)stack_value)[8].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(8)] = 0;
  (((TVMValue*)stack_value)[9].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(9)] = 0;
  if (fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_5_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_5_kernel0", &fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_5_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_5_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 10, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_cast_sum_11(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[3];
  void* stack_tcode = stack;
  TVMValue stack1[6];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* T_cast_red = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = T_cast_red;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_int64) = ((int64_t)1);
  ((int32_t*)stack_tcode)[(2)] = 0;
  (((TVMValue*)stack_value)[3].v_int64) = ((int64_t)32);
  ((int32_t*)stack_tcode)[(3)] = 0;
  (((TVMValue*)stack_value)[4].v_int64) = ((int64_t)32);
  ((int32_t*)stack_tcode)[(4)] = 0;
  if (fused_cast_sum_11_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_cast_sum_11_kernel0", &fused_cast_sum_11_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_cast_sum_11_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 5, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_multiply_12(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[3];
  void* stack_tcode = stack;
  TVMValue stack1[5];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* T_multiply = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = T_multiply;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_int64) = ((int64_t)1);
  ((int32_t*)stack_tcode)[(2)] = 0;
  (((TVMValue*)stack_value)[3].v_int64) = ((int64_t)64);
  ((int32_t*)stack_tcode)[(3)] = 0;
  if (fused_multiply_12_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_multiply_12_kernel0", &fused_multiply_12_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_multiply_12_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 4, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_11(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[4];
  void* stack_tcode = stack;
  TVMValue stack1[8];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* arg2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg2_code = ((int32_t*)arg_type_ids)[(2)];
  void* arg3 = (((TVMValue*)args)[3].v_handle);
  int32_t arg3_code = ((int32_t*)arg_type_ids)[(3)];
  void* arg4 = (((TVMValue*)args)[4].v_handle);
  int32_t arg4_code = ((int32_t*)arg_type_ids)[(4)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* placeholder1 = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg2)[0].data);
  void* arg2_shape = (((DLTensor*)arg2)[0].shape);
  void* arg2_strides = (((DLTensor*)arg2)[0].strides);
  void* placeholder3 = (((DLTensor*)arg3)[0].data);
  void* arg3_shape = (((DLTensor*)arg3)[0].shape);
  void* arg3_strides = (((DLTensor*)arg3)[0].strides);
  void* T_cast = (((DLTensor*)arg4)[0].data);
  void* arg4_shape = (((DLTensor*)arg4)[0].shape);
  void* arg4_strides = (((DLTensor*)arg4)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  if (!(arg2_strides == NULL)) {
  }
  if (!(arg3_strides == NULL)) {
  }
  if (!(arg4_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder1;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_handle) = T_cast;
  ((int32_t*)stack_tcode)[(2)] = 3;
  (((TVMValue*)stack_value)[3].v_handle) = placeholder3;
  ((int32_t*)stack_tcode)[(3)] = 3;
  (((TVMValue*)stack_value)[4].v_handle) = placeholder2;
  ((int32_t*)stack_tcode)[(4)] = 3;
  (((TVMValue*)stack_value)[5].v_int64) = ((int64_t)25);
  ((int32_t*)stack_tcode)[(5)] = 0;
  (((TVMValue*)stack_value)[6].v_int64) = ((int64_t)768);
  ((int32_t*)stack_tcode)[(6)] = 0;
  if (fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_11_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_11_kernel0", &fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_11_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_11_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 7, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_conv2d_multiply_subtract_add_add_cast_fixed_point_multiply_add_clip_cas_1311353059221188438_(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[6];
  void* stack_tcode = stack;
  TVMValue stack1[12];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* arg2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg2_code = ((int32_t*)arg_type_ids)[(2)];
  void* arg3 = (((TVMValue*)args)[3].v_handle);
  int32_t arg3_code = ((int32_t*)arg_type_ids)[(3)];
  void* arg4 = (((TVMValue*)args)[4].v_handle);
  int32_t arg4_code = ((int32_t*)arg_type_ids)[(4)];
  void* arg5 = (((TVMValue*)args)[5].v_handle);
  int32_t arg5_code = ((int32_t*)arg_type_ids)[(5)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* placeholder1 = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg2)[0].data);
  void* arg2_shape = (((DLTensor*)arg2)[0].shape);
  void* arg2_strides = (((DLTensor*)arg2)[0].strides);
  void* placeholder3 = (((DLTensor*)arg3)[0].data);
  void* arg3_shape = (((DLTensor*)arg3)[0].shape);
  void* arg3_strides = (((DLTensor*)arg3)[0].strides);
  void* placeholder4 = (((DLTensor*)arg4)[0].data);
  void* arg4_shape = (((DLTensor*)arg4)[0].shape);
  void* arg4_strides = (((DLTensor*)arg4)[0].strides);
  void* T_cast = (((DLTensor*)arg5)[0].data);
  void* arg5_shape = (((DLTensor*)arg5)[0].shape);
  void* arg5_strides = (((DLTensor*)arg5)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  if (!(arg2_strides == NULL)) {
  }
  if (!(arg3_strides == NULL)) {
  }
  if (!(arg4_strides == NULL)) {
  }
  if (!(arg5_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder1;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_handle) = T_cast;
  ((int32_t*)stack_tcode)[(2)] = 3;
  (((TVMValue*)stack_value)[3].v_handle) = placeholder3;
  ((int32_t*)stack_tcode)[(3)] = 3;
  (((TVMValue*)stack_value)[4].v_handle) = placeholder4;
  ((int32_t*)stack_tcode)[(4)] = 3;
  (((TVMValue*)stack_value)[5].v_handle) = placeholder2;
  ((int32_t*)stack_tcode)[(5)] = 3;
  (((TVMValue*)stack_value)[6].v_int64) = ((int64_t)25);
  ((int32_t*)stack_tcode)[(6)] = 0;
  (((TVMValue*)stack_value)[7].v_int64) = ((int64_t)1);
  ((int32_t*)stack_tcode)[(7)] = 0;
  (((TVMValue*)stack_value)[8].v_int64) = ((int64_t)69);
  ((int32_t*)stack_tcode)[(8)] = 0;
  (((TVMValue*)stack_value)[9].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(9)] = 0;
  (((TVMValue*)stack_value)[10].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(10)] = 0;
  if (fused_nn_conv2d_multiply_subtract_add_add_cast_fixed_point_multiply_add_clip_cas_1311353059221188438__kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_conv2d_multiply_subtract_add_add_cast_fixed_point_multiply_add_clip_cas_1311353059221188438__kernel0", &fused_nn_conv2d_multiply_subtract_add_add_cast_fixed_point_multiply_add_clip_cas_1311353059221188438__kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_conv2d_multiply_subtract_add_add_cast_fixed_point_multiply_add_clip_cas_1311353059221188438__kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 11, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_avg_pool2d_multiply_9(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[3];
  void* stack_tcode = stack;
  TVMValue stack1[5];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* T_multiply = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = T_multiply;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_int64) = ((int64_t)2166);
  ((int32_t*)stack_tcode)[(2)] = 0;
  (((TVMValue*)stack_value)[3].v_int64) = ((int64_t)64);
  ((int32_t*)stack_tcode)[(3)] = 0;
  if (fused_nn_avg_pool2d_multiply_9_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_avg_pool2d_multiply_9_kernel0", &fused_nn_avg_pool2d_multiply_9_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_avg_pool2d_multiply_9_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 4, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_multiply_9(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[3];
  void* stack_tcode = stack;
  TVMValue stack1[5];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* T_multiply = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = T_multiply;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(2)] = 0;
  (((TVMValue*)stack_value)[3].v_int64) = ((int64_t)64);
  ((int32_t*)stack_tcode)[(3)] = 0;
  if (fused_multiply_9_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_multiply_9_kernel0", &fused_multiply_9_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_multiply_9_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 4, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_conv2d_multiply_subtract_add_add_cast_fixed_point_multiply_add_clip_cas_1311353059221188438__3(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[6];
  void* stack_tcode = stack;
  TVMValue stack1[12];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* arg2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg2_code = ((int32_t*)arg_type_ids)[(2)];
  void* arg3 = (((TVMValue*)args)[3].v_handle);
  int32_t arg3_code = ((int32_t*)arg_type_ids)[(3)];
  void* arg4 = (((TVMValue*)args)[4].v_handle);
  int32_t arg4_code = ((int32_t*)arg_type_ids)[(4)];
  void* arg5 = (((TVMValue*)args)[5].v_handle);
  int32_t arg5_code = ((int32_t*)arg_type_ids)[(5)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* placeholder1 = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg2)[0].data);
  void* arg2_shape = (((DLTensor*)arg2)[0].shape);
  void* arg2_strides = (((DLTensor*)arg2)[0].strides);
  void* placeholder3 = (((DLTensor*)arg3)[0].data);
  void* arg3_shape = (((DLTensor*)arg3)[0].shape);
  void* arg3_strides = (((DLTensor*)arg3)[0].strides);
  void* placeholder4 = (((DLTensor*)arg4)[0].data);
  void* arg4_shape = (((DLTensor*)arg4)[0].shape);
  void* arg4_strides = (((DLTensor*)arg4)[0].strides);
  void* T_cast = (((DLTensor*)arg5)[0].data);
  void* arg5_shape = (((DLTensor*)arg5)[0].shape);
  void* arg5_strides = (((DLTensor*)arg5)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  if (!(arg2_strides == NULL)) {
  }
  if (!(arg3_strides == NULL)) {
  }
  if (!(arg4_strides == NULL)) {
  }
  if (!(arg5_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder1;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_handle) = T_cast;
  ((int32_t*)stack_tcode)[(2)] = 3;
  (((TVMValue*)stack_value)[3].v_handle) = placeholder3;
  ((int32_t*)stack_tcode)[(3)] = 3;
  (((TVMValue*)stack_value)[4].v_handle) = placeholder4;
  ((int32_t*)stack_tcode)[(4)] = 3;
  (((TVMValue*)stack_value)[5].v_handle) = placeholder2;
  ((int32_t*)stack_tcode)[(5)] = 3;
  (((TVMValue*)stack_value)[6].v_int64) = ((int64_t)1);
  ((int32_t*)stack_tcode)[(6)] = 0;
  (((TVMValue*)stack_value)[7].v_int64) = ((int64_t)1);
  ((int32_t*)stack_tcode)[(7)] = 0;
  (((TVMValue*)stack_value)[8].v_int64) = ((int64_t)69);
  ((int32_t*)stack_tcode)[(8)] = 0;
  (((TVMValue*)stack_value)[9].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(9)] = 0;
  (((TVMValue*)stack_value)[10].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(10)] = 0;
  if (fused_nn_conv2d_multiply_subtract_add_add_cast_fixed_point_multiply_add_clip_cas_1311353059221188438__3_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_conv2d_multiply_subtract_add_add_cast_fixed_point_multiply_add_clip_cas_1311353059221188438__3_kernel0", &fused_nn_conv2d_multiply_subtract_add_add_cast_fixed_point_multiply_add_clip_cas_1311353059221188438__3_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_conv2d_multiply_subtract_add_add_cast_fixed_point_multiply_add_clip_cas_1311353059221188438__3_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 11, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_cast_sum_2(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[3];
  void* stack_tcode = stack;
  TVMValue stack1[6];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* T_cast_red = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = T_cast_red;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_int64) = ((int64_t)176);
  ((int32_t*)stack_tcode)[(2)] = 0;
  (((TVMValue*)stack_value)[3].v_int64) = ((int64_t)32);
  ((int32_t*)stack_tcode)[(3)] = 0;
  (((TVMValue*)stack_value)[4].v_int64) = ((int64_t)32);
  ((int32_t*)stack_tcode)[(4)] = 0;
  if (fused_cast_sum_2_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_cast_sum_2_kernel0", &fused_cast_sum_2_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_cast_sum_2_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 5, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_conv2d_multiply_subtract_add_add_cast_fixed_point_multiply_add_clip_cas_2927425864328527930__2(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[6];
  void* stack_tcode = stack;
  TVMValue stack1[12];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* arg2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg2_code = ((int32_t*)arg_type_ids)[(2)];
  void* arg3 = (((TVMValue*)args)[3].v_handle);
  int32_t arg3_code = ((int32_t*)arg_type_ids)[(3)];
  void* arg4 = (((TVMValue*)args)[4].v_handle);
  int32_t arg4_code = ((int32_t*)arg_type_ids)[(4)];
  void* arg5 = (((TVMValue*)args)[5].v_handle);
  int32_t arg5_code = ((int32_t*)arg_type_ids)[(5)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* placeholder1 = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg2)[0].data);
  void* arg2_shape = (((DLTensor*)arg2)[0].shape);
  void* arg2_strides = (((DLTensor*)arg2)[0].strides);
  void* placeholder3 = (((DLTensor*)arg3)[0].data);
  void* arg3_shape = (((DLTensor*)arg3)[0].shape);
  void* arg3_strides = (((DLTensor*)arg3)[0].strides);
  void* placeholder4 = (((DLTensor*)arg4)[0].data);
  void* arg4_shape = (((DLTensor*)arg4)[0].shape);
  void* arg4_strides = (((DLTensor*)arg4)[0].strides);
  void* compute = (((DLTensor*)arg5)[0].data);
  void* arg5_shape = (((DLTensor*)arg5)[0].shape);
  void* arg5_strides = (((DLTensor*)arg5)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  if (!(arg2_strides == NULL)) {
  }
  if (!(arg3_strides == NULL)) {
  }
  if (!(arg4_strides == NULL)) {
  }
  if (!(arg5_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder1;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_handle) = compute;
  ((int32_t*)stack_tcode)[(2)] = 3;
  (((TVMValue*)stack_value)[3].v_handle) = placeholder3;
  ((int32_t*)stack_tcode)[(3)] = 3;
  (((TVMValue*)stack_value)[4].v_handle) = placeholder4;
  ((int32_t*)stack_tcode)[(4)] = 3;
  (((TVMValue*)stack_value)[5].v_handle) = placeholder2;
  ((int32_t*)stack_tcode)[(5)] = 3;
  (((TVMValue*)stack_value)[6].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(6)] = 0;
  (((TVMValue*)stack_value)[7].v_int64) = ((int64_t)1);
  ((int32_t*)stack_tcode)[(7)] = 0;
  (((TVMValue*)stack_value)[8].v_int64) = ((int64_t)6);
  ((int32_t*)stack_tcode)[(8)] = 0;
  (((TVMValue*)stack_value)[9].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(9)] = 0;
  (((TVMValue*)stack_value)[10].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(10)] = 0;
  if (fused_nn_conv2d_multiply_subtract_add_add_cast_fixed_point_multiply_add_clip_cas_2927425864328527930__2_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_conv2d_multiply_subtract_add_add_cast_fixed_point_multiply_add_clip_cas_2927425864328527930__2_kernel0", &fused_nn_conv2d_multiply_subtract_add_add_cast_fixed_point_multiply_add_clip_cas_2927425864328527930__2_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_conv2d_multiply_subtract_add_add_cast_fixed_point_multiply_add_clip_cas_2927425864328527930__2_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 11, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_cast_sum_7(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[3];
  void* stack_tcode = stack;
  TVMValue stack1[6];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* T_cast_red = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = T_cast_red;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_int64) = ((int64_t)12);
  ((int32_t*)stack_tcode)[(2)] = 0;
  (((TVMValue*)stack_value)[3].v_int64) = ((int64_t)32);
  ((int32_t*)stack_tcode)[(3)] = 0;
  (((TVMValue*)stack_value)[4].v_int64) = ((int64_t)32);
  ((int32_t*)stack_tcode)[(4)] = 0;
  if (fused_cast_sum_7_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_cast_sum_7_kernel0", &fused_cast_sum_7_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_cast_sum_7_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 5, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_cast_multiply_2(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[3];
  void* stack_tcode = stack;
  TVMValue stack1[5];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* T_multiply = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = T_multiply;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_int64) = ((int64_t)256);
  ((int32_t*)stack_tcode)[(2)] = 0;
  (((TVMValue*)stack_value)[3].v_int64) = ((int64_t)64);
  ((int32_t*)stack_tcode)[(3)] = 0;
  if (fused_cast_multiply_2_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_cast_multiply_2_kernel0", &fused_cast_multiply_2_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_cast_multiply_2_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 4, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_6(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[6];
  void* stack_tcode = stack;
  TVMValue stack1[11];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* arg2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg2_code = ((int32_t*)arg_type_ids)[(2)];
  void* arg3 = (((TVMValue*)args)[3].v_handle);
  int32_t arg3_code = ((int32_t*)arg_type_ids)[(3)];
  void* arg4 = (((TVMValue*)args)[4].v_handle);
  int32_t arg4_code = ((int32_t*)arg_type_ids)[(4)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* placeholder1 = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg2)[0].data);
  void* arg2_shape = (((DLTensor*)arg2)[0].shape);
  void* arg2_strides = (((DLTensor*)arg2)[0].strides);
  void* placeholder3 = (((DLTensor*)arg3)[0].data);
  void* arg3_shape = (((DLTensor*)arg3)[0].shape);
  void* arg3_strides = (((DLTensor*)arg3)[0].strides);
  void* T_cast = (((DLTensor*)arg4)[0].data);
  void* arg4_shape = (((DLTensor*)arg4)[0].shape);
  void* arg4_strides = (((DLTensor*)arg4)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  if (!(arg2_strides == NULL)) {
  }
  if (!(arg3_strides == NULL)) {
  }
  if (!(arg4_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder1;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_handle) = T_cast;
  ((int32_t*)stack_tcode)[(2)] = 3;
  (((TVMValue*)stack_value)[3].v_handle) = placeholder3;
  ((int32_t*)stack_tcode)[(3)] = 3;
  (((TVMValue*)stack_value)[4].v_handle) = placeholder2;
  ((int32_t*)stack_tcode)[(4)] = 3;
  (((TVMValue*)stack_value)[5].v_int64) = ((int64_t)1444);
  ((int32_t*)stack_tcode)[(5)] = 0;
  (((TVMValue*)stack_value)[6].v_int64) = ((int64_t)1);
  ((int32_t*)stack_tcode)[(6)] = 0;
  (((TVMValue*)stack_value)[7].v_int64) = ((int64_t)24);
  ((int32_t*)stack_tcode)[(7)] = 0;
  (((TVMValue*)stack_value)[8].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(8)] = 0;
  (((TVMValue*)stack_value)[9].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(9)] = 0;
  if (fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_6_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_6_kernel0", &fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_6_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_6_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 10, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_strided_slice_split(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[3];
  void* stack_tcode = stack;
  TVMValue stack1[5];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* arg2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg2_code = ((int32_t*)arg_type_ids)[(2)];
  void* arg3 = (((TVMValue*)args)[3].v_handle);
  int32_t arg3_code = ((int32_t*)arg_type_ids)[(3)];
  void* arg4 = (((TVMValue*)args)[4].v_handle);
  int32_t arg4_code = ((int32_t*)arg_type_ids)[(4)];
  void* arg5 = (((TVMValue*)args)[5].v_handle);
  int32_t arg5_code = ((int32_t*)arg_type_ids)[(5)];
  void* arg6 = (((TVMValue*)args)[6].v_handle);
  int32_t arg6_code = ((int32_t*)arg_type_ids)[(6)];
  void* arg7 = (((TVMValue*)args)[7].v_handle);
  int32_t arg7_code = ((int32_t*)arg_type_ids)[(7)];
  void* arg8 = (((TVMValue*)args)[8].v_handle);
  int32_t arg8_code = ((int32_t*)arg_type_ids)[(8)];
  void* arg9 = (((TVMValue*)args)[9].v_handle);
  int32_t arg9_code = ((int32_t*)arg_type_ids)[(9)];
  void* arg10 = (((TVMValue*)args)[10].v_handle);
  int32_t arg10_code = ((int32_t*)arg_type_ids)[(10)];
  void* arg11 = (((TVMValue*)args)[11].v_handle);
  int32_t arg11_code = ((int32_t*)arg_type_ids)[(11)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* placeholder1 = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg2)[0].data);
  void* arg2_shape = (((DLTensor*)arg2)[0].shape);
  void* arg2_strides = (((DLTensor*)arg2)[0].strides);
  void* placeholder3 = (((DLTensor*)arg3)[0].data);
  void* arg3_shape = (((DLTensor*)arg3)[0].shape);
  void* arg3_strides = (((DLTensor*)arg3)[0].strides);
  void* placeholder4 = (((DLTensor*)arg4)[0].data);
  void* arg4_shape = (((DLTensor*)arg4)[0].shape);
  void* arg4_strides = (((DLTensor*)arg4)[0].strides);
  void* placeholder5 = (((DLTensor*)arg5)[0].data);
  void* arg5_shape = (((DLTensor*)arg5)[0].shape);
  void* arg5_strides = (((DLTensor*)arg5)[0].strides);
  void* T_split_sections = (((DLTensor*)arg6)[0].data);
  void* arg6_shape = (((DLTensor*)arg6)[0].shape);
  void* arg6_strides = (((DLTensor*)arg6)[0].strides);
  void* T_split_sections1 = (((DLTensor*)arg7)[0].data);
  void* arg7_shape = (((DLTensor*)arg7)[0].shape);
  void* arg7_strides = (((DLTensor*)arg7)[0].strides);
  void* T_split_sections2 = (((DLTensor*)arg8)[0].data);
  void* arg8_shape = (((DLTensor*)arg8)[0].shape);
  void* arg8_strides = (((DLTensor*)arg8)[0].strides);
  void* T_split_sections3 = (((DLTensor*)arg9)[0].data);
  void* arg9_shape = (((DLTensor*)arg9)[0].shape);
  void* arg9_strides = (((DLTensor*)arg9)[0].strides);
  void* T_split_sections4 = (((DLTensor*)arg10)[0].data);
  void* arg10_shape = (((DLTensor*)arg10)[0].shape);
  void* arg10_strides = (((DLTensor*)arg10)[0].strides);
  void* T_split_sections5 = (((DLTensor*)arg11)[0].data);
  void* arg11_shape = (((DLTensor*)arg11)[0].shape);
  void* arg11_strides = (((DLTensor*)arg11)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  if (!(arg2_strides == NULL)) {
  }
  if (!(arg3_strides == NULL)) {
  }
  if (!(arg4_strides == NULL)) {
  }
  if (!(arg5_strides == NULL)) {
  }
  if (!(arg6_strides == NULL)) {
  }
  if (!(arg7_strides == NULL)) {
  }
  if (!(arg8_strides == NULL)) {
  }
  if (!(arg9_strides == NULL)) {
  }
  if (!(arg10_strides == NULL)) {
  }
  if (!(arg11_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = T_split_sections;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder1;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_int64) = ((int64_t)1);
  ((int32_t*)stack_tcode)[(2)] = 0;
  (((TVMValue*)stack_value)[3].v_int64) = ((int64_t)64);
  ((int32_t*)stack_tcode)[(3)] = 0;
  if (fused_strided_slice_split_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_strided_slice_split_kernel0", &fused_strided_slice_split_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_strided_slice_split_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 4, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = T_split_sections1;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder1;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_int64) = ((int64_t)1);
  ((int32_t*)stack_tcode)[(2)] = 0;
  (((TVMValue*)stack_value)[3].v_int64) = ((int64_t)64);
  ((int32_t*)stack_tcode)[(3)] = 0;
  if (fused_strided_slice_split_kernel1_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_strided_slice_split_kernel1", &fused_strided_slice_split_kernel1_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val2;
  int ret_type_code2;
  if (TVMFuncCall(fused_strided_slice_split_kernel1_packed, (TVMValue*) stack_value, (int*) stack_tcode, 4, &ret_val2, &ret_type_code2) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = T_split_sections2;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder1;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_int64) = ((int64_t)1);
  ((int32_t*)stack_tcode)[(2)] = 0;
  (((TVMValue*)stack_value)[3].v_int64) = ((int64_t)64);
  ((int32_t*)stack_tcode)[(3)] = 0;
  if (fused_strided_slice_split_kernel2_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_strided_slice_split_kernel2", &fused_strided_slice_split_kernel2_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val3;
  int ret_type_code3;
  if (TVMFuncCall(fused_strided_slice_split_kernel2_packed, (TVMValue*) stack_value, (int*) stack_tcode, 4, &ret_val3, &ret_type_code3) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = T_split_sections3;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder1;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_int64) = ((int64_t)1);
  ((int32_t*)stack_tcode)[(2)] = 0;
  (((TVMValue*)stack_value)[3].v_int64) = ((int64_t)64);
  ((int32_t*)stack_tcode)[(3)] = 0;
  if (fused_strided_slice_split_kernel3_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_strided_slice_split_kernel3", &fused_strided_slice_split_kernel3_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val4;
  int ret_type_code4;
  if (TVMFuncCall(fused_strided_slice_split_kernel3_packed, (TVMValue*) stack_value, (int*) stack_tcode, 4, &ret_val4, &ret_type_code4) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = T_split_sections4;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder1;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_int64) = ((int64_t)1);
  ((int32_t*)stack_tcode)[(2)] = 0;
  (((TVMValue*)stack_value)[3].v_int64) = ((int64_t)64);
  ((int32_t*)stack_tcode)[(3)] = 0;
  if (fused_strided_slice_split_kernel4_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_strided_slice_split_kernel4", &fused_strided_slice_split_kernel4_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val5;
  int ret_type_code5;
  if (TVMFuncCall(fused_strided_slice_split_kernel4_packed, (TVMValue*) stack_value, (int*) stack_tcode, 4, &ret_val5, &ret_type_code5) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = T_split_sections5;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder1;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_int64) = ((int64_t)1);
  ((int32_t*)stack_tcode)[(2)] = 0;
  (((TVMValue*)stack_value)[3].v_int64) = ((int64_t)64);
  ((int32_t*)stack_tcode)[(3)] = 0;
  if (fused_strided_slice_split_kernel5_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_strided_slice_split_kernel5", &fused_strided_slice_split_kernel5_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val6;
  int ret_type_code6;
  if (TVMFuncCall(fused_strided_slice_split_kernel5_packed, (TVMValue*) stack_value, (int*) stack_tcode, 4, &ret_val6, &ret_type_code6) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_cast_multiply_3(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[3];
  void* stack_tcode = stack;
  TVMValue stack1[5];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* T_multiply = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = T_multiply;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_int64) = ((int64_t)256);
  ((int32_t*)stack_tcode)[(2)] = 0;
  (((TVMValue*)stack_value)[3].v_int64) = ((int64_t)64);
  ((int32_t*)stack_tcode)[(3)] = 0;
  if (fused_cast_multiply_3_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_cast_multiply_3_kernel0", &fused_cast_multiply_3_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_cast_multiply_3_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 4, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_avg_pool2d_multiply_13(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[3];
  void* stack_tcode = stack;
  TVMValue stack1[5];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* T_multiply = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = T_multiply;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_int64) = ((int64_t)1200);
  ((int32_t*)stack_tcode)[(2)] = 0;
  (((TVMValue*)stack_value)[3].v_int64) = ((int64_t)64);
  ((int32_t*)stack_tcode)[(3)] = 0;
  if (fused_nn_avg_pool2d_multiply_13_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_avg_pool2d_multiply_13_kernel0", &fused_nn_avg_pool2d_multiply_13_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_avg_pool2d_multiply_13_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 4, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_conv2d_subtract_add_add_cast_fixed_point_multiply_add_clip_cast_clip_3(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[6];
  void* stack_tcode = stack;
  TVMValue stack1[12];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* arg2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg2_code = ((int32_t*)arg_type_ids)[(2)];
  void* arg3 = (((TVMValue*)args)[3].v_handle);
  int32_t arg3_code = ((int32_t*)arg_type_ids)[(3)];
  void* arg4 = (((TVMValue*)args)[4].v_handle);
  int32_t arg4_code = ((int32_t*)arg_type_ids)[(4)];
  void* arg5 = (((TVMValue*)args)[5].v_handle);
  int32_t arg5_code = ((int32_t*)arg_type_ids)[(5)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* placeholder1 = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg2)[0].data);
  void* arg2_shape = (((DLTensor*)arg2)[0].shape);
  void* arg2_strides = (((DLTensor*)arg2)[0].strides);
  void* placeholder3 = (((DLTensor*)arg3)[0].data);
  void* arg3_shape = (((DLTensor*)arg3)[0].shape);
  void* arg3_strides = (((DLTensor*)arg3)[0].strides);
  void* placeholder4 = (((DLTensor*)arg4)[0].data);
  void* arg4_shape = (((DLTensor*)arg4)[0].shape);
  void* arg4_strides = (((DLTensor*)arg4)[0].strides);
  void* compute = (((DLTensor*)arg5)[0].data);
  void* arg5_shape = (((DLTensor*)arg5)[0].shape);
  void* arg5_strides = (((DLTensor*)arg5)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  if (!(arg2_strides == NULL)) {
  }
  if (!(arg3_strides == NULL)) {
  }
  if (!(arg4_strides == NULL)) {
  }
  if (!(arg5_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder1;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_handle) = compute;
  ((int32_t*)stack_tcode)[(2)] = 3;
  (((TVMValue*)stack_value)[3].v_handle) = placeholder3;
  ((int32_t*)stack_tcode)[(3)] = 3;
  (((TVMValue*)stack_value)[4].v_handle) = placeholder4;
  ((int32_t*)stack_tcode)[(4)] = 3;
  (((TVMValue*)stack_value)[5].v_handle) = placeholder2;
  ((int32_t*)stack_tcode)[(5)] = 3;
  (((TVMValue*)stack_value)[6].v_int64) = ((int64_t)1);
  ((int32_t*)stack_tcode)[(6)] = 0;
  (((TVMValue*)stack_value)[7].v_int64) = ((int64_t)1);
  ((int32_t*)stack_tcode)[(7)] = 0;
  (((TVMValue*)stack_value)[8].v_int64) = ((int64_t)12);
  ((int32_t*)stack_tcode)[(8)] = 0;
  (((TVMValue*)stack_value)[9].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(9)] = 0;
  (((TVMValue*)stack_value)[10].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(10)] = 0;
  if (fused_nn_conv2d_subtract_add_add_cast_fixed_point_multiply_add_clip_cast_clip_3_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_conv2d_subtract_add_add_cast_fixed_point_multiply_add_clip_cast_clip_3_kernel0", &fused_nn_conv2d_subtract_add_add_cast_fixed_point_multiply_add_clip_cast_clip_3_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_conv2d_subtract_add_add_cast_fixed_point_multiply_add_clip_cast_clip_3_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 11, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_avg_pool2d_multiply_7(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[3];
  void* stack_tcode = stack;
  TVMValue stack1[5];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* T_multiply = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = T_multiply;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_int64) = ((int64_t)2166);
  ((int32_t*)stack_tcode)[(2)] = 0;
  (((TVMValue*)stack_value)[3].v_int64) = ((int64_t)64);
  ((int32_t*)stack_tcode)[(3)] = 0;
  if (fused_nn_avg_pool2d_multiply_7_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_avg_pool2d_multiply_7_kernel0", &fused_nn_avg_pool2d_multiply_7_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_avg_pool2d_multiply_7_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 4, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_pad_9(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[3];
  void* stack_tcode = stack;
  TVMValue stack1[5];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* T_pad = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = T_pad;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_int64) = ((int64_t)74);
  ((int32_t*)stack_tcode)[(2)] = 0;
  (((TVMValue*)stack_value)[3].v_int64) = ((int64_t)64);
  ((int32_t*)stack_tcode)[(3)] = 0;
  if (fused_nn_pad_9_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_pad_9_kernel0", &fused_nn_pad_9_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_pad_9_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 4, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_avg_pool2d_multiply_3(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[3];
  void* stack_tcode = stack;
  TVMValue stack1[5];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* T_multiply = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = T_multiply;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_int64) = ((int64_t)8438);
  ((int32_t*)stack_tcode)[(2)] = 0;
  (((TVMValue*)stack_value)[3].v_int64) = ((int64_t)64);
  ((int32_t*)stack_tcode)[(3)] = 0;
  if (fused_nn_avg_pool2d_multiply_3_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_avg_pool2d_multiply_3_kernel0", &fused_nn_avg_pool2d_multiply_3_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_avg_pool2d_multiply_3_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 4, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_pad(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[3];
  void* stack_tcode = stack;
  TVMValue stack1[5];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* T_pad = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = T_pad;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_int64) = ((int64_t)256);
  ((int32_t*)stack_tcode)[(2)] = 0;
  (((TVMValue*)stack_value)[3].v_int64) = ((int64_t)64);
  ((int32_t*)stack_tcode)[(3)] = 0;
  if (fused_nn_pad_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_pad_kernel0", &fused_nn_pad_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_pad_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 4, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_cast_multiply_1(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[3];
  void* stack_tcode = stack;
  TVMValue stack1[5];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* T_multiply = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = T_multiply;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_int64) = ((int64_t)256);
  ((int32_t*)stack_tcode)[(2)] = 0;
  (((TVMValue*)stack_value)[3].v_int64) = ((int64_t)64);
  ((int32_t*)stack_tcode)[(3)] = 0;
  if (fused_cast_multiply_1_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_cast_multiply_1_kernel0", &fused_cast_multiply_1_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_cast_multiply_1_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 4, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_reshape_cast_subtract_fixed_point_multiply_add_clip_cast_reshape_cast_subt_10421831741047255328_(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[5];
  void* stack_tcode = stack;
  TVMValue stack1[10];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* arg2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg2_code = ((int32_t*)arg_type_ids)[(2)];
  void* arg3 = (((TVMValue*)args)[3].v_handle);
  int32_t arg3_code = ((int32_t*)arg_type_ids)[(3)];
  void* arg4 = (((TVMValue*)args)[4].v_handle);
  int32_t arg4_code = ((int32_t*)arg_type_ids)[(4)];
  void* arg5 = (((TVMValue*)args)[5].v_handle);
  int32_t arg5_code = ((int32_t*)arg_type_ids)[(5)];
  void* arg6 = (((TVMValue*)args)[6].v_handle);
  int32_t arg6_code = ((int32_t*)arg_type_ids)[(6)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* placeholder1 = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg2)[0].data);
  void* arg2_shape = (((DLTensor*)arg2)[0].shape);
  void* arg2_strides = (((DLTensor*)arg2)[0].strides);
  void* placeholder3 = (((DLTensor*)arg3)[0].data);
  void* arg3_shape = (((DLTensor*)arg3)[0].shape);
  void* arg3_strides = (((DLTensor*)arg3)[0].strides);
  void* placeholder4 = (((DLTensor*)arg4)[0].data);
  void* arg4_shape = (((DLTensor*)arg4)[0].shape);
  void* arg4_strides = (((DLTensor*)arg4)[0].strides);
  void* placeholder5 = (((DLTensor*)arg5)[0].data);
  void* arg5_shape = (((DLTensor*)arg5)[0].shape);
  void* arg5_strides = (((DLTensor*)arg5)[0].strides);
  void* T_transpose = (((DLTensor*)arg6)[0].data);
  void* arg6_shape = (((DLTensor*)arg6)[0].shape);
  void* arg6_strides = (((DLTensor*)arg6)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  if (!(arg2_strides == NULL)) {
  }
  if (!(arg3_strides == NULL)) {
  }
  if (!(arg4_strides == NULL)) {
  }
  if (!(arg5_strides == NULL)) {
  }
  if (!(arg6_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = T_transpose;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder5;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_handle) = placeholder4;
  ((int32_t*)stack_tcode)[(2)] = 3;
  (((TVMValue*)stack_value)[3].v_handle) = placeholder3;
  ((int32_t*)stack_tcode)[(3)] = 3;
  (((TVMValue*)stack_value)[4].v_handle) = placeholder2;
  ((int32_t*)stack_tcode)[(4)] = 3;
  (((TVMValue*)stack_value)[5].v_handle) = placeholder1;
  ((int32_t*)stack_tcode)[(5)] = 3;
  (((TVMValue*)stack_value)[6].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(6)] = 3;
  (((TVMValue*)stack_value)[7].v_int64) = ((int64_t)256);
  ((int32_t*)stack_tcode)[(7)] = 0;
  (((TVMValue*)stack_value)[8].v_int64) = ((int64_t)64);
  ((int32_t*)stack_tcode)[(8)] = 0;
  if (fused_reshape_cast_subtract_fixed_point_multiply_add_clip_cast_reshape_cast_subt_10421831741047255328__kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_reshape_cast_subtract_fixed_point_multiply_add_clip_cast_reshape_cast_subt_10421831741047255328__kernel0", &fused_reshape_cast_subtract_fixed_point_multiply_add_clip_cast_reshape_cast_subt_10421831741047255328__kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_reshape_cast_subtract_fixed_point_multiply_add_clip_cast_reshape_cast_subt_10421831741047255328__kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 9, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_avg_pool2d_multiply_6(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[3];
  void* stack_tcode = stack;
  TVMValue stack1[5];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* T_multiply = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = T_multiply;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_int64) = ((int64_t)1083);
  ((int32_t*)stack_tcode)[(2)] = 0;
  (((TVMValue*)stack_value)[3].v_int64) = ((int64_t)64);
  ((int32_t*)stack_tcode)[(3)] = 0;
  if (fused_nn_avg_pool2d_multiply_6_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_avg_pool2d_multiply_6_kernel0", &fused_nn_avg_pool2d_multiply_6_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_avg_pool2d_multiply_6_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 4, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_cast_sum(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[3];
  void* stack_tcode = stack;
  TVMValue stack1[6];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* T_cast_red = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = T_cast_red;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_int64) = ((int64_t)2832);
  ((int32_t*)stack_tcode)[(2)] = 0;
  (((TVMValue*)stack_value)[3].v_int64) = ((int64_t)32);
  ((int32_t*)stack_tcode)[(3)] = 0;
  (((TVMValue*)stack_value)[4].v_int64) = ((int64_t)32);
  ((int32_t*)stack_tcode)[(4)] = 0;
  if (fused_cast_sum_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_cast_sum_kernel0", &fused_cast_sum_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_cast_sum_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 5, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_cast_sum_14(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[3];
  void* stack_tcode = stack;
  TVMValue stack1[6];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* T_cast_red = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = T_cast_red;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_int64) = ((int64_t)1);
  ((int32_t*)stack_tcode)[(2)] = 0;
  (((TVMValue*)stack_value)[3].v_int64) = ((int64_t)32);
  ((int32_t*)stack_tcode)[(3)] = 0;
  (((TVMValue*)stack_value)[4].v_int64) = ((int64_t)32);
  ((int32_t*)stack_tcode)[(4)] = 0;
  if (fused_cast_sum_14_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_cast_sum_14_kernel0", &fused_cast_sum_14_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_cast_sum_14_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 5, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_multiply_11(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[3];
  void* stack_tcode = stack;
  TVMValue stack1[5];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* T_multiply = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = T_multiply;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_int64) = ((int64_t)1);
  ((int32_t*)stack_tcode)[(2)] = 0;
  (((TVMValue*)stack_value)[3].v_int64) = ((int64_t)64);
  ((int32_t*)stack_tcode)[(3)] = 0;
  if (fused_multiply_11_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_multiply_11_kernel0", &fused_multiply_11_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_multiply_11_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 4, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_5(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[4];
  void* stack_tcode = stack;
  TVMValue stack1[8];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* arg2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg2_code = ((int32_t*)arg_type_ids)[(2)];
  void* arg3 = (((TVMValue*)args)[3].v_handle);
  int32_t arg3_code = ((int32_t*)arg_type_ids)[(3)];
  void* arg4 = (((TVMValue*)args)[4].v_handle);
  int32_t arg4_code = ((int32_t*)arg_type_ids)[(4)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* placeholder1 = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg2)[0].data);
  void* arg2_shape = (((DLTensor*)arg2)[0].shape);
  void* arg2_strides = (((DLTensor*)arg2)[0].strides);
  void* placeholder3 = (((DLTensor*)arg3)[0].data);
  void* arg3_shape = (((DLTensor*)arg3)[0].shape);
  void* arg3_strides = (((DLTensor*)arg3)[0].strides);
  void* T_cast = (((DLTensor*)arg4)[0].data);
  void* arg4_shape = (((DLTensor*)arg4)[0].shape);
  void* arg4_strides = (((DLTensor*)arg4)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  if (!(arg2_strides == NULL)) {
  }
  if (!(arg3_strides == NULL)) {
  }
  if (!(arg4_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder1;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_handle) = T_cast;
  ((int32_t*)stack_tcode)[(2)] = 3;
  (((TVMValue*)stack_value)[3].v_handle) = placeholder3;
  ((int32_t*)stack_tcode)[(3)] = 3;
  (((TVMValue*)stack_value)[4].v_handle) = placeholder2;
  ((int32_t*)stack_tcode)[(4)] = 3;
  (((TVMValue*)stack_value)[5].v_int64) = ((int64_t)100);
  ((int32_t*)stack_tcode)[(5)] = 0;
  (((TVMValue*)stack_value)[6].v_int64) = ((int64_t)192);
  ((int32_t*)stack_tcode)[(6)] = 0;
  if (fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_5_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_5_kernel0", &fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_5_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_5_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 7, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_1(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[4];
  void* stack_tcode = stack;
  TVMValue stack1[8];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* arg2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg2_code = ((int32_t*)arg_type_ids)[(2)];
  void* arg3 = (((TVMValue*)args)[3].v_handle);
  int32_t arg3_code = ((int32_t*)arg_type_ids)[(3)];
  void* arg4 = (((TVMValue*)args)[4].v_handle);
  int32_t arg4_code = ((int32_t*)arg_type_ids)[(4)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* placeholder1 = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg2)[0].data);
  void* arg2_shape = (((DLTensor*)arg2)[0].shape);
  void* arg2_strides = (((DLTensor*)arg2)[0].strides);
  void* placeholder3 = (((DLTensor*)arg3)[0].data);
  void* arg3_shape = (((DLTensor*)arg3)[0].shape);
  void* arg3_strides = (((DLTensor*)arg3)[0].strides);
  void* T_cast = (((DLTensor*)arg4)[0].data);
  void* arg4_shape = (((DLTensor*)arg4)[0].shape);
  void* arg4_strides = (((DLTensor*)arg4)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  if (!(arg2_strides == NULL)) {
  }
  if (!(arg3_strides == NULL)) {
  }
  if (!(arg4_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder1;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_handle) = T_cast;
  ((int32_t*)stack_tcode)[(2)] = 3;
  (((TVMValue*)stack_value)[3].v_handle) = placeholder3;
  ((int32_t*)stack_tcode)[(3)] = 3;
  (((TVMValue*)stack_value)[4].v_handle) = placeholder2;
  ((int32_t*)stack_tcode)[(4)] = 3;
  (((TVMValue*)stack_value)[5].v_int64) = ((int64_t)100);
  ((int32_t*)stack_tcode)[(5)] = 0;
  (((TVMValue*)stack_value)[6].v_int64) = ((int64_t)384);
  ((int32_t*)stack_tcode)[(6)] = 0;
  if (fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_1_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_1_kernel0", &fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_1_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_1_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 7, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_avg_pool2d_multiply_4(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[3];
  void* stack_tcode = stack;
  TVMValue stack1[5];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* T_multiply = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = T_multiply;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_int64) = ((int64_t)2166);
  ((int32_t*)stack_tcode)[(2)] = 0;
  (((TVMValue*)stack_value)[3].v_int64) = ((int64_t)64);
  ((int32_t*)stack_tcode)[(3)] = 0;
  if (fused_nn_avg_pool2d_multiply_4_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_avg_pool2d_multiply_4_kernel0", &fused_nn_avg_pool2d_multiply_4_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_avg_pool2d_multiply_4_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 4, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_add_clip_cast_2(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[6];
  void* stack_tcode = stack;
  TVMValue stack1[11];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* arg2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg2_code = ((int32_t*)arg_type_ids)[(2)];
  void* arg3 = (((TVMValue*)args)[3].v_handle);
  int32_t arg3_code = ((int32_t*)arg_type_ids)[(3)];
  void* arg4 = (((TVMValue*)args)[4].v_handle);
  int32_t arg4_code = ((int32_t*)arg_type_ids)[(4)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* placeholder1 = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg2)[0].data);
  void* arg2_shape = (((DLTensor*)arg2)[0].shape);
  void* arg2_strides = (((DLTensor*)arg2)[0].strides);
  void* placeholder3 = (((DLTensor*)arg3)[0].data);
  void* arg3_shape = (((DLTensor*)arg3)[0].shape);
  void* arg3_strides = (((DLTensor*)arg3)[0].strides);
  void* T_cast = (((DLTensor*)arg4)[0].data);
  void* arg4_shape = (((DLTensor*)arg4)[0].shape);
  void* arg4_strides = (((DLTensor*)arg4)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  if (!(arg2_strides == NULL)) {
  }
  if (!(arg3_strides == NULL)) {
  }
  if (!(arg4_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder1;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_handle) = T_cast;
  ((int32_t*)stack_tcode)[(2)] = 3;
  (((TVMValue*)stack_value)[3].v_handle) = placeholder3;
  ((int32_t*)stack_tcode)[(3)] = 3;
  (((TVMValue*)stack_value)[4].v_handle) = placeholder2;
  ((int32_t*)stack_tcode)[(4)] = 3;
  (((TVMValue*)stack_value)[5].v_int64) = ((int64_t)361);
  ((int32_t*)stack_tcode)[(5)] = 0;
  (((TVMValue*)stack_value)[6].v_int64) = ((int64_t)1);
  ((int32_t*)stack_tcode)[(6)] = 0;
  (((TVMValue*)stack_value)[7].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(7)] = 0;
  (((TVMValue*)stack_value)[8].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(8)] = 0;
  (((TVMValue*)stack_value)[9].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(9)] = 0;
  if (fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_add_clip_cast_2_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_add_clip_cast_2_kernel0", &fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_add_clip_cast_2_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_add_clip_cast_2_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 10, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_concatenate_1(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[4];
  void* stack_tcode = stack;
  TVMValue stack1[8];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* arg2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg2_code = ((int32_t*)arg_type_ids)[(2)];
  void* arg3 = (((TVMValue*)args)[3].v_handle);
  int32_t arg3_code = ((int32_t*)arg_type_ids)[(3)];
  void* arg4 = (((TVMValue*)args)[4].v_handle);
  int32_t arg4_code = ((int32_t*)arg_type_ids)[(4)];
  void* arg5 = (((TVMValue*)args)[5].v_handle);
  int32_t arg5_code = ((int32_t*)arg_type_ids)[(5)];
  void* arg6 = (((TVMValue*)args)[6].v_handle);
  int32_t arg6_code = ((int32_t*)arg_type_ids)[(6)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* placeholder1 = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg2)[0].data);
  void* arg2_shape = (((DLTensor*)arg2)[0].shape);
  void* arg2_strides = (((DLTensor*)arg2)[0].strides);
  void* placeholder3 = (((DLTensor*)arg3)[0].data);
  void* arg3_shape = (((DLTensor*)arg3)[0].shape);
  void* arg3_strides = (((DLTensor*)arg3)[0].strides);
  void* placeholder4 = (((DLTensor*)arg4)[0].data);
  void* arg4_shape = (((DLTensor*)arg4)[0].shape);
  void* arg4_strides = (((DLTensor*)arg4)[0].strides);
  void* placeholder5 = (((DLTensor*)arg5)[0].data);
  void* arg5_shape = (((DLTensor*)arg5)[0].shape);
  void* arg5_strides = (((DLTensor*)arg5)[0].strides);
  void* T_concat = (((DLTensor*)arg6)[0].data);
  void* arg6_shape = (((DLTensor*)arg6)[0].shape);
  void* arg6_strides = (((DLTensor*)arg6)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  if (!(arg2_strides == NULL)) {
  }
  if (!(arg3_strides == NULL)) {
  }
  if (!(arg4_strides == NULL)) {
  }
  if (!(arg5_strides == NULL)) {
  }
  if (!(arg6_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = T_concat;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder4;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_handle) = placeholder5;
  ((int32_t*)stack_tcode)[(2)] = 3;
  (((TVMValue*)stack_value)[3].v_handle) = placeholder2;
  ((int32_t*)stack_tcode)[(3)] = 3;
  (((TVMValue*)stack_value)[4].v_handle) = placeholder3;
  ((int32_t*)stack_tcode)[(4)] = 3;
  (((TVMValue*)stack_value)[5].v_int64) = ((int64_t)1);
  ((int32_t*)stack_tcode)[(5)] = 0;
  (((TVMValue*)stack_value)[6].v_int64) = ((int64_t)64);
  ((int32_t*)stack_tcode)[(6)] = 0;
  if (fused_concatenate_1_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_concatenate_1_kernel0", &fused_concatenate_1_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_concatenate_1_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 7, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_6(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[4];
  void* stack_tcode = stack;
  TVMValue stack1[8];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* arg2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg2_code = ((int32_t*)arg_type_ids)[(2)];
  void* arg3 = (((TVMValue*)args)[3].v_handle);
  int32_t arg3_code = ((int32_t*)arg_type_ids)[(3)];
  void* arg4 = (((TVMValue*)args)[4].v_handle);
  int32_t arg4_code = ((int32_t*)arg_type_ids)[(4)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* placeholder1 = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg2)[0].data);
  void* arg2_shape = (((DLTensor*)arg2)[0].shape);
  void* arg2_strides = (((DLTensor*)arg2)[0].strides);
  void* placeholder3 = (((DLTensor*)arg3)[0].data);
  void* arg3_shape = (((DLTensor*)arg3)[0].shape);
  void* arg3_strides = (((DLTensor*)arg3)[0].strides);
  void* T_cast = (((DLTensor*)arg4)[0].data);
  void* arg4_shape = (((DLTensor*)arg4)[0].shape);
  void* arg4_strides = (((DLTensor*)arg4)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  if (!(arg2_strides == NULL)) {
  }
  if (!(arg3_strides == NULL)) {
  }
  if (!(arg4_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder1;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_handle) = T_cast;
  ((int32_t*)stack_tcode)[(2)] = 3;
  (((TVMValue*)stack_value)[3].v_handle) = placeholder3;
  ((int32_t*)stack_tcode)[(3)] = 3;
  (((TVMValue*)stack_value)[4].v_handle) = placeholder2;
  ((int32_t*)stack_tcode)[(4)] = 3;
  (((TVMValue*)stack_value)[5].v_int64) = ((int64_t)361);
  ((int32_t*)stack_tcode)[(5)] = 0;
  (((TVMValue*)stack_value)[6].v_int64) = ((int64_t)192);
  ((int32_t*)stack_tcode)[(6)] = 0;
  if (fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_6_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_6_kernel0", &fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_6_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_6_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 7, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_cast_sum_1(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[3];
  void* stack_tcode = stack;
  TVMValue stack1[6];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* T_cast_red = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = T_cast_red;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_int64) = ((int64_t)704);
  ((int32_t*)stack_tcode)[(2)] = 0;
  (((TVMValue*)stack_value)[3].v_int64) = ((int64_t)32);
  ((int32_t*)stack_tcode)[(3)] = 0;
  (((TVMValue*)stack_value)[4].v_int64) = ((int64_t)32);
  ((int32_t*)stack_tcode)[(4)] = 0;
  if (fused_cast_sum_1_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_cast_sum_1_kernel0", &fused_cast_sum_1_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_cast_sum_1_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 5, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_cast_sum_17(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[3];
  void* stack_tcode = stack;
  TVMValue stack1[6];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* T_cast_red = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = T_cast_red;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_int64) = ((int64_t)1);
  ((int32_t*)stack_tcode)[(2)] = 0;
  (((TVMValue*)stack_value)[3].v_int64) = ((int64_t)32);
  ((int32_t*)stack_tcode)[(3)] = 0;
  (((TVMValue*)stack_value)[4].v_int64) = ((int64_t)32);
  ((int32_t*)stack_tcode)[(4)] = 0;
  if (fused_cast_sum_17_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_cast_sum_17_kernel0", &fused_cast_sum_17_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_cast_sum_17_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 5, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_cast_multiply_5(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[3];
  void* stack_tcode = stack;
  TVMValue stack1[5];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* T_multiply = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = T_multiply;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_int64) = ((int64_t)256);
  ((int32_t*)stack_tcode)[(2)] = 0;
  (((TVMValue*)stack_value)[3].v_int64) = ((int64_t)64);
  ((int32_t*)stack_tcode)[(3)] = 0;
  if (fused_cast_multiply_5_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_cast_multiply_5_kernel0", &fused_cast_multiply_5_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_cast_multiply_5_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 4, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_9(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[6];
  void* stack_tcode = stack;
  TVMValue stack1[11];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* arg2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg2_code = ((int32_t*)arg_type_ids)[(2)];
  void* arg3 = (((TVMValue*)args)[3].v_handle);
  int32_t arg3_code = ((int32_t*)arg_type_ids)[(3)];
  void* arg4 = (((TVMValue*)args)[4].v_handle);
  int32_t arg4_code = ((int32_t*)arg_type_ids)[(4)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* placeholder1 = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg2)[0].data);
  void* arg2_shape = (((DLTensor*)arg2)[0].shape);
  void* arg2_strides = (((DLTensor*)arg2)[0].strides);
  void* placeholder3 = (((DLTensor*)arg3)[0].data);
  void* arg3_shape = (((DLTensor*)arg3)[0].shape);
  void* arg3_strides = (((DLTensor*)arg3)[0].strides);
  void* T_cast = (((DLTensor*)arg4)[0].data);
  void* arg4_shape = (((DLTensor*)arg4)[0].shape);
  void* arg4_strides = (((DLTensor*)arg4)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  if (!(arg2_strides == NULL)) {
  }
  if (!(arg3_strides == NULL)) {
  }
  if (!(arg4_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder1;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_handle) = T_cast;
  ((int32_t*)stack_tcode)[(2)] = 3;
  (((TVMValue*)stack_value)[3].v_handle) = placeholder3;
  ((int32_t*)stack_tcode)[(3)] = 3;
  (((TVMValue*)stack_value)[4].v_handle) = placeholder2;
  ((int32_t*)stack_tcode)[(4)] = 3;
  (((TVMValue*)stack_value)[5].v_int64) = ((int64_t)5625);
  ((int32_t*)stack_tcode)[(5)] = 0;
  (((TVMValue*)stack_value)[6].v_int64) = ((int64_t)1);
  ((int32_t*)stack_tcode)[(6)] = 0;
  (((TVMValue*)stack_value)[7].v_int64) = ((int64_t)12);
  ((int32_t*)stack_tcode)[(7)] = 0;
  (((TVMValue*)stack_value)[8].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(8)] = 0;
  (((TVMValue*)stack_value)[9].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(9)] = 0;
  if (fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_9_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_9_kernel0", &fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_9_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_9_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 10, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_cast_multiply(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[3];
  void* stack_tcode = stack;
  TVMValue stack1[5];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* T_multiply = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = T_multiply;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_int64) = ((int64_t)256);
  ((int32_t*)stack_tcode)[(2)] = 0;
  (((TVMValue*)stack_value)[3].v_int64) = ((int64_t)64);
  ((int32_t*)stack_tcode)[(3)] = 0;
  if (fused_cast_multiply_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_cast_multiply_kernel0", &fused_cast_multiply_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_cast_multiply_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 4, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_pad_6(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[3];
  void* stack_tcode = stack;
  TVMValue stack1[5];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* T_pad = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = T_pad;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_int64) = ((int64_t)256);
  ((int32_t*)stack_tcode)[(2)] = 0;
  (((TVMValue*)stack_value)[3].v_int64) = ((int64_t)64);
  ((int32_t*)stack_tcode)[(3)] = 0;
  if (fused_nn_pad_6_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_pad_6_kernel0", &fused_nn_pad_6_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_pad_6_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 4, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_12(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[4];
  void* stack_tcode = stack;
  TVMValue stack1[8];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* arg2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg2_code = ((int32_t*)arg_type_ids)[(2)];
  void* arg3 = (((TVMValue*)args)[3].v_handle);
  int32_t arg3_code = ((int32_t*)arg_type_ids)[(3)];
  void* arg4 = (((TVMValue*)args)[4].v_handle);
  int32_t arg4_code = ((int32_t*)arg_type_ids)[(4)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* placeholder1 = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg2)[0].data);
  void* arg2_shape = (((DLTensor*)arg2)[0].shape);
  void* arg2_strides = (((DLTensor*)arg2)[0].strides);
  void* placeholder3 = (((DLTensor*)arg3)[0].data);
  void* arg3_shape = (((DLTensor*)arg3)[0].shape);
  void* arg3_strides = (((DLTensor*)arg3)[0].strides);
  void* T_cast = (((DLTensor*)arg4)[0].data);
  void* arg4_shape = (((DLTensor*)arg4)[0].shape);
  void* arg4_strides = (((DLTensor*)arg4)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  if (!(arg2_strides == NULL)) {
  }
  if (!(arg3_strides == NULL)) {
  }
  if (!(arg4_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder1;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_handle) = T_cast;
  ((int32_t*)stack_tcode)[(2)] = 3;
  (((TVMValue*)stack_value)[3].v_handle) = placeholder3;
  ((int32_t*)stack_tcode)[(3)] = 3;
  (((TVMValue*)stack_value)[4].v_handle) = placeholder2;
  ((int32_t*)stack_tcode)[(4)] = 3;
  (((TVMValue*)stack_value)[5].v_int64) = ((int64_t)25);
  ((int32_t*)stack_tcode)[(5)] = 0;
  (((TVMValue*)stack_value)[6].v_int64) = ((int64_t)384);
  ((int32_t*)stack_tcode)[(6)] = 0;
  if (fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_12_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_12_kernel0", &fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_12_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_12_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 7, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_cast_sum_10(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[3];
  void* stack_tcode = stack;
  TVMValue stack1[6];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* T_cast_red = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = T_cast_red;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(2)] = 0;
  (((TVMValue*)stack_value)[3].v_int64) = ((int64_t)32);
  ((int32_t*)stack_tcode)[(3)] = 0;
  (((TVMValue*)stack_value)[4].v_int64) = ((int64_t)32);
  ((int32_t*)stack_tcode)[(4)] = 0;
  if (fused_cast_sum_10_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_cast_sum_10_kernel0", &fused_cast_sum_10_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_cast_sum_10_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 5, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_7(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[6];
  void* stack_tcode = stack;
  TVMValue stack1[11];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* arg2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg2_code = ((int32_t*)arg_type_ids)[(2)];
  void* arg3 = (((TVMValue*)args)[3].v_handle);
  int32_t arg3_code = ((int32_t*)arg_type_ids)[(3)];
  void* arg4 = (((TVMValue*)args)[4].v_handle);
  int32_t arg4_code = ((int32_t*)arg_type_ids)[(4)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* placeholder1 = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg2)[0].data);
  void* arg2_shape = (((DLTensor*)arg2)[0].shape);
  void* arg2_strides = (((DLTensor*)arg2)[0].strides);
  void* placeholder3 = (((DLTensor*)arg3)[0].data);
  void* arg3_shape = (((DLTensor*)arg3)[0].shape);
  void* arg3_strides = (((DLTensor*)arg3)[0].strides);
  void* T_cast = (((DLTensor*)arg4)[0].data);
  void* arg4_shape = (((DLTensor*)arg4)[0].shape);
  void* arg4_strides = (((DLTensor*)arg4)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  if (!(arg2_strides == NULL)) {
  }
  if (!(arg3_strides == NULL)) {
  }
  if (!(arg4_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder1;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_handle) = T_cast;
  ((int32_t*)stack_tcode)[(2)] = 3;
  (((TVMValue*)stack_value)[3].v_handle) = placeholder3;
  ((int32_t*)stack_tcode)[(3)] = 3;
  (((TVMValue*)stack_value)[4].v_handle) = placeholder2;
  ((int32_t*)stack_tcode)[(4)] = 3;
  (((TVMValue*)stack_value)[5].v_int64) = ((int64_t)1444);
  ((int32_t*)stack_tcode)[(5)] = 0;
  (((TVMValue*)stack_value)[6].v_int64) = ((int64_t)1);
  ((int32_t*)stack_tcode)[(6)] = 0;
  (((TVMValue*)stack_value)[7].v_int64) = ((int64_t)24);
  ((int32_t*)stack_tcode)[(7)] = 0;
  (((TVMValue*)stack_value)[8].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(8)] = 0;
  (((TVMValue*)stack_value)[9].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(9)] = 0;
  if (fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_7_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_7_kernel0", &fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_7_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_7_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 10, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_cast_sum_15(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[3];
  void* stack_tcode = stack;
  TVMValue stack1[6];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* T_cast_red = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = T_cast_red;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_int64) = ((int64_t)1);
  ((int32_t*)stack_tcode)[(2)] = 0;
  (((TVMValue*)stack_value)[3].v_int64) = ((int64_t)32);
  ((int32_t*)stack_tcode)[(3)] = 0;
  (((TVMValue*)stack_value)[4].v_int64) = ((int64_t)32);
  ((int32_t*)stack_tcode)[(4)] = 0;
  if (fused_cast_sum_15_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_cast_sum_15_kernel0", &fused_cast_sum_15_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_cast_sum_15_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 5, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_add_clip_cast_1(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[6];
  void* stack_tcode = stack;
  TVMValue stack1[11];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* arg2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg2_code = ((int32_t*)arg_type_ids)[(2)];
  void* arg3 = (((TVMValue*)args)[3].v_handle);
  int32_t arg3_code = ((int32_t*)arg_type_ids)[(3)];
  void* arg4 = (((TVMValue*)args)[4].v_handle);
  int32_t arg4_code = ((int32_t*)arg_type_ids)[(4)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* placeholder1 = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg2)[0].data);
  void* arg2_shape = (((DLTensor*)arg2)[0].shape);
  void* arg2_strides = (((DLTensor*)arg2)[0].strides);
  void* placeholder3 = (((DLTensor*)arg3)[0].data);
  void* arg3_shape = (((DLTensor*)arg3)[0].shape);
  void* arg3_strides = (((DLTensor*)arg3)[0].strides);
  void* T_cast = (((DLTensor*)arg4)[0].data);
  void* arg4_shape = (((DLTensor*)arg4)[0].shape);
  void* arg4_strides = (((DLTensor*)arg4)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  if (!(arg2_strides == NULL)) {
  }
  if (!(arg3_strides == NULL)) {
  }
  if (!(arg4_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder1;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_handle) = T_cast;
  ((int32_t*)stack_tcode)[(2)] = 3;
  (((TVMValue*)stack_value)[3].v_handle) = placeholder3;
  ((int32_t*)stack_tcode)[(3)] = 3;
  (((TVMValue*)stack_value)[4].v_handle) = placeholder2;
  ((int32_t*)stack_tcode)[(4)] = 3;
  (((TVMValue*)stack_value)[5].v_int64) = ((int64_t)100);
  ((int32_t*)stack_tcode)[(5)] = 0;
  (((TVMValue*)stack_value)[6].v_int64) = ((int64_t)1);
  ((int32_t*)stack_tcode)[(6)] = 0;
  (((TVMValue*)stack_value)[7].v_int64) = ((int64_t)69);
  ((int32_t*)stack_tcode)[(7)] = 0;
  (((TVMValue*)stack_value)[8].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(8)] = 0;
  (((TVMValue*)stack_value)[9].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(9)] = 0;
  if (fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_add_clip_cast_1_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_add_clip_cast_1_kernel0", &fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_add_clip_cast_1_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_add_clip_cast_1_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 10, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_conv2d_subtract_add_add_cast_fixed_point_multiply_add_clip_cast_clip(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[6];
  void* stack_tcode = stack;
  TVMValue stack1[12];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* arg2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg2_code = ((int32_t*)arg_type_ids)[(2)];
  void* arg3 = (((TVMValue*)args)[3].v_handle);
  int32_t arg3_code = ((int32_t*)arg_type_ids)[(3)];
  void* arg4 = (((TVMValue*)args)[4].v_handle);
  int32_t arg4_code = ((int32_t*)arg_type_ids)[(4)];
  void* arg5 = (((TVMValue*)args)[5].v_handle);
  int32_t arg5_code = ((int32_t*)arg_type_ids)[(5)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* placeholder1 = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg2)[0].data);
  void* arg2_shape = (((DLTensor*)arg2)[0].shape);
  void* arg2_strides = (((DLTensor*)arg2)[0].strides);
  void* placeholder3 = (((DLTensor*)arg3)[0].data);
  void* arg3_shape = (((DLTensor*)arg3)[0].shape);
  void* arg3_strides = (((DLTensor*)arg3)[0].strides);
  void* placeholder4 = (((DLTensor*)arg4)[0].data);
  void* arg4_shape = (((DLTensor*)arg4)[0].shape);
  void* arg4_strides = (((DLTensor*)arg4)[0].strides);
  void* compute = (((DLTensor*)arg5)[0].data);
  void* arg5_shape = (((DLTensor*)arg5)[0].shape);
  void* arg5_strides = (((DLTensor*)arg5)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  if (!(arg2_strides == NULL)) {
  }
  if (!(arg3_strides == NULL)) {
  }
  if (!(arg4_strides == NULL)) {
  }
  if (!(arg5_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder1;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_handle) = compute;
  ((int32_t*)stack_tcode)[(2)] = 3;
  (((TVMValue*)stack_value)[3].v_handle) = placeholder3;
  ((int32_t*)stack_tcode)[(3)] = 3;
  (((TVMValue*)stack_value)[4].v_handle) = placeholder4;
  ((int32_t*)stack_tcode)[(4)] = 3;
  (((TVMValue*)stack_value)[5].v_handle) = placeholder2;
  ((int32_t*)stack_tcode)[(5)] = 3;
  (((TVMValue*)stack_value)[6].v_int64) = ((int64_t)25);
  ((int32_t*)stack_tcode)[(6)] = 0;
  (((TVMValue*)stack_value)[7].v_int64) = ((int64_t)1);
  ((int32_t*)stack_tcode)[(7)] = 0;
  (((TVMValue*)stack_value)[8].v_int64) = ((int64_t)48);
  ((int32_t*)stack_tcode)[(8)] = 0;
  (((TVMValue*)stack_value)[9].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(9)] = 0;
  (((TVMValue*)stack_value)[10].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(10)] = 0;
  if (fused_nn_conv2d_subtract_add_add_cast_fixed_point_multiply_add_clip_cast_clip_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_conv2d_subtract_add_add_cast_fixed_point_multiply_add_clip_cast_clip_kernel0", &fused_nn_conv2d_subtract_add_add_cast_fixed_point_multiply_add_clip_cast_clip_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_conv2d_subtract_add_add_cast_fixed_point_multiply_add_clip_cast_clip_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 11, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_9(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[4];
  void* stack_tcode = stack;
  TVMValue stack1[8];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* arg2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg2_code = ((int32_t*)arg_type_ids)[(2)];
  void* arg3 = (((TVMValue*)args)[3].v_handle);
  int32_t arg3_code = ((int32_t*)arg_type_ids)[(3)];
  void* arg4 = (((TVMValue*)args)[4].v_handle);
  int32_t arg4_code = ((int32_t*)arg_type_ids)[(4)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* placeholder1 = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg2)[0].data);
  void* arg2_shape = (((DLTensor*)arg2)[0].shape);
  void* arg2_strides = (((DLTensor*)arg2)[0].strides);
  void* placeholder3 = (((DLTensor*)arg3)[0].data);
  void* arg3_shape = (((DLTensor*)arg3)[0].shape);
  void* arg3_strides = (((DLTensor*)arg3)[0].strides);
  void* T_cast = (((DLTensor*)arg4)[0].data);
  void* arg4_shape = (((DLTensor*)arg4)[0].shape);
  void* arg4_strides = (((DLTensor*)arg4)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  if (!(arg2_strides == NULL)) {
  }
  if (!(arg3_strides == NULL)) {
  }
  if (!(arg4_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder1;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_handle) = T_cast;
  ((int32_t*)stack_tcode)[(2)] = 3;
  (((TVMValue*)stack_value)[3].v_handle) = placeholder3;
  ((int32_t*)stack_tcode)[(3)] = 3;
  (((TVMValue*)stack_value)[4].v_handle) = placeholder2;
  ((int32_t*)stack_tcode)[(4)] = 3;
  (((TVMValue*)stack_value)[5].v_int64) = ((int64_t)1444);
  ((int32_t*)stack_tcode)[(5)] = 0;
  (((TVMValue*)stack_value)[6].v_int64) = ((int64_t)48);
  ((int32_t*)stack_tcode)[(6)] = 0;
  if (fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_9_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_9_kernel0", &fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_9_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_9_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 7, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[6];
  void* stack_tcode = stack;
  TVMValue stack1[11];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* arg2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg2_code = ((int32_t*)arg_type_ids)[(2)];
  void* arg3 = (((TVMValue*)args)[3].v_handle);
  int32_t arg3_code = ((int32_t*)arg_type_ids)[(3)];
  void* arg4 = (((TVMValue*)args)[4].v_handle);
  int32_t arg4_code = ((int32_t*)arg_type_ids)[(4)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* placeholder1 = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg2)[0].data);
  void* arg2_shape = (((DLTensor*)arg2)[0].shape);
  void* arg2_strides = (((DLTensor*)arg2)[0].strides);
  void* placeholder3 = (((DLTensor*)arg3)[0].data);
  void* arg3_shape = (((DLTensor*)arg3)[0].shape);
  void* arg3_strides = (((DLTensor*)arg3)[0].strides);
  void* T_cast = (((DLTensor*)arg4)[0].data);
  void* arg4_shape = (((DLTensor*)arg4)[0].shape);
  void* arg4_strides = (((DLTensor*)arg4)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  if (!(arg2_strides == NULL)) {
  }
  if (!(arg3_strides == NULL)) {
  }
  if (!(arg4_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder1;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_handle) = T_cast;
  ((int32_t*)stack_tcode)[(2)] = 3;
  (((TVMValue*)stack_value)[3].v_handle) = placeholder3;
  ((int32_t*)stack_tcode)[(3)] = 3;
  (((TVMValue*)stack_value)[4].v_handle) = placeholder2;
  ((int32_t*)stack_tcode)[(4)] = 3;
  (((TVMValue*)stack_value)[5].v_int64) = ((int64_t)361);
  ((int32_t*)stack_tcode)[(5)] = 0;
  (((TVMValue*)stack_value)[6].v_int64) = ((int64_t)1);
  ((int32_t*)stack_tcode)[(6)] = 0;
  (((TVMValue*)stack_value)[7].v_int64) = ((int64_t)48);
  ((int32_t*)stack_tcode)[(7)] = 0;
  (((TVMValue*)stack_value)[8].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(8)] = 0;
  (((TVMValue*)stack_value)[9].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(9)] = 0;
  if (fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_kernel0", &fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 10, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_cast_sum_13(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[3];
  void* stack_tcode = stack;
  TVMValue stack1[6];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* T_cast_red = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = T_cast_red;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_int64) = ((int64_t)1);
  ((int32_t*)stack_tcode)[(2)] = 0;
  (((TVMValue*)stack_value)[3].v_int64) = ((int64_t)32);
  ((int32_t*)stack_tcode)[(3)] = 0;
  (((TVMValue*)stack_value)[4].v_int64) = ((int64_t)32);
  ((int32_t*)stack_tcode)[(4)] = 0;
  if (fused_cast_sum_13_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_cast_sum_13_kernel0", &fused_cast_sum_13_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_cast_sum_13_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 5, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_11(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[6];
  void* stack_tcode = stack;
  TVMValue stack1[11];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* arg2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg2_code = ((int32_t*)arg_type_ids)[(2)];
  void* arg3 = (((TVMValue*)args)[3].v_handle);
  int32_t arg3_code = ((int32_t*)arg_type_ids)[(3)];
  void* arg4 = (((TVMValue*)args)[4].v_handle);
  int32_t arg4_code = ((int32_t*)arg_type_ids)[(4)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* placeholder1 = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg2)[0].data);
  void* arg2_shape = (((DLTensor*)arg2)[0].shape);
  void* arg2_strides = (((DLTensor*)arg2)[0].strides);
  void* placeholder3 = (((DLTensor*)arg3)[0].data);
  void* arg3_shape = (((DLTensor*)arg3)[0].shape);
  void* arg3_strides = (((DLTensor*)arg3)[0].strides);
  void* T_cast = (((DLTensor*)arg4)[0].data);
  void* arg4_shape = (((DLTensor*)arg4)[0].shape);
  void* arg4_strides = (((DLTensor*)arg4)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  if (!(arg2_strides == NULL)) {
  }
  if (!(arg3_strides == NULL)) {
  }
  if (!(arg4_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder1;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_handle) = T_cast;
  ((int32_t*)stack_tcode)[(2)] = 3;
  (((TVMValue*)stack_value)[3].v_handle) = placeholder3;
  ((int32_t*)stack_tcode)[(3)] = 3;
  (((TVMValue*)stack_value)[4].v_handle) = placeholder2;
  ((int32_t*)stack_tcode)[(4)] = 3;
  (((TVMValue*)stack_value)[5].v_int64) = ((int64_t)100);
  ((int32_t*)stack_tcode)[(5)] = 0;
  (((TVMValue*)stack_value)[6].v_int64) = ((int64_t)1);
  ((int32_t*)stack_tcode)[(6)] = 0;
  (((TVMValue*)stack_value)[7].v_int64) = ((int64_t)96);
  ((int32_t*)stack_tcode)[(7)] = 0;
  (((TVMValue*)stack_value)[8].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(8)] = 0;
  (((TVMValue*)stack_value)[9].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(9)] = 0;
  if (fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_11_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_11_kernel0", &fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_11_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_11_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 10, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_3(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[6];
  void* stack_tcode = stack;
  TVMValue stack1[11];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* arg2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg2_code = ((int32_t*)arg_type_ids)[(2)];
  void* arg3 = (((TVMValue*)args)[3].v_handle);
  int32_t arg3_code = ((int32_t*)arg_type_ids)[(3)];
  void* arg4 = (((TVMValue*)args)[4].v_handle);
  int32_t arg4_code = ((int32_t*)arg_type_ids)[(4)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* placeholder1 = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg2)[0].data);
  void* arg2_shape = (((DLTensor*)arg2)[0].shape);
  void* arg2_strides = (((DLTensor*)arg2)[0].strides);
  void* placeholder3 = (((DLTensor*)arg3)[0].data);
  void* arg3_shape = (((DLTensor*)arg3)[0].shape);
  void* arg3_strides = (((DLTensor*)arg3)[0].strides);
  void* T_cast = (((DLTensor*)arg4)[0].data);
  void* arg4_shape = (((DLTensor*)arg4)[0].shape);
  void* arg4_strides = (((DLTensor*)arg4)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  if (!(arg2_strides == NULL)) {
  }
  if (!(arg3_strides == NULL)) {
  }
  if (!(arg4_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder1;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_handle) = T_cast;
  ((int32_t*)stack_tcode)[(2)] = 3;
  (((TVMValue*)stack_value)[3].v_handle) = placeholder3;
  ((int32_t*)stack_tcode)[(3)] = 3;
  (((TVMValue*)stack_value)[4].v_handle) = placeholder2;
  ((int32_t*)stack_tcode)[(4)] = 3;
  (((TVMValue*)stack_value)[5].v_int64) = ((int64_t)361);
  ((int32_t*)stack_tcode)[(5)] = 0;
  (((TVMValue*)stack_value)[6].v_int64) = ((int64_t)1);
  ((int32_t*)stack_tcode)[(6)] = 0;
  (((TVMValue*)stack_value)[7].v_int64) = ((int64_t)48);
  ((int32_t*)stack_tcode)[(7)] = 0;
  (((TVMValue*)stack_value)[8].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(8)] = 0;
  (((TVMValue*)stack_value)[9].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(9)] = 0;
  if (fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_3_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_3_kernel0", &fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_3_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_3_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 10, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_reshape_reshape_cast_subtract_fixed_point_multiply_add_clip_cast_reshape_c_14817192852064521498_(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[5];
  void* stack_tcode = stack;
  TVMValue stack1[10];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* arg2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg2_code = ((int32_t*)arg_type_ids)[(2)];
  void* arg3 = (((TVMValue*)args)[3].v_handle);
  int32_t arg3_code = ((int32_t*)arg_type_ids)[(3)];
  void* arg4 = (((TVMValue*)args)[4].v_handle);
  int32_t arg4_code = ((int32_t*)arg_type_ids)[(4)];
  void* arg5 = (((TVMValue*)args)[5].v_handle);
  int32_t arg5_code = ((int32_t*)arg_type_ids)[(5)];
  void* arg6 = (((TVMValue*)args)[6].v_handle);
  int32_t arg6_code = ((int32_t*)arg_type_ids)[(6)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* placeholder1 = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg2)[0].data);
  void* arg2_shape = (((DLTensor*)arg2)[0].shape);
  void* arg2_strides = (((DLTensor*)arg2)[0].strides);
  void* placeholder3 = (((DLTensor*)arg3)[0].data);
  void* arg3_shape = (((DLTensor*)arg3)[0].shape);
  void* arg3_strides = (((DLTensor*)arg3)[0].strides);
  void* placeholder4 = (((DLTensor*)arg4)[0].data);
  void* arg4_shape = (((DLTensor*)arg4)[0].shape);
  void* arg4_strides = (((DLTensor*)arg4)[0].strides);
  void* placeholder5 = (((DLTensor*)arg5)[0].data);
  void* arg5_shape = (((DLTensor*)arg5)[0].shape);
  void* arg5_strides = (((DLTensor*)arg5)[0].strides);
  void* T_reshape = (((DLTensor*)arg6)[0].data);
  void* arg6_shape = (((DLTensor*)arg6)[0].shape);
  void* arg6_strides = (((DLTensor*)arg6)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  if (!(arg2_strides == NULL)) {
  }
  if (!(arg3_strides == NULL)) {
  }
  if (!(arg4_strides == NULL)) {
  }
  if (!(arg5_strides == NULL)) {
  }
  if (!(arg6_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = T_reshape;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder5;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_handle) = placeholder4;
  ((int32_t*)stack_tcode)[(2)] = 3;
  (((TVMValue*)stack_value)[3].v_handle) = placeholder3;
  ((int32_t*)stack_tcode)[(3)] = 3;
  (((TVMValue*)stack_value)[4].v_handle) = placeholder2;
  ((int32_t*)stack_tcode)[(4)] = 3;
  (((TVMValue*)stack_value)[5].v_handle) = placeholder1;
  ((int32_t*)stack_tcode)[(5)] = 3;
  (((TVMValue*)stack_value)[6].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(6)] = 3;
  (((TVMValue*)stack_value)[7].v_int64) = ((int64_t)120);
  ((int32_t*)stack_tcode)[(7)] = 0;
  (((TVMValue*)stack_value)[8].v_int64) = ((int64_t)64);
  ((int32_t*)stack_tcode)[(8)] = 0;
  if (fused_reshape_reshape_cast_subtract_fixed_point_multiply_add_clip_cast_reshape_c_14817192852064521498__kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_reshape_reshape_cast_subtract_fixed_point_multiply_add_clip_cast_reshape_c_14817192852064521498__kernel0", &fused_reshape_reshape_cast_subtract_fixed_point_multiply_add_clip_cast_reshape_c_14817192852064521498__kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_reshape_reshape_cast_subtract_fixed_point_multiply_add_clip_cast_reshape_c_14817192852064521498__kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 9, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_3(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[4];
  void* stack_tcode = stack;
  TVMValue stack1[8];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* arg2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg2_code = ((int32_t*)arg_type_ids)[(2)];
  void* arg3 = (((TVMValue*)args)[3].v_handle);
  int32_t arg3_code = ((int32_t*)arg_type_ids)[(3)];
  void* arg4 = (((TVMValue*)args)[4].v_handle);
  int32_t arg4_code = ((int32_t*)arg_type_ids)[(4)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* placeholder1 = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg2)[0].data);
  void* arg2_shape = (((DLTensor*)arg2)[0].shape);
  void* arg2_strides = (((DLTensor*)arg2)[0].strides);
  void* placeholder3 = (((DLTensor*)arg3)[0].data);
  void* arg3_shape = (((DLTensor*)arg3)[0].shape);
  void* arg3_strides = (((DLTensor*)arg3)[0].strides);
  void* T_cast = (((DLTensor*)arg4)[0].data);
  void* arg4_shape = (((DLTensor*)arg4)[0].shape);
  void* arg4_strides = (((DLTensor*)arg4)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  if (!(arg2_strides == NULL)) {
  }
  if (!(arg3_strides == NULL)) {
  }
  if (!(arg4_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder1;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_handle) = T_cast;
  ((int32_t*)stack_tcode)[(2)] = 3;
  (((TVMValue*)stack_value)[3].v_handle) = placeholder3;
  ((int32_t*)stack_tcode)[(3)] = 3;
  (((TVMValue*)stack_value)[4].v_handle) = placeholder2;
  ((int32_t*)stack_tcode)[(4)] = 3;
  (((TVMValue*)stack_value)[5].v_int64) = ((int64_t)100);
  ((int32_t*)stack_tcode)[(5)] = 0;
  (((TVMValue*)stack_value)[6].v_int64) = ((int64_t)384);
  ((int32_t*)stack_tcode)[(6)] = 0;
  if (fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_3_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_3_kernel0", &fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_3_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_3_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 7, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_avg_pool2d_multiply(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[3];
  void* stack_tcode = stack;
  TVMValue stack1[5];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* T_multiply = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = T_multiply;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_int64) = ((int64_t)352);
  ((int32_t*)stack_tcode)[(2)] = 0;
  (((TVMValue*)stack_value)[3].v_int64) = ((int64_t)64);
  ((int32_t*)stack_tcode)[(3)] = 0;
  if (fused_nn_avg_pool2d_multiply_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_avg_pool2d_multiply_kernel0", &fused_nn_avg_pool2d_multiply_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_avg_pool2d_multiply_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 4, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_avg_pool2d_multiply_14(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[3];
  void* stack_tcode = stack;
  TVMValue stack1[5];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* T_multiply = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = T_multiply;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_int64) = ((int64_t)1);
  ((int32_t*)stack_tcode)[(2)] = 0;
  (((TVMValue*)stack_value)[3].v_int64) = ((int64_t)64);
  ((int32_t*)stack_tcode)[(3)] = 0;
  if (fused_nn_avg_pool2d_multiply_14_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_avg_pool2d_multiply_14_kernel0", &fused_nn_avg_pool2d_multiply_14_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_avg_pool2d_multiply_14_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 4, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_cast_sum_8(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[3];
  void* stack_tcode = stack;
  TVMValue stack1[6];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* T_cast_red = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = T_cast_red;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(2)] = 0;
  (((TVMValue*)stack_value)[3].v_int64) = ((int64_t)32);
  ((int32_t*)stack_tcode)[(3)] = 0;
  (((TVMValue*)stack_value)[4].v_int64) = ((int64_t)32);
  ((int32_t*)stack_tcode)[(4)] = 0;
  if (fused_cast_sum_8_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_cast_sum_8_kernel0", &fused_cast_sum_8_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_cast_sum_8_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 5, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_add_clip_cast_3(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[6];
  void* stack_tcode = stack;
  TVMValue stack1[11];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* arg2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg2_code = ((int32_t*)arg_type_ids)[(2)];
  void* arg3 = (((TVMValue*)args)[3].v_handle);
  int32_t arg3_code = ((int32_t*)arg_type_ids)[(3)];
  void* arg4 = (((TVMValue*)args)[4].v_handle);
  int32_t arg4_code = ((int32_t*)arg_type_ids)[(4)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* placeholder1 = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg2)[0].data);
  void* arg2_shape = (((DLTensor*)arg2)[0].shape);
  void* arg2_strides = (((DLTensor*)arg2)[0].strides);
  void* placeholder3 = (((DLTensor*)arg3)[0].data);
  void* arg3_shape = (((DLTensor*)arg3)[0].shape);
  void* arg3_strides = (((DLTensor*)arg3)[0].strides);
  void* T_cast = (((DLTensor*)arg4)[0].data);
  void* arg4_shape = (((DLTensor*)arg4)[0].shape);
  void* arg4_strides = (((DLTensor*)arg4)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  if (!(arg2_strides == NULL)) {
  }
  if (!(arg3_strides == NULL)) {
  }
  if (!(arg4_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder1;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_handle) = T_cast;
  ((int32_t*)stack_tcode)[(2)] = 3;
  (((TVMValue*)stack_value)[3].v_handle) = placeholder3;
  ((int32_t*)stack_tcode)[(3)] = 3;
  (((TVMValue*)stack_value)[4].v_handle) = placeholder2;
  ((int32_t*)stack_tcode)[(4)] = 3;
  (((TVMValue*)stack_value)[5].v_int64) = ((int64_t)100);
  ((int32_t*)stack_tcode)[(5)] = 0;
  (((TVMValue*)stack_value)[6].v_int64) = ((int64_t)1);
  ((int32_t*)stack_tcode)[(6)] = 0;
  (((TVMValue*)stack_value)[7].v_int64) = ((int64_t)3);
  ((int32_t*)stack_tcode)[(7)] = 0;
  (((TVMValue*)stack_value)[8].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(8)] = 0;
  (((TVMValue*)stack_value)[9].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(9)] = 0;
  if (fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_add_clip_cast_3_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_add_clip_cast_3_kernel0", &fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_add_clip_cast_3_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_add_clip_cast_3_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 10, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_cast_sum_4(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[3];
  void* stack_tcode = stack;
  TVMValue stack1[6];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* T_cast_red = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = T_cast_red;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_int64) = ((int64_t)46);
  ((int32_t*)stack_tcode)[(2)] = 0;
  (((TVMValue*)stack_value)[3].v_int64) = ((int64_t)32);
  ((int32_t*)stack_tcode)[(3)] = 0;
  (((TVMValue*)stack_value)[4].v_int64) = ((int64_t)32);
  ((int32_t*)stack_tcode)[(4)] = 0;
  if (fused_cast_sum_4_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_cast_sum_4_kernel0", &fused_cast_sum_4_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_cast_sum_4_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 5, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_10(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[6];
  void* stack_tcode = stack;
  TVMValue stack1[11];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* arg2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg2_code = ((int32_t*)arg_type_ids)[(2)];
  void* arg3 = (((TVMValue*)args)[3].v_handle);
  int32_t arg3_code = ((int32_t*)arg_type_ids)[(3)];
  void* arg4 = (((TVMValue*)args)[4].v_handle);
  int32_t arg4_code = ((int32_t*)arg_type_ids)[(4)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* placeholder1 = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg2)[0].data);
  void* arg2_shape = (((DLTensor*)arg2)[0].shape);
  void* arg2_strides = (((DLTensor*)arg2)[0].strides);
  void* placeholder3 = (((DLTensor*)arg3)[0].data);
  void* arg3_shape = (((DLTensor*)arg3)[0].shape);
  void* arg3_strides = (((DLTensor*)arg3)[0].strides);
  void* T_cast = (((DLTensor*)arg4)[0].data);
  void* arg4_shape = (((DLTensor*)arg4)[0].shape);
  void* arg4_strides = (((DLTensor*)arg4)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  if (!(arg2_strides == NULL)) {
  }
  if (!(arg3_strides == NULL)) {
  }
  if (!(arg4_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder1;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_handle) = T_cast;
  ((int32_t*)stack_tcode)[(2)] = 3;
  (((TVMValue*)stack_value)[3].v_handle) = placeholder3;
  ((int32_t*)stack_tcode)[(3)] = 3;
  (((TVMValue*)stack_value)[4].v_handle) = placeholder2;
  ((int32_t*)stack_tcode)[(4)] = 3;
  (((TVMValue*)stack_value)[5].v_int64) = ((int64_t)22500);
  ((int32_t*)stack_tcode)[(5)] = 0;
  (((TVMValue*)stack_value)[6].v_int64) = ((int64_t)1);
  ((int32_t*)stack_tcode)[(6)] = 0;
  (((TVMValue*)stack_value)[7].v_int64) = ((int64_t)6);
  ((int32_t*)stack_tcode)[(7)] = 0;
  (((TVMValue*)stack_value)[8].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(8)] = 0;
  (((TVMValue*)stack_value)[9].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(9)] = 0;
  if (fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_10_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_10_kernel0", &fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_10_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_10_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 10, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_cast_sum_3(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[3];
  void* stack_tcode = stack;
  TVMValue stack1[6];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* T_cast_red = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = T_cast_red;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_int64) = ((int64_t)176);
  ((int32_t*)stack_tcode)[(2)] = 0;
  (((TVMValue*)stack_value)[3].v_int64) = ((int64_t)32);
  ((int32_t*)stack_tcode)[(3)] = 0;
  (((TVMValue*)stack_value)[4].v_int64) = ((int64_t)32);
  ((int32_t*)stack_tcode)[(4)] = 0;
  if (fused_cast_sum_3_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_cast_sum_3_kernel0", &fused_cast_sum_3_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_cast_sum_3_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 5, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_10(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[4];
  void* stack_tcode = stack;
  TVMValue stack1[8];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* arg2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg2_code = ((int32_t*)arg_type_ids)[(2)];
  void* arg3 = (((TVMValue*)args)[3].v_handle);
  int32_t arg3_code = ((int32_t*)arg_type_ids)[(3)];
  void* arg4 = (((TVMValue*)args)[4].v_handle);
  int32_t arg4_code = ((int32_t*)arg_type_ids)[(4)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* placeholder1 = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg2)[0].data);
  void* arg2_shape = (((DLTensor*)arg2)[0].shape);
  void* arg2_strides = (((DLTensor*)arg2)[0].strides);
  void* placeholder3 = (((DLTensor*)arg3)[0].data);
  void* arg3_shape = (((DLTensor*)arg3)[0].shape);
  void* arg3_strides = (((DLTensor*)arg3)[0].strides);
  void* T_cast = (((DLTensor*)arg4)[0].data);
  void* arg4_shape = (((DLTensor*)arg4)[0].shape);
  void* arg4_strides = (((DLTensor*)arg4)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  if (!(arg2_strides == NULL)) {
  }
  if (!(arg3_strides == NULL)) {
  }
  if (!(arg4_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder1;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_handle) = T_cast;
  ((int32_t*)stack_tcode)[(2)] = 3;
  (((TVMValue*)stack_value)[3].v_handle) = placeholder3;
  ((int32_t*)stack_tcode)[(3)] = 3;
  (((TVMValue*)stack_value)[4].v_handle) = placeholder2;
  ((int32_t*)stack_tcode)[(4)] = 3;
  (((TVMValue*)stack_value)[5].v_int64) = ((int64_t)5625);
  ((int32_t*)stack_tcode)[(5)] = 0;
  (((TVMValue*)stack_value)[6].v_int64) = ((int64_t)24);
  ((int32_t*)stack_tcode)[(6)] = 0;
  if (fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_10_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_10_kernel0", &fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_10_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_10_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 7, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_vision_multibox_transform_loc(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[5];
  void* stack_tcode = stack;
  TVMValue stack1[9];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* arg2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg2_code = ((int32_t*)arg_type_ids)[(2)];
  void* arg3 = (((TVMValue*)args)[3].v_handle);
  int32_t arg3_code = ((int32_t*)arg_type_ids)[(3)];
  void* arg4 = (((TVMValue*)args)[4].v_handle);
  int32_t arg4_code = ((int32_t*)arg_type_ids)[(4)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* placeholder1 = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg2)[0].data);
  void* arg2_shape = (((DLTensor*)arg2)[0].shape);
  void* arg2_strides = (((DLTensor*)arg2)[0].strides);
  void* extern1 = (((DLTensor*)arg3)[0].data);
  void* arg3_shape = (((DLTensor*)arg3)[0].shape);
  void* arg3_strides = (((DLTensor*)arg3)[0].strides);
  void* extern_v0 = (((DLTensor*)arg4)[0].data);
  void* arg4_shape = (((DLTensor*)arg4)[0].shape);
  void* arg4_strides = (((DLTensor*)arg4)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  if (!(arg2_strides == NULL)) {
  }
  if (!(arg3_strides == NULL)) {
  }
  if (!(arg4_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  void* extern_v3 = TVMBackendAllocWorkspace(2, dev_id, (uint64_t)7668, 2, 32);
  if (extern_v3 == NULL) {
    return -1;
  }
  void* extern_v2 = TVMBackendAllocWorkspace(2, dev_id, (uint64_t)7668, 0, 32);
  if (extern_v2 == NULL) {
    return -1;
  }
  void* extern_v1 = TVMBackendAllocWorkspace(2, dev_id, (uint64_t)7668, 0, 32);
  if (extern_v1 == NULL) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = extern_v0;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = extern_v3;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_handle) = extern_v2;
  ((int32_t*)stack_tcode)[(2)] = 3;
  (((TVMValue*)stack_value)[3].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(3)] = 3;
  (((TVMValue*)stack_value)[4].v_handle) = extern_v1;
  ((int32_t*)stack_tcode)[(4)] = 3;
  (((TVMValue*)stack_value)[5].v_int64) = ((int64_t)64);
  ((int32_t*)stack_tcode)[(5)] = 0;
  (((TVMValue*)stack_value)[6].v_int64) = ((int64_t)30);
  ((int32_t*)stack_tcode)[(6)] = 0;
  if (fused_vision_multibox_transform_loc_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_vision_multibox_transform_loc_kernel0", &fused_vision_multibox_transform_loc_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_vision_multibox_transform_loc_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 7, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = extern_v2;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = extern1;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_handle) = extern_v3;
  ((int32_t*)stack_tcode)[(2)] = 3;
  (((TVMValue*)stack_value)[3].v_handle) = placeholder1;
  ((int32_t*)stack_tcode)[(3)] = 3;
  (((TVMValue*)stack_value)[4].v_handle) = placeholder2;
  ((int32_t*)stack_tcode)[(4)] = 3;
  (((TVMValue*)stack_value)[5].v_handle) = extern_v1;
  ((int32_t*)stack_tcode)[(5)] = 3;
  (((TVMValue*)stack_value)[6].v_int64) = ((int64_t)64);
  ((int32_t*)stack_tcode)[(6)] = 0;
  (((TVMValue*)stack_value)[7].v_int64) = ((int64_t)30);
  ((int32_t*)stack_tcode)[(7)] = 0;
  if (fused_vision_multibox_transform_loc_kernel1_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_vision_multibox_transform_loc_kernel1", &fused_vision_multibox_transform_loc_kernel1_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val2;
  int ret_type_code2;
  if (TVMFuncCall(fused_vision_multibox_transform_loc_kernel1_packed, (TVMValue*) stack_value, (int*) stack_tcode, 8, &ret_val2, &ret_type_code2) != 0) {
    return -1;
  }
  if (TVMBackendFreeWorkspace(2, dev_id, extern_v1) != 0) {
    return -1;
  }
  if (TVMBackendFreeWorkspace(2, dev_id, extern_v2) != 0) {
    return -1;
  }
  if (TVMBackendFreeWorkspace(2, dev_id, extern_v3) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_vision_get_valid_counts(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[4];
  void* stack_tcode = stack;
  TVMValue stack1[8];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* arg2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg2_code = ((int32_t*)arg_type_ids)[(2)];
  void* arg3 = (((TVMValue*)args)[3].v_handle);
  int32_t arg3_code = ((int32_t*)arg_type_ids)[(3)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* get_valid_counts_v0 = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  void* get_valid_counts_v1 = (((DLTensor*)arg2)[0].data);
  void* arg2_shape = (((DLTensor*)arg2)[0].shape);
  void* arg2_strides = (((DLTensor*)arg2)[0].strides);
  void* get_valid_counts_v2 = (((DLTensor*)arg3)[0].data);
  void* arg3_shape = (((DLTensor*)arg3)[0].shape);
  void* arg3_strides = (((DLTensor*)arg3)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  if (!(arg2_strides == NULL)) {
  }
  if (!(arg3_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  void* atomic_add_return = TVMBackendAllocWorkspace(2, dev_id, (uint64_t)4, 0, 32);
  if (atomic_add_return == NULL) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = get_valid_counts_v0;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_handle) = atomic_add_return;
  ((int32_t*)stack_tcode)[(2)] = 3;
  (((TVMValue*)stack_value)[3].v_handle) = get_valid_counts_v1;
  ((int32_t*)stack_tcode)[(3)] = 3;
  (((TVMValue*)stack_value)[4].v_handle) = get_valid_counts_v2;
  ((int32_t*)stack_tcode)[(4)] = 3;
  (((TVMValue*)stack_value)[5].v_int64) = ((int64_t)64);
  ((int32_t*)stack_tcode)[(5)] = 0;
  (((TVMValue*)stack_value)[6].v_int64) = ((int64_t)30);
  ((int32_t*)stack_tcode)[(6)] = 0;
  if (fused_vision_get_valid_counts_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_vision_get_valid_counts_kernel0", &fused_vision_get_valid_counts_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_vision_get_valid_counts_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 7, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  if (TVMBackendFreeWorkspace(2, dev_id, atomic_add_return) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_pad_8(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[3];
  void* stack_tcode = stack;
  TVMValue stack1[5];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* T_pad = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = T_pad;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_int64) = ((int64_t)256);
  ((int32_t*)stack_tcode)[(2)] = 0;
  (((TVMValue*)stack_value)[3].v_int64) = ((int64_t)64);
  ((int32_t*)stack_tcode)[(3)] = 0;
  if (fused_nn_pad_8_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_pad_8_kernel0", &fused_nn_pad_8_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_pad_8_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 4, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_1(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[6];
  void* stack_tcode = stack;
  TVMValue stack1[11];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* arg2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg2_code = ((int32_t*)arg_type_ids)[(2)];
  void* arg3 = (((TVMValue*)args)[3].v_handle);
  int32_t arg3_code = ((int32_t*)arg_type_ids)[(3)];
  void* arg4 = (((TVMValue*)args)[4].v_handle);
  int32_t arg4_code = ((int32_t*)arg_type_ids)[(4)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* placeholder1 = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg2)[0].data);
  void* arg2_shape = (((DLTensor*)arg2)[0].shape);
  void* arg2_strides = (((DLTensor*)arg2)[0].strides);
  void* placeholder3 = (((DLTensor*)arg3)[0].data);
  void* arg3_shape = (((DLTensor*)arg3)[0].shape);
  void* arg3_strides = (((DLTensor*)arg3)[0].strides);
  void* T_cast = (((DLTensor*)arg4)[0].data);
  void* arg4_shape = (((DLTensor*)arg4)[0].shape);
  void* arg4_strides = (((DLTensor*)arg4)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  if (!(arg2_strides == NULL)) {
  }
  if (!(arg3_strides == NULL)) {
  }
  if (!(arg4_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder1;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_handle) = T_cast;
  ((int32_t*)stack_tcode)[(2)] = 3;
  (((TVMValue*)stack_value)[3].v_handle) = placeholder3;
  ((int32_t*)stack_tcode)[(3)] = 3;
  (((TVMValue*)stack_value)[4].v_handle) = placeholder2;
  ((int32_t*)stack_tcode)[(4)] = 3;
  (((TVMValue*)stack_value)[5].v_int64) = ((int64_t)361);
  ((int32_t*)stack_tcode)[(5)] = 0;
  (((TVMValue*)stack_value)[6].v_int64) = ((int64_t)1);
  ((int32_t*)stack_tcode)[(6)] = 0;
  (((TVMValue*)stack_value)[7].v_int64) = ((int64_t)48);
  ((int32_t*)stack_tcode)[(7)] = 0;
  (((TVMValue*)stack_value)[8].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(8)] = 0;
  (((TVMValue*)stack_value)[9].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(9)] = 0;
  if (fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_1_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_1_kernel0", &fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_1_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_1_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 10, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_pad_10(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[3];
  void* stack_tcode = stack;
  TVMValue stack1[5];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* T_pad = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = T_pad;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_int64) = ((int64_t)38);
  ((int32_t*)stack_tcode)[(2)] = 0;
  (((TVMValue*)stack_value)[3].v_int64) = ((int64_t)64);
  ((int32_t*)stack_tcode)[(3)] = 0;
  if (fused_nn_pad_10_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_pad_10_kernel0", &fused_nn_pad_10_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_pad_10_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 4, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_cast_sum_9(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[3];
  void* stack_tcode = stack;
  TVMValue stack1[6];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* T_cast_red = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = T_cast_red;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(2)] = 0;
  (((TVMValue*)stack_value)[3].v_int64) = ((int64_t)32);
  ((int32_t*)stack_tcode)[(3)] = 0;
  (((TVMValue*)stack_value)[4].v_int64) = ((int64_t)32);
  ((int32_t*)stack_tcode)[(4)] = 0;
  if (fused_cast_sum_9_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_cast_sum_9_kernel0", &fused_cast_sum_9_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_cast_sum_9_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 5, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_4(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[6];
  void* stack_tcode = stack;
  TVMValue stack1[11];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* arg2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg2_code = ((int32_t*)arg_type_ids)[(2)];
  void* arg3 = (((TVMValue*)args)[3].v_handle);
  int32_t arg3_code = ((int32_t*)arg_type_ids)[(3)];
  void* arg4 = (((TVMValue*)args)[4].v_handle);
  int32_t arg4_code = ((int32_t*)arg_type_ids)[(4)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* placeholder1 = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg2)[0].data);
  void* arg2_shape = (((DLTensor*)arg2)[0].shape);
  void* arg2_strides = (((DLTensor*)arg2)[0].strides);
  void* placeholder3 = (((DLTensor*)arg3)[0].data);
  void* arg3_shape = (((DLTensor*)arg3)[0].shape);
  void* arg3_strides = (((DLTensor*)arg3)[0].strides);
  void* T_cast = (((DLTensor*)arg4)[0].data);
  void* arg4_shape = (((DLTensor*)arg4)[0].shape);
  void* arg4_strides = (((DLTensor*)arg4)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  if (!(arg2_strides == NULL)) {
  }
  if (!(arg3_strides == NULL)) {
  }
  if (!(arg4_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder1;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_handle) = T_cast;
  ((int32_t*)stack_tcode)[(2)] = 3;
  (((TVMValue*)stack_value)[3].v_handle) = placeholder3;
  ((int32_t*)stack_tcode)[(3)] = 3;
  (((TVMValue*)stack_value)[4].v_handle) = placeholder2;
  ((int32_t*)stack_tcode)[(4)] = 3;
  (((TVMValue*)stack_value)[5].v_int64) = ((int64_t)361);
  ((int32_t*)stack_tcode)[(5)] = 0;
  (((TVMValue*)stack_value)[6].v_int64) = ((int64_t)1);
  ((int32_t*)stack_tcode)[(6)] = 0;
  (((TVMValue*)stack_value)[7].v_int64) = ((int64_t)48);
  ((int32_t*)stack_tcode)[(7)] = 0;
  (((TVMValue*)stack_value)[8].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(8)] = 0;
  (((TVMValue*)stack_value)[9].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(9)] = 0;
  if (fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_4_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_4_kernel0", &fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_4_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_4_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 10, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_cast_sum_5(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[3];
  void* stack_tcode = stack;
  TVMValue stack1[6];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* T_cast_red = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = T_cast_red;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_int64) = ((int64_t)46);
  ((int32_t*)stack_tcode)[(2)] = 0;
  (((TVMValue*)stack_value)[3].v_int64) = ((int64_t)32);
  ((int32_t*)stack_tcode)[(3)] = 0;
  (((TVMValue*)stack_value)[4].v_int64) = ((int64_t)32);
  ((int32_t*)stack_tcode)[(4)] = 0;
  if (fused_cast_sum_5_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_cast_sum_5_kernel0", &fused_cast_sum_5_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_cast_sum_5_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 5, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[4];
  void* stack_tcode = stack;
  TVMValue stack1[8];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* arg2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg2_code = ((int32_t*)arg_type_ids)[(2)];
  void* arg3 = (((TVMValue*)args)[3].v_handle);
  int32_t arg3_code = ((int32_t*)arg_type_ids)[(3)];
  void* arg4 = (((TVMValue*)args)[4].v_handle);
  int32_t arg4_code = ((int32_t*)arg_type_ids)[(4)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* placeholder1 = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg2)[0].data);
  void* arg2_shape = (((DLTensor*)arg2)[0].shape);
  void* arg2_strides = (((DLTensor*)arg2)[0].strides);
  void* placeholder3 = (((DLTensor*)arg3)[0].data);
  void* arg3_shape = (((DLTensor*)arg3)[0].shape);
  void* arg3_strides = (((DLTensor*)arg3)[0].strides);
  void* T_cast = (((DLTensor*)arg4)[0].data);
  void* arg4_shape = (((DLTensor*)arg4)[0].shape);
  void* arg4_strides = (((DLTensor*)arg4)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  if (!(arg2_strides == NULL)) {
  }
  if (!(arg3_strides == NULL)) {
  }
  if (!(arg4_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder1;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_handle) = T_cast;
  ((int32_t*)stack_tcode)[(2)] = 3;
  (((TVMValue*)stack_value)[3].v_handle) = placeholder3;
  ((int32_t*)stack_tcode)[(3)] = 3;
  (((TVMValue*)stack_value)[4].v_handle) = placeholder2;
  ((int32_t*)stack_tcode)[(4)] = 3;
  (((TVMValue*)stack_value)[5].v_int64) = ((int64_t)100);
  ((int32_t*)stack_tcode)[(5)] = 0;
  (((TVMValue*)stack_value)[6].v_int64) = ((int64_t)384);
  ((int32_t*)stack_tcode)[(6)] = 0;
  if (fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_kernel0", &fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 7, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_conv2d_multiply_subtract_add_add_cast_fixed_point_multiply_add_clip_cas_1311353059221188438__6(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[6];
  void* stack_tcode = stack;
  TVMValue stack1[12];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* arg2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg2_code = ((int32_t*)arg_type_ids)[(2)];
  void* arg3 = (((TVMValue*)args)[3].v_handle);
  int32_t arg3_code = ((int32_t*)arg_type_ids)[(3)];
  void* arg4 = (((TVMValue*)args)[4].v_handle);
  int32_t arg4_code = ((int32_t*)arg_type_ids)[(4)];
  void* arg5 = (((TVMValue*)args)[5].v_handle);
  int32_t arg5_code = ((int32_t*)arg_type_ids)[(5)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* placeholder1 = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg2)[0].data);
  void* arg2_shape = (((DLTensor*)arg2)[0].shape);
  void* arg2_strides = (((DLTensor*)arg2)[0].strides);
  void* placeholder3 = (((DLTensor*)arg3)[0].data);
  void* arg3_shape = (((DLTensor*)arg3)[0].shape);
  void* arg3_strides = (((DLTensor*)arg3)[0].strides);
  void* placeholder4 = (((DLTensor*)arg4)[0].data);
  void* arg4_shape = (((DLTensor*)arg4)[0].shape);
  void* arg4_strides = (((DLTensor*)arg4)[0].strides);
  void* T_cast = (((DLTensor*)arg5)[0].data);
  void* arg5_shape = (((DLTensor*)arg5)[0].shape);
  void* arg5_strides = (((DLTensor*)arg5)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  if (!(arg2_strides == NULL)) {
  }
  if (!(arg3_strides == NULL)) {
  }
  if (!(arg4_strides == NULL)) {
  }
  if (!(arg5_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder1;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_handle) = T_cast;
  ((int32_t*)stack_tcode)[(2)] = 3;
  (((TVMValue*)stack_value)[3].v_handle) = placeholder3;
  ((int32_t*)stack_tcode)[(3)] = 3;
  (((TVMValue*)stack_value)[4].v_handle) = placeholder4;
  ((int32_t*)stack_tcode)[(4)] = 3;
  (((TVMValue*)stack_value)[5].v_handle) = placeholder2;
  ((int32_t*)stack_tcode)[(5)] = 3;
  (((TVMValue*)stack_value)[6].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(6)] = 0;
  (((TVMValue*)stack_value)[7].v_int64) = ((int64_t)1);
  ((int32_t*)stack_tcode)[(7)] = 0;
  (((TVMValue*)stack_value)[8].v_int64) = ((int64_t)3);
  ((int32_t*)stack_tcode)[(8)] = 0;
  (((TVMValue*)stack_value)[9].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(9)] = 0;
  (((TVMValue*)stack_value)[10].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(10)] = 0;
  if (fused_nn_conv2d_multiply_subtract_add_add_cast_fixed_point_multiply_add_clip_cas_1311353059221188438__6_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_conv2d_multiply_subtract_add_add_cast_fixed_point_multiply_add_clip_cas_1311353059221188438__6_kernel0", &fused_nn_conv2d_multiply_subtract_add_add_cast_fixed_point_multiply_add_clip_cas_1311353059221188438__6_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_conv2d_multiply_subtract_add_add_cast_fixed_point_multiply_add_clip_cas_1311353059221188438__6_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 11, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_avg_pool2d_multiply_11(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[3];
  void* stack_tcode = stack;
  TVMValue stack1[5];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* T_multiply = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = T_multiply;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_int64) = ((int64_t)2166);
  ((int32_t*)stack_tcode)[(2)] = 0;
  (((TVMValue*)stack_value)[3].v_int64) = ((int64_t)64);
  ((int32_t*)stack_tcode)[(3)] = 0;
  if (fused_nn_avg_pool2d_multiply_11_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_avg_pool2d_multiply_11_kernel0", &fused_nn_avg_pool2d_multiply_11_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_avg_pool2d_multiply_11_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 4, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_add_clip_cast(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[6];
  void* stack_tcode = stack;
  TVMValue stack1[11];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* arg2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg2_code = ((int32_t*)arg_type_ids)[(2)];
  void* arg3 = (((TVMValue*)args)[3].v_handle);
  int32_t arg3_code = ((int32_t*)arg_type_ids)[(3)];
  void* arg4 = (((TVMValue*)args)[4].v_handle);
  int32_t arg4_code = ((int32_t*)arg_type_ids)[(4)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* placeholder1 = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg2)[0].data);
  void* arg2_shape = (((DLTensor*)arg2)[0].shape);
  void* arg2_strides = (((DLTensor*)arg2)[0].strides);
  void* placeholder3 = (((DLTensor*)arg3)[0].data);
  void* arg3_shape = (((DLTensor*)arg3)[0].shape);
  void* arg3_strides = (((DLTensor*)arg3)[0].strides);
  void* T_cast = (((DLTensor*)arg4)[0].data);
  void* arg4_shape = (((DLTensor*)arg4)[0].shape);
  void* arg4_strides = (((DLTensor*)arg4)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  if (!(arg2_strides == NULL)) {
  }
  if (!(arg3_strides == NULL)) {
  }
  if (!(arg4_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder1;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_handle) = T_cast;
  ((int32_t*)stack_tcode)[(2)] = 3;
  (((TVMValue*)stack_value)[3].v_handle) = placeholder3;
  ((int32_t*)stack_tcode)[(3)] = 3;
  (((TVMValue*)stack_value)[4].v_handle) = placeholder2;
  ((int32_t*)stack_tcode)[(4)] = 3;
  (((TVMValue*)stack_value)[5].v_int64) = ((int64_t)361);
  ((int32_t*)stack_tcode)[(5)] = 0;
  (((TVMValue*)stack_value)[6].v_int64) = ((int64_t)1);
  ((int32_t*)stack_tcode)[(6)] = 0;
  (((TVMValue*)stack_value)[7].v_int64) = ((int64_t)35);
  ((int32_t*)stack_tcode)[(7)] = 0;
  (((TVMValue*)stack_value)[8].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(8)] = 0;
  (((TVMValue*)stack_value)[9].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(9)] = 0;
  if (fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_add_clip_cast_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_add_clip_cast_kernel0", &fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_add_clip_cast_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_add_clip_cast_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 10, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_conv2d_multiply_subtract_add_add_cast_fixed_point_multiply_add_clip_cas_2927425864328527930__1(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[6];
  void* stack_tcode = stack;
  TVMValue stack1[12];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* arg2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg2_code = ((int32_t*)arg_type_ids)[(2)];
  void* arg3 = (((TVMValue*)args)[3].v_handle);
  int32_t arg3_code = ((int32_t*)arg_type_ids)[(3)];
  void* arg4 = (((TVMValue*)args)[4].v_handle);
  int32_t arg4_code = ((int32_t*)arg_type_ids)[(4)];
  void* arg5 = (((TVMValue*)args)[5].v_handle);
  int32_t arg5_code = ((int32_t*)arg_type_ids)[(5)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* placeholder1 = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg2)[0].data);
  void* arg2_shape = (((DLTensor*)arg2)[0].shape);
  void* arg2_strides = (((DLTensor*)arg2)[0].strides);
  void* placeholder3 = (((DLTensor*)arg3)[0].data);
  void* arg3_shape = (((DLTensor*)arg3)[0].shape);
  void* arg3_strides = (((DLTensor*)arg3)[0].strides);
  void* placeholder4 = (((DLTensor*)arg4)[0].data);
  void* arg4_shape = (((DLTensor*)arg4)[0].shape);
  void* arg4_strides = (((DLTensor*)arg4)[0].strides);
  void* compute = (((DLTensor*)arg5)[0].data);
  void* arg5_shape = (((DLTensor*)arg5)[0].shape);
  void* arg5_strides = (((DLTensor*)arg5)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  if (!(arg2_strides == NULL)) {
  }
  if (!(arg3_strides == NULL)) {
  }
  if (!(arg4_strides == NULL)) {
  }
  if (!(arg5_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder1;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_handle) = compute;
  ((int32_t*)stack_tcode)[(2)] = 3;
  (((TVMValue*)stack_value)[3].v_handle) = placeholder3;
  ((int32_t*)stack_tcode)[(3)] = 3;
  (((TVMValue*)stack_value)[4].v_handle) = placeholder4;
  ((int32_t*)stack_tcode)[(4)] = 3;
  (((TVMValue*)stack_value)[5].v_handle) = placeholder2;
  ((int32_t*)stack_tcode)[(5)] = 3;
  (((TVMValue*)stack_value)[6].v_int64) = ((int64_t)9);
  ((int32_t*)stack_tcode)[(6)] = 0;
  (((TVMValue*)stack_value)[7].v_int64) = ((int64_t)1);
  ((int32_t*)stack_tcode)[(7)] = 0;
  (((TVMValue*)stack_value)[8].v_int64) = ((int64_t)12);
  ((int32_t*)stack_tcode)[(8)] = 0;
  (((TVMValue*)stack_value)[9].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(9)] = 0;
  (((TVMValue*)stack_value)[10].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(10)] = 0;
  if (fused_nn_conv2d_multiply_subtract_add_add_cast_fixed_point_multiply_add_clip_cas_2927425864328527930__1_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_conv2d_multiply_subtract_add_add_cast_fixed_point_multiply_add_clip_cas_2927425864328527930__1_kernel0", &fused_nn_conv2d_multiply_subtract_add_add_cast_fixed_point_multiply_add_clip_cas_2927425864328527930__1_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_conv2d_multiply_subtract_add_add_cast_fixed_point_multiply_add_clip_cas_2927425864328527930__1_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 11, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_avg_pool2d_multiply_15(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[3];
  void* stack_tcode = stack;
  TVMValue stack1[5];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* T_multiply = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = T_multiply;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_int64) = ((int64_t)1);
  ((int32_t*)stack_tcode)[(2)] = 0;
  (((TVMValue*)stack_value)[3].v_int64) = ((int64_t)64);
  ((int32_t*)stack_tcode)[(3)] = 0;
  if (fused_nn_avg_pool2d_multiply_15_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_avg_pool2d_multiply_15_kernel0", &fused_nn_avg_pool2d_multiply_15_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_avg_pool2d_multiply_15_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 4, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_pad_5(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[3];
  void* stack_tcode = stack;
  TVMValue stack1[5];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* T_pad = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = T_pad;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_int64) = ((int64_t)256);
  ((int32_t*)stack_tcode)[(2)] = 0;
  (((TVMValue*)stack_value)[3].v_int64) = ((int64_t)64);
  ((int32_t*)stack_tcode)[(3)] = 0;
  if (fused_nn_pad_5_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_pad_5_kernel0", &fused_nn_pad_5_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_pad_5_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 4, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_8(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[6];
  void* stack_tcode = stack;
  TVMValue stack1[11];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* arg2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg2_code = ((int32_t*)arg_type_ids)[(2)];
  void* arg3 = (((TVMValue*)args)[3].v_handle);
  int32_t arg3_code = ((int32_t*)arg_type_ids)[(3)];
  void* arg4 = (((TVMValue*)args)[4].v_handle);
  int32_t arg4_code = ((int32_t*)arg_type_ids)[(4)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* placeholder1 = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg2)[0].data);
  void* arg2_shape = (((DLTensor*)arg2)[0].shape);
  void* arg2_strides = (((DLTensor*)arg2)[0].strides);
  void* placeholder3 = (((DLTensor*)arg3)[0].data);
  void* arg3_shape = (((DLTensor*)arg3)[0].shape);
  void* arg3_strides = (((DLTensor*)arg3)[0].strides);
  void* T_cast = (((DLTensor*)arg4)[0].data);
  void* arg4_shape = (((DLTensor*)arg4)[0].shape);
  void* arg4_strides = (((DLTensor*)arg4)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  if (!(arg2_strides == NULL)) {
  }
  if (!(arg3_strides == NULL)) {
  }
  if (!(arg4_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder1;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_handle) = T_cast;
  ((int32_t*)stack_tcode)[(2)] = 3;
  (((TVMValue*)stack_value)[3].v_handle) = placeholder3;
  ((int32_t*)stack_tcode)[(3)] = 3;
  (((TVMValue*)stack_value)[4].v_handle) = placeholder2;
  ((int32_t*)stack_tcode)[(4)] = 3;
  (((TVMValue*)stack_value)[5].v_int64) = ((int64_t)5625);
  ((int32_t*)stack_tcode)[(5)] = 0;
  (((TVMValue*)stack_value)[6].v_int64) = ((int64_t)1);
  ((int32_t*)stack_tcode)[(6)] = 0;
  (((TVMValue*)stack_value)[7].v_int64) = ((int64_t)12);
  ((int32_t*)stack_tcode)[(7)] = 0;
  (((TVMValue*)stack_value)[8].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(8)] = 0;
  (((TVMValue*)stack_value)[9].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(9)] = 0;
  if (fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_8_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_8_kernel0", &fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_8_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_8_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 10, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_multiply_10(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[3];
  void* stack_tcode = stack;
  TVMValue stack1[5];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* T_multiply = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = T_multiply;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_int64) = ((int64_t)1);
  ((int32_t*)stack_tcode)[(2)] = 0;
  (((TVMValue*)stack_value)[3].v_int64) = ((int64_t)64);
  ((int32_t*)stack_tcode)[(3)] = 0;
  if (fused_multiply_10_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_multiply_10_kernel0", &fused_multiply_10_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_multiply_10_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 4, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_cast_multiply_4(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[3];
  void* stack_tcode = stack;
  TVMValue stack1[5];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* T_multiply = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = T_multiply;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_int64) = ((int64_t)256);
  ((int32_t*)stack_tcode)[(2)] = 0;
  (((TVMValue*)stack_value)[3].v_int64) = ((int64_t)64);
  ((int32_t*)stack_tcode)[(3)] = 0;
  if (fused_cast_multiply_4_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_cast_multiply_4_kernel0", &fused_cast_multiply_4_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_cast_multiply_4_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 4, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_multiply_8(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[3];
  void* stack_tcode = stack;
  TVMValue stack1[5];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* T_multiply = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = T_multiply;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_int64) = ((int64_t)256);
  ((int32_t*)stack_tcode)[(2)] = 0;
  (((TVMValue*)stack_value)[3].v_int64) = ((int64_t)64);
  ((int32_t*)stack_tcode)[(3)] = 0;
  if (fused_multiply_8_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_multiply_8_kernel0", &fused_multiply_8_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_multiply_8_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 4, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_pad_3(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[3];
  void* stack_tcode = stack;
  TVMValue stack1[5];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* T_pad = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = T_pad;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_int64) = ((int64_t)256);
  ((int32_t*)stack_tcode)[(2)] = 0;
  (((TVMValue*)stack_value)[3].v_int64) = ((int64_t)64);
  ((int32_t*)stack_tcode)[(3)] = 0;
  if (fused_nn_pad_3_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_pad_3_kernel0", &fused_nn_pad_3_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_pad_3_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 4, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_reshape_6(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[3];
  void* stack_tcode = stack;
  TVMValue stack1[5];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* arg2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg2_code = ((int32_t*)arg_type_ids)[(2)];
  void* arg3 = (((TVMValue*)args)[3].v_handle);
  int32_t arg3_code = ((int32_t*)arg_type_ids)[(3)];
  void* arg4 = (((TVMValue*)args)[4].v_handle);
  int32_t arg4_code = ((int32_t*)arg_type_ids)[(4)];
  void* arg5 = (((TVMValue*)args)[5].v_handle);
  int32_t arg5_code = ((int32_t*)arg_type_ids)[(5)];
  void* arg6 = (((TVMValue*)args)[6].v_handle);
  int32_t arg6_code = ((int32_t*)arg_type_ids)[(6)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* placeholder1 = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg2)[0].data);
  void* arg2_shape = (((DLTensor*)arg2)[0].shape);
  void* arg2_strides = (((DLTensor*)arg2)[0].strides);
  void* placeholder3 = (((DLTensor*)arg3)[0].data);
  void* arg3_shape = (((DLTensor*)arg3)[0].shape);
  void* arg3_strides = (((DLTensor*)arg3)[0].strides);
  void* placeholder4 = (((DLTensor*)arg4)[0].data);
  void* arg4_shape = (((DLTensor*)arg4)[0].shape);
  void* arg4_strides = (((DLTensor*)arg4)[0].strides);
  void* placeholder5 = (((DLTensor*)arg5)[0].data);
  void* arg5_shape = (((DLTensor*)arg5)[0].shape);
  void* arg5_strides = (((DLTensor*)arg5)[0].strides);
  void* T_reshape = (((DLTensor*)arg6)[0].data);
  void* arg6_shape = (((DLTensor*)arg6)[0].shape);
  void* arg6_strides = (((DLTensor*)arg6)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  if (!(arg2_strides == NULL)) {
  }
  if (!(arg3_strides == NULL)) {
  }
  if (!(arg4_strides == NULL)) {
  }
  if (!(arg5_strides == NULL)) {
  }
  if (!(arg6_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = T_reshape;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_int64) = ((int64_t)1);
  ((int32_t*)stack_tcode)[(2)] = 0;
  (((TVMValue*)stack_value)[3].v_int64) = ((int64_t)64);
  ((int32_t*)stack_tcode)[(3)] = 0;
  if (fused_reshape_6_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_reshape_6_kernel0", &fused_reshape_6_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_reshape_6_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 4, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_avg_pool2d_multiply_12(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[3];
  void* stack_tcode = stack;
  TVMValue stack1[5];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* T_multiply = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = T_multiply;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_int64) = ((int64_t)600);
  ((int32_t*)stack_tcode)[(2)] = 0;
  (((TVMValue*)stack_value)[3].v_int64) = ((int64_t)64);
  ((int32_t*)stack_tcode)[(3)] = 0;
  if (fused_nn_avg_pool2d_multiply_12_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_avg_pool2d_multiply_12_kernel0", &fused_nn_avg_pool2d_multiply_12_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_avg_pool2d_multiply_12_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 4, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_conv2d_multiply_subtract_add_add_cast_fixed_point_multiply_add_clip_cas_1311353059221188438__7(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[6];
  void* stack_tcode = stack;
  TVMValue stack1[12];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* arg2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg2_code = ((int32_t*)arg_type_ids)[(2)];
  void* arg3 = (((TVMValue*)args)[3].v_handle);
  int32_t arg3_code = ((int32_t*)arg_type_ids)[(3)];
  void* arg4 = (((TVMValue*)args)[4].v_handle);
  int32_t arg4_code = ((int32_t*)arg_type_ids)[(4)];
  void* arg5 = (((TVMValue*)args)[5].v_handle);
  int32_t arg5_code = ((int32_t*)arg_type_ids)[(5)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* placeholder1 = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg2)[0].data);
  void* arg2_shape = (((DLTensor*)arg2)[0].shape);
  void* arg2_strides = (((DLTensor*)arg2)[0].strides);
  void* placeholder3 = (((DLTensor*)arg3)[0].data);
  void* arg3_shape = (((DLTensor*)arg3)[0].shape);
  void* arg3_strides = (((DLTensor*)arg3)[0].strides);
  void* placeholder4 = (((DLTensor*)arg4)[0].data);
  void* arg4_shape = (((DLTensor*)arg4)[0].shape);
  void* arg4_strides = (((DLTensor*)arg4)[0].strides);
  void* T_cast = (((DLTensor*)arg5)[0].data);
  void* arg5_shape = (((DLTensor*)arg5)[0].shape);
  void* arg5_strides = (((DLTensor*)arg5)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  if (!(arg2_strides == NULL)) {
  }
  if (!(arg3_strides == NULL)) {
  }
  if (!(arg4_strides == NULL)) {
  }
  if (!(arg5_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder1;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_handle) = T_cast;
  ((int32_t*)stack_tcode)[(2)] = 3;
  (((TVMValue*)stack_value)[3].v_handle) = placeholder3;
  ((int32_t*)stack_tcode)[(3)] = 3;
  (((TVMValue*)stack_value)[4].v_handle) = placeholder4;
  ((int32_t*)stack_tcode)[(4)] = 3;
  (((TVMValue*)stack_value)[5].v_handle) = placeholder2;
  ((int32_t*)stack_tcode)[(5)] = 3;
  (((TVMValue*)stack_value)[6].v_int64) = ((int64_t)1);
  ((int32_t*)stack_tcode)[(6)] = 0;
  (((TVMValue*)stack_value)[7].v_int64) = ((int64_t)1);
  ((int32_t*)stack_tcode)[(7)] = 0;
  (((TVMValue*)stack_value)[8].v_int64) = ((int64_t)3);
  ((int32_t*)stack_tcode)[(8)] = 0;
  (((TVMValue*)stack_value)[9].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(9)] = 0;
  (((TVMValue*)stack_value)[10].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(10)] = 0;
  if (fused_nn_conv2d_multiply_subtract_add_add_cast_fixed_point_multiply_add_clip_cas_1311353059221188438__7_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_conv2d_multiply_subtract_add_add_cast_fixed_point_multiply_add_clip_cas_1311353059221188438__7_kernel0", &fused_nn_conv2d_multiply_subtract_add_add_cast_fixed_point_multiply_add_clip_cas_1311353059221188438__7_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_conv2d_multiply_subtract_add_add_cast_fixed_point_multiply_add_clip_cas_1311353059221188438__7_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 11, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_avg_pool2d_multiply_16(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[3];
  void* stack_tcode = stack;
  TVMValue stack1[5];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* T_multiply = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = T_multiply;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_int64) = ((int64_t)1);
  ((int32_t*)stack_tcode)[(2)] = 0;
  (((TVMValue*)stack_value)[3].v_int64) = ((int64_t)64);
  ((int32_t*)stack_tcode)[(3)] = 0;
  if (fused_nn_avg_pool2d_multiply_16_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_avg_pool2d_multiply_16_kernel0", &fused_nn_avg_pool2d_multiply_16_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_avg_pool2d_multiply_16_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 4, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_cast_multiply_6(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[3];
  void* stack_tcode = stack;
  TVMValue stack1[5];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* T_multiply = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = T_multiply;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_int64) = ((int64_t)256);
  ((int32_t*)stack_tcode)[(2)] = 0;
  (((TVMValue*)stack_value)[3].v_int64) = ((int64_t)64);
  ((int32_t*)stack_tcode)[(3)] = 0;
  if (fused_cast_multiply_6_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_cast_multiply_6_kernel0", &fused_cast_multiply_6_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_cast_multiply_6_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 4, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_conv2d_subtract_add_add_cast_fixed_point_multiply_clip_cast(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[6];
  void* stack_tcode = stack;
  TVMValue stack1[12];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* arg2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg2_code = ((int32_t*)arg_type_ids)[(2)];
  void* arg3 = (((TVMValue*)args)[3].v_handle);
  int32_t arg3_code = ((int32_t*)arg_type_ids)[(3)];
  void* arg4 = (((TVMValue*)args)[4].v_handle);
  int32_t arg4_code = ((int32_t*)arg_type_ids)[(4)];
  void* arg5 = (((TVMValue*)args)[5].v_handle);
  int32_t arg5_code = ((int32_t*)arg_type_ids)[(5)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* placeholder1 = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg2)[0].data);
  void* arg2_shape = (((DLTensor*)arg2)[0].shape);
  void* arg2_strides = (((DLTensor*)arg2)[0].strides);
  void* placeholder3 = (((DLTensor*)arg3)[0].data);
  void* arg3_shape = (((DLTensor*)arg3)[0].shape);
  void* arg3_strides = (((DLTensor*)arg3)[0].strides);
  void* placeholder4 = (((DLTensor*)arg4)[0].data);
  void* arg4_shape = (((DLTensor*)arg4)[0].shape);
  void* arg4_strides = (((DLTensor*)arg4)[0].strides);
  void* T_cast = (((DLTensor*)arg5)[0].data);
  void* arg5_shape = (((DLTensor*)arg5)[0].shape);
  void* arg5_strides = (((DLTensor*)arg5)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  if (!(arg2_strides == NULL)) {
  }
  if (!(arg3_strides == NULL)) {
  }
  if (!(arg4_strides == NULL)) {
  }
  if (!(arg5_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder1;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_handle) = T_cast;
  ((int32_t*)stack_tcode)[(2)] = 3;
  (((TVMValue*)stack_value)[3].v_handle) = placeholder3;
  ((int32_t*)stack_tcode)[(3)] = 3;
  (((TVMValue*)stack_value)[4].v_handle) = placeholder4;
  ((int32_t*)stack_tcode)[(4)] = 3;
  (((TVMValue*)stack_value)[5].v_handle) = placeholder2;
  ((int32_t*)stack_tcode)[(5)] = 3;
  (((TVMValue*)stack_value)[6].v_int64) = ((int64_t)22500);
  ((int32_t*)stack_tcode)[(6)] = 0;
  (((TVMValue*)stack_value)[7].v_int64) = ((int64_t)1);
  ((int32_t*)stack_tcode)[(7)] = 0;
  (((TVMValue*)stack_value)[8].v_int64) = ((int64_t)3);
  ((int32_t*)stack_tcode)[(8)] = 0;
  (((TVMValue*)stack_value)[9].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(9)] = 0;
  (((TVMValue*)stack_value)[10].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(10)] = 0;
  if (fused_nn_conv2d_subtract_add_add_cast_fixed_point_multiply_clip_cast_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_conv2d_subtract_add_add_cast_fixed_point_multiply_clip_cast_kernel0", &fused_nn_conv2d_subtract_add_add_cast_fixed_point_multiply_clip_cast_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_conv2d_subtract_add_add_cast_fixed_point_multiply_clip_cast_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 11, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_conv2d_multiply_subtract_add_add_cast_fixed_point_multiply_add_clip_cas_1311353059221188438__5(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[6];
  void* stack_tcode = stack;
  TVMValue stack1[12];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* arg2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg2_code = ((int32_t*)arg_type_ids)[(2)];
  void* arg3 = (((TVMValue*)args)[3].v_handle);
  int32_t arg3_code = ((int32_t*)arg_type_ids)[(3)];
  void* arg4 = (((TVMValue*)args)[4].v_handle);
  int32_t arg4_code = ((int32_t*)arg_type_ids)[(4)];
  void* arg5 = (((TVMValue*)args)[5].v_handle);
  int32_t arg5_code = ((int32_t*)arg_type_ids)[(5)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* placeholder1 = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg2)[0].data);
  void* arg2_shape = (((DLTensor*)arg2)[0].shape);
  void* arg2_strides = (((DLTensor*)arg2)[0].strides);
  void* placeholder3 = (((DLTensor*)arg3)[0].data);
  void* arg3_shape = (((DLTensor*)arg3)[0].shape);
  void* arg3_strides = (((DLTensor*)arg3)[0].strides);
  void* placeholder4 = (((DLTensor*)arg4)[0].data);
  void* arg4_shape = (((DLTensor*)arg4)[0].shape);
  void* arg4_strides = (((DLTensor*)arg4)[0].strides);
  void* T_cast = (((DLTensor*)arg5)[0].data);
  void* arg5_shape = (((DLTensor*)arg5)[0].shape);
  void* arg5_strides = (((DLTensor*)arg5)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  if (!(arg2_strides == NULL)) {
  }
  if (!(arg3_strides == NULL)) {
  }
  if (!(arg4_strides == NULL)) {
  }
  if (!(arg5_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder1;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_handle) = T_cast;
  ((int32_t*)stack_tcode)[(2)] = 3;
  (((TVMValue*)stack_value)[3].v_handle) = placeholder3;
  ((int32_t*)stack_tcode)[(3)] = 3;
  (((TVMValue*)stack_value)[4].v_handle) = placeholder4;
  ((int32_t*)stack_tcode)[(4)] = 3;
  (((TVMValue*)stack_value)[5].v_handle) = placeholder2;
  ((int32_t*)stack_tcode)[(5)] = 3;
  (((TVMValue*)stack_value)[6].v_int64) = ((int64_t)9);
  ((int32_t*)stack_tcode)[(6)] = 0;
  (((TVMValue*)stack_value)[7].v_int64) = ((int64_t)1);
  ((int32_t*)stack_tcode)[(7)] = 0;
  (((TVMValue*)stack_value)[8].v_int64) = ((int64_t)3);
  ((int32_t*)stack_tcode)[(8)] = 0;
  (((TVMValue*)stack_value)[9].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(9)] = 0;
  (((TVMValue*)stack_value)[10].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(10)] = 0;
  if (fused_nn_conv2d_multiply_subtract_add_add_cast_fixed_point_multiply_add_clip_cas_1311353059221188438__5_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_conv2d_multiply_subtract_add_add_cast_fixed_point_multiply_add_clip_cas_1311353059221188438__5_kernel0", &fused_nn_conv2d_multiply_subtract_add_add_cast_fixed_point_multiply_add_clip_cas_1311353059221188438__5_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_conv2d_multiply_subtract_add_add_cast_fixed_point_multiply_add_clip_cas_1311353059221188438__5_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 11, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_cast_sum_16(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[3];
  void* stack_tcode = stack;
  TVMValue stack1[6];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* T_cast_red = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = T_cast_red;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_int64) = ((int64_t)1);
  ((int32_t*)stack_tcode)[(2)] = 0;
  (((TVMValue*)stack_value)[3].v_int64) = ((int64_t)32);
  ((int32_t*)stack_tcode)[(3)] = 0;
  (((TVMValue*)stack_value)[4].v_int64) = ((int64_t)32);
  ((int32_t*)stack_tcode)[(4)] = 0;
  if (fused_cast_sum_16_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_cast_sum_16_kernel0", &fused_cast_sum_16_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_cast_sum_16_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 5, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_pad_11(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[3];
  void* stack_tcode = stack;
  TVMValue stack1[5];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* T_pad = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = T_pad;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_int64) = ((int64_t)7);
  ((int32_t*)stack_tcode)[(2)] = 0;
  (((TVMValue*)stack_value)[3].v_int64) = ((int64_t)64);
  ((int32_t*)stack_tcode)[(3)] = 0;
  if (fused_nn_pad_11_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_pad_11_kernel0", &fused_nn_pad_11_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_pad_11_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 4, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_avg_pool2d_multiply_5(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[3];
  void* stack_tcode = stack;
  TVMValue stack1[5];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* T_multiply = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = T_multiply;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_int64) = ((int64_t)4332);
  ((int32_t*)stack_tcode)[(2)] = 0;
  (((TVMValue*)stack_value)[3].v_int64) = ((int64_t)64);
  ((int32_t*)stack_tcode)[(3)] = 0;
  if (fused_nn_avg_pool2d_multiply_5_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_avg_pool2d_multiply_5_kernel0", &fused_nn_avg_pool2d_multiply_5_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_avg_pool2d_multiply_5_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 4, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_8(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[4];
  void* stack_tcode = stack;
  TVMValue stack1[8];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* arg2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg2_code = ((int32_t*)arg_type_ids)[(2)];
  void* arg3 = (((TVMValue*)args)[3].v_handle);
  int32_t arg3_code = ((int32_t*)arg_type_ids)[(3)];
  void* arg4 = (((TVMValue*)args)[4].v_handle);
  int32_t arg4_code = ((int32_t*)arg_type_ids)[(4)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* placeholder1 = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg2)[0].data);
  void* arg2_shape = (((DLTensor*)arg2)[0].shape);
  void* arg2_strides = (((DLTensor*)arg2)[0].strides);
  void* placeholder3 = (((DLTensor*)arg3)[0].data);
  void* arg3_shape = (((DLTensor*)arg3)[0].shape);
  void* arg3_strides = (((DLTensor*)arg3)[0].strides);
  void* T_cast = (((DLTensor*)arg4)[0].data);
  void* arg4_shape = (((DLTensor*)arg4)[0].shape);
  void* arg4_strides = (((DLTensor*)arg4)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  if (!(arg2_strides == NULL)) {
  }
  if (!(arg3_strides == NULL)) {
  }
  if (!(arg4_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder1;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_handle) = T_cast;
  ((int32_t*)stack_tcode)[(2)] = 3;
  (((TVMValue*)stack_value)[3].v_handle) = placeholder3;
  ((int32_t*)stack_tcode)[(3)] = 3;
  (((TVMValue*)stack_value)[4].v_handle) = placeholder2;
  ((int32_t*)stack_tcode)[(4)] = 3;
  (((TVMValue*)stack_value)[5].v_int64) = ((int64_t)1444);
  ((int32_t*)stack_tcode)[(5)] = 0;
  (((TVMValue*)stack_value)[6].v_int64) = ((int64_t)96);
  ((int32_t*)stack_tcode)[(6)] = 0;
  if (fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_8_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_8_kernel0", &fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_8_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_8_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 7, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_conv2d_subtract_add_add_cast_fixed_point_multiply_add_clip_cast_clip_1(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[6];
  void* stack_tcode = stack;
  TVMValue stack1[12];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* arg2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg2_code = ((int32_t*)arg_type_ids)[(2)];
  void* arg3 = (((TVMValue*)args)[3].v_handle);
  int32_t arg3_code = ((int32_t*)arg_type_ids)[(3)];
  void* arg4 = (((TVMValue*)args)[4].v_handle);
  int32_t arg4_code = ((int32_t*)arg_type_ids)[(4)];
  void* arg5 = (((TVMValue*)args)[5].v_handle);
  int32_t arg5_code = ((int32_t*)arg_type_ids)[(5)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* placeholder1 = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg2)[0].data);
  void* arg2_shape = (((DLTensor*)arg2)[0].shape);
  void* arg2_strides = (((DLTensor*)arg2)[0].strides);
  void* placeholder3 = (((DLTensor*)arg3)[0].data);
  void* arg3_shape = (((DLTensor*)arg3)[0].shape);
  void* arg3_strides = (((DLTensor*)arg3)[0].strides);
  void* placeholder4 = (((DLTensor*)arg4)[0].data);
  void* arg4_shape = (((DLTensor*)arg4)[0].shape);
  void* arg4_strides = (((DLTensor*)arg4)[0].strides);
  void* compute = (((DLTensor*)arg5)[0].data);
  void* arg5_shape = (((DLTensor*)arg5)[0].shape);
  void* arg5_strides = (((DLTensor*)arg5)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  if (!(arg2_strides == NULL)) {
  }
  if (!(arg3_strides == NULL)) {
  }
  if (!(arg4_strides == NULL)) {
  }
  if (!(arg5_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder1;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_handle) = compute;
  ((int32_t*)stack_tcode)[(2)] = 3;
  (((TVMValue*)stack_value)[3].v_handle) = placeholder3;
  ((int32_t*)stack_tcode)[(3)] = 3;
  (((TVMValue*)stack_value)[4].v_handle) = placeholder4;
  ((int32_t*)stack_tcode)[(4)] = 3;
  (((TVMValue*)stack_value)[5].v_handle) = placeholder2;
  ((int32_t*)stack_tcode)[(5)] = 3;
  (((TVMValue*)stack_value)[6].v_int64) = ((int64_t)9);
  ((int32_t*)stack_tcode)[(6)] = 0;
  (((TVMValue*)stack_value)[7].v_int64) = ((int64_t)1);
  ((int32_t*)stack_tcode)[(7)] = 0;
  (((TVMValue*)stack_value)[8].v_int64) = ((int64_t)24);
  ((int32_t*)stack_tcode)[(8)] = 0;
  (((TVMValue*)stack_value)[9].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(9)] = 0;
  (((TVMValue*)stack_value)[10].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(10)] = 0;
  if (fused_nn_conv2d_subtract_add_add_cast_fixed_point_multiply_add_clip_cast_clip_1_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_conv2d_subtract_add_add_cast_fixed_point_multiply_add_clip_cast_clip_1_kernel0", &fused_nn_conv2d_subtract_add_add_cast_fixed_point_multiply_add_clip_cast_clip_1_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_conv2d_subtract_add_add_cast_fixed_point_multiply_add_clip_cast_clip_1_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 11, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_conv2d_multiply_subtract_add_add_cast_fixed_point_multiply_add_clip_cas_1311353059221188438__1(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[6];
  void* stack_tcode = stack;
  TVMValue stack1[12];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* arg2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg2_code = ((int32_t*)arg_type_ids)[(2)];
  void* arg3 = (((TVMValue*)args)[3].v_handle);
  int32_t arg3_code = ((int32_t*)arg_type_ids)[(3)];
  void* arg4 = (((TVMValue*)args)[4].v_handle);
  int32_t arg4_code = ((int32_t*)arg_type_ids)[(4)];
  void* arg5 = (((TVMValue*)args)[5].v_handle);
  int32_t arg5_code = ((int32_t*)arg_type_ids)[(5)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* placeholder1 = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg2)[0].data);
  void* arg2_shape = (((DLTensor*)arg2)[0].shape);
  void* arg2_strides = (((DLTensor*)arg2)[0].strides);
  void* placeholder3 = (((DLTensor*)arg3)[0].data);
  void* arg3_shape = (((DLTensor*)arg3)[0].shape);
  void* arg3_strides = (((DLTensor*)arg3)[0].strides);
  void* placeholder4 = (((DLTensor*)arg4)[0].data);
  void* arg4_shape = (((DLTensor*)arg4)[0].shape);
  void* arg4_strides = (((DLTensor*)arg4)[0].strides);
  void* T_cast = (((DLTensor*)arg5)[0].data);
  void* arg5_shape = (((DLTensor*)arg5)[0].shape);
  void* arg5_strides = (((DLTensor*)arg5)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  if (!(arg2_strides == NULL)) {
  }
  if (!(arg3_strides == NULL)) {
  }
  if (!(arg4_strides == NULL)) {
  }
  if (!(arg5_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder1;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_handle) = T_cast;
  ((int32_t*)stack_tcode)[(2)] = 3;
  (((TVMValue*)stack_value)[3].v_handle) = placeholder3;
  ((int32_t*)stack_tcode)[(3)] = 3;
  (((TVMValue*)stack_value)[4].v_handle) = placeholder4;
  ((int32_t*)stack_tcode)[(4)] = 3;
  (((TVMValue*)stack_value)[5].v_handle) = placeholder2;
  ((int32_t*)stack_tcode)[(5)] = 3;
  (((TVMValue*)stack_value)[6].v_int64) = ((int64_t)9);
  ((int32_t*)stack_tcode)[(6)] = 0;
  (((TVMValue*)stack_value)[7].v_int64) = ((int64_t)1);
  ((int32_t*)stack_tcode)[(7)] = 0;
  (((TVMValue*)stack_value)[8].v_int64) = ((int64_t)69);
  ((int32_t*)stack_tcode)[(8)] = 0;
  (((TVMValue*)stack_value)[9].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(9)] = 0;
  (((TVMValue*)stack_value)[10].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(10)] = 0;
  if (fused_nn_conv2d_multiply_subtract_add_add_cast_fixed_point_multiply_add_clip_cas_1311353059221188438__1_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_conv2d_multiply_subtract_add_add_cast_fixed_point_multiply_add_clip_cas_1311353059221188438__1_kernel0", &fused_nn_conv2d_multiply_subtract_add_add_cast_fixed_point_multiply_add_clip_cas_1311353059221188438__1_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_conv2d_multiply_subtract_add_add_cast_fixed_point_multiply_add_clip_cas_1311353059221188438__1_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 11, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_conv2d_multiply_subtract_add_add_cast_fixed_point_multiply_add_clip_cas_1311353059221188438__2(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[6];
  void* stack_tcode = stack;
  TVMValue stack1[12];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* arg2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg2_code = ((int32_t*)arg_type_ids)[(2)];
  void* arg3 = (((TVMValue*)args)[3].v_handle);
  int32_t arg3_code = ((int32_t*)arg_type_ids)[(3)];
  void* arg4 = (((TVMValue*)args)[4].v_handle);
  int32_t arg4_code = ((int32_t*)arg_type_ids)[(4)];
  void* arg5 = (((TVMValue*)args)[5].v_handle);
  int32_t arg5_code = ((int32_t*)arg_type_ids)[(5)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* placeholder1 = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg2)[0].data);
  void* arg2_shape = (((DLTensor*)arg2)[0].shape);
  void* arg2_strides = (((DLTensor*)arg2)[0].strides);
  void* placeholder3 = (((DLTensor*)arg3)[0].data);
  void* arg3_shape = (((DLTensor*)arg3)[0].shape);
  void* arg3_strides = (((DLTensor*)arg3)[0].strides);
  void* placeholder4 = (((DLTensor*)arg4)[0].data);
  void* arg4_shape = (((DLTensor*)arg4)[0].shape);
  void* arg4_strides = (((DLTensor*)arg4)[0].strides);
  void* T_cast = (((DLTensor*)arg5)[0].data);
  void* arg5_shape = (((DLTensor*)arg5)[0].shape);
  void* arg5_strides = (((DLTensor*)arg5)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  if (!(arg2_strides == NULL)) {
  }
  if (!(arg3_strides == NULL)) {
  }
  if (!(arg4_strides == NULL)) {
  }
  if (!(arg5_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder1;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_handle) = T_cast;
  ((int32_t*)stack_tcode)[(2)] = 3;
  (((TVMValue*)stack_value)[3].v_handle) = placeholder3;
  ((int32_t*)stack_tcode)[(3)] = 3;
  (((TVMValue*)stack_value)[4].v_handle) = placeholder4;
  ((int32_t*)stack_tcode)[(4)] = 3;
  (((TVMValue*)stack_value)[5].v_handle) = placeholder2;
  ((int32_t*)stack_tcode)[(5)] = 3;
  (((TVMValue*)stack_value)[6].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(6)] = 0;
  (((TVMValue*)stack_value)[7].v_int64) = ((int64_t)1);
  ((int32_t*)stack_tcode)[(7)] = 0;
  (((TVMValue*)stack_value)[8].v_int64) = ((int64_t)69);
  ((int32_t*)stack_tcode)[(8)] = 0;
  (((TVMValue*)stack_value)[9].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(9)] = 0;
  (((TVMValue*)stack_value)[10].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(10)] = 0;
  if (fused_nn_conv2d_multiply_subtract_add_add_cast_fixed_point_multiply_add_clip_cas_1311353059221188438__2_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_conv2d_multiply_subtract_add_add_cast_fixed_point_multiply_add_clip_cas_1311353059221188438__2_kernel0", &fused_nn_conv2d_multiply_subtract_add_add_cast_fixed_point_multiply_add_clip_cas_1311353059221188438__2_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_conv2d_multiply_subtract_add_add_cast_fixed_point_multiply_add_clip_cas_1311353059221188438__2_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 11, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_12(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[6];
  void* stack_tcode = stack;
  TVMValue stack1[11];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* arg2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg2_code = ((int32_t*)arg_type_ids)[(2)];
  void* arg3 = (((TVMValue*)args)[3].v_handle);
  int32_t arg3_code = ((int32_t*)arg_type_ids)[(3)];
  void* arg4 = (((TVMValue*)args)[4].v_handle);
  int32_t arg4_code = ((int32_t*)arg_type_ids)[(4)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* placeholder1 = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg2)[0].data);
  void* arg2_shape = (((DLTensor*)arg2)[0].shape);
  void* arg2_strides = (((DLTensor*)arg2)[0].strides);
  void* placeholder3 = (((DLTensor*)arg3)[0].data);
  void* arg3_shape = (((DLTensor*)arg3)[0].shape);
  void* arg3_strides = (((DLTensor*)arg3)[0].strides);
  void* T_cast = (((DLTensor*)arg4)[0].data);
  void* arg4_shape = (((DLTensor*)arg4)[0].shape);
  void* arg4_strides = (((DLTensor*)arg4)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  if (!(arg2_strides == NULL)) {
  }
  if (!(arg3_strides == NULL)) {
  }
  if (!(arg4_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder1;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_handle) = T_cast;
  ((int32_t*)stack_tcode)[(2)] = 3;
  (((TVMValue*)stack_value)[3].v_handle) = placeholder3;
  ((int32_t*)stack_tcode)[(3)] = 3;
  (((TVMValue*)stack_value)[4].v_handle) = placeholder2;
  ((int32_t*)stack_tcode)[(4)] = 3;
  (((TVMValue*)stack_value)[5].v_int64) = ((int64_t)100);
  ((int32_t*)stack_tcode)[(5)] = 0;
  (((TVMValue*)stack_value)[6].v_int64) = ((int64_t)1);
  ((int32_t*)stack_tcode)[(6)] = 0;
  (((TVMValue*)stack_value)[7].v_int64) = ((int64_t)96);
  ((int32_t*)stack_tcode)[(7)] = 0;
  (((TVMValue*)stack_value)[8].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(8)] = 0;
  (((TVMValue*)stack_value)[9].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(9)] = 0;
  if (fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_12_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_12_kernel0", &fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_12_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_conv2d_multiply_subtract_add_cast_fixed_point_multiply_clip_cast_12_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 10, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_2(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[4];
  void* stack_tcode = stack;
  TVMValue stack1[8];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* arg2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg2_code = ((int32_t*)arg_type_ids)[(2)];
  void* arg3 = (((TVMValue*)args)[3].v_handle);
  int32_t arg3_code = ((int32_t*)arg_type_ids)[(3)];
  void* arg4 = (((TVMValue*)args)[4].v_handle);
  int32_t arg4_code = ((int32_t*)arg_type_ids)[(4)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* placeholder1 = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg2)[0].data);
  void* arg2_shape = (((DLTensor*)arg2)[0].shape);
  void* arg2_strides = (((DLTensor*)arg2)[0].strides);
  void* placeholder3 = (((DLTensor*)arg3)[0].data);
  void* arg3_shape = (((DLTensor*)arg3)[0].shape);
  void* arg3_strides = (((DLTensor*)arg3)[0].strides);
  void* T_cast = (((DLTensor*)arg4)[0].data);
  void* arg4_shape = (((DLTensor*)arg4)[0].shape);
  void* arg4_strides = (((DLTensor*)arg4)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  if (!(arg2_strides == NULL)) {
  }
  if (!(arg3_strides == NULL)) {
  }
  if (!(arg4_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder1;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_handle) = T_cast;
  ((int32_t*)stack_tcode)[(2)] = 3;
  (((TVMValue*)stack_value)[3].v_handle) = placeholder3;
  ((int32_t*)stack_tcode)[(3)] = 3;
  (((TVMValue*)stack_value)[4].v_handle) = placeholder2;
  ((int32_t*)stack_tcode)[(4)] = 3;
  (((TVMValue*)stack_value)[5].v_int64) = ((int64_t)100);
  ((int32_t*)stack_tcode)[(5)] = 0;
  (((TVMValue*)stack_value)[6].v_int64) = ((int64_t)384);
  ((int32_t*)stack_tcode)[(6)] = 0;
  if (fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_2_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_2_kernel0", &fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_2_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_conv2d_subtract_add_cast_fixed_point_multiply_clip_cast_2_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 7, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_conv2d_multiply_subtract_add_add_cast_fixed_point_multiply_add_clip_cas_2927425864328527930_(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[6];
  void* stack_tcode = stack;
  TVMValue stack1[12];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* arg2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg2_code = ((int32_t*)arg_type_ids)[(2)];
  void* arg3 = (((TVMValue*)args)[3].v_handle);
  int32_t arg3_code = ((int32_t*)arg_type_ids)[(3)];
  void* arg4 = (((TVMValue*)args)[4].v_handle);
  int32_t arg4_code = ((int32_t*)arg_type_ids)[(4)];
  void* arg5 = (((TVMValue*)args)[5].v_handle);
  int32_t arg5_code = ((int32_t*)arg_type_ids)[(5)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* placeholder1 = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg2)[0].data);
  void* arg2_shape = (((DLTensor*)arg2)[0].shape);
  void* arg2_strides = (((DLTensor*)arg2)[0].strides);
  void* placeholder3 = (((DLTensor*)arg3)[0].data);
  void* arg3_shape = (((DLTensor*)arg3)[0].shape);
  void* arg3_strides = (((DLTensor*)arg3)[0].strides);
  void* placeholder4 = (((DLTensor*)arg4)[0].data);
  void* arg4_shape = (((DLTensor*)arg4)[0].shape);
  void* arg4_strides = (((DLTensor*)arg4)[0].strides);
  void* compute = (((DLTensor*)arg5)[0].data);
  void* arg5_shape = (((DLTensor*)arg5)[0].shape);
  void* arg5_strides = (((DLTensor*)arg5)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  if (!(arg2_strides == NULL)) {
  }
  if (!(arg3_strides == NULL)) {
  }
  if (!(arg4_strides == NULL)) {
  }
  if (!(arg5_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder1;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_handle) = compute;
  ((int32_t*)stack_tcode)[(2)] = 3;
  (((TVMValue*)stack_value)[3].v_handle) = placeholder3;
  ((int32_t*)stack_tcode)[(3)] = 3;
  (((TVMValue*)stack_value)[4].v_handle) = placeholder4;
  ((int32_t*)stack_tcode)[(4)] = 3;
  (((TVMValue*)stack_value)[5].v_handle) = placeholder2;
  ((int32_t*)stack_tcode)[(5)] = 3;
  (((TVMValue*)stack_value)[6].v_int64) = ((int64_t)25);
  ((int32_t*)stack_tcode)[(6)] = 0;
  (((TVMValue*)stack_value)[7].v_int64) = ((int64_t)1);
  ((int32_t*)stack_tcode)[(7)] = 0;
  (((TVMValue*)stack_value)[8].v_int64) = ((int64_t)12);
  ((int32_t*)stack_tcode)[(8)] = 0;
  (((TVMValue*)stack_value)[9].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(9)] = 0;
  (((TVMValue*)stack_value)[10].v_int64) = ((int64_t)4);
  ((int32_t*)stack_tcode)[(10)] = 0;
  if (fused_nn_conv2d_multiply_subtract_add_add_cast_fixed_point_multiply_add_clip_cas_2927425864328527930__kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_conv2d_multiply_subtract_add_add_cast_fixed_point_multiply_add_clip_cas_2927425864328527930__kernel0", &fused_nn_conv2d_multiply_subtract_add_add_cast_fixed_point_multiply_add_clip_cas_2927425864328527930__kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_conv2d_multiply_subtract_add_add_cast_fixed_point_multiply_add_clip_cas_2927425864328527930__kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 11, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_avg_pool2d_multiply_1(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[3];
  void* stack_tcode = stack;
  TVMValue stack1[5];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* T_multiply = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = T_multiply;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_int64) = ((int64_t)8438);
  ((int32_t*)stack_tcode)[(2)] = 0;
  (((TVMValue*)stack_value)[3].v_int64) = ((int64_t)64);
  ((int32_t*)stack_tcode)[(3)] = 0;
  if (fused_nn_avg_pool2d_multiply_1_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_avg_pool2d_multiply_1_kernel0", &fused_nn_avg_pool2d_multiply_1_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_avg_pool2d_multiply_1_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 4, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_cast_sum_6(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[3];
  void* stack_tcode = stack;
  TVMValue stack1[6];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* T_cast_red = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = T_cast_red;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_int64) = ((int64_t)12);
  ((int32_t*)stack_tcode)[(2)] = 0;
  (((TVMValue*)stack_value)[3].v_int64) = ((int64_t)32);
  ((int32_t*)stack_tcode)[(3)] = 0;
  (((TVMValue*)stack_value)[4].v_int64) = ((int64_t)32);
  ((int32_t*)stack_tcode)[(4)] = 0;
  if (fused_cast_sum_6_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_cast_sum_6_kernel0", &fused_cast_sum_6_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_cast_sum_6_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 5, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_nn_avg_pool2d_multiply_2(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[3];
  void* stack_tcode = stack;
  TVMValue stack1[5];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* T_multiply = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = placeholder;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = T_multiply;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_int64) = ((int64_t)4219);
  ((int32_t*)stack_tcode)[(2)] = 0;
  (((TVMValue*)stack_value)[3].v_int64) = ((int64_t)64);
  ((int32_t*)stack_tcode)[(3)] = 0;
  if (fused_nn_avg_pool2d_multiply_2_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_nn_avg_pool2d_multiply_2_kernel0", &fused_nn_avg_pool2d_multiply_2_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_nn_avg_pool2d_multiply_2_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 4, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t fused_reshape_7(void* args, void* arg_type_ids, int32_t num_args, void* out_ret_value, void* out_ret_tcode, void* resource_handle) {
  TVMValue stack[3];
  void* stack_tcode = stack;
  TVMValue stack1[5];
  void* stack_value = stack1;
  void* arg0 = (((TVMValue*)args)[0].v_handle);
  int32_t arg0_code = ((int32_t*)arg_type_ids)[(0)];
  void* arg1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg1_code = ((int32_t*)arg_type_ids)[(1)];
  void* arg2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg2_code = ((int32_t*)arg_type_ids)[(2)];
  void* arg3 = (((TVMValue*)args)[3].v_handle);
  int32_t arg3_code = ((int32_t*)arg_type_ids)[(3)];
  void* arg4 = (((TVMValue*)args)[4].v_handle);
  int32_t arg4_code = ((int32_t*)arg_type_ids)[(4)];
  void* arg5 = (((TVMValue*)args)[5].v_handle);
  int32_t arg5_code = ((int32_t*)arg_type_ids)[(5)];
  void* arg6 = (((TVMValue*)args)[6].v_handle);
  int32_t arg6_code = ((int32_t*)arg_type_ids)[(6)];
  void* placeholder = (((DLTensor*)arg0)[0].data);
  void* arg0_shape = (((DLTensor*)arg0)[0].shape);
  void* arg0_strides = (((DLTensor*)arg0)[0].strides);
  int32_t dev_id = (((DLTensor*)arg0)[0].ctx.device_id);
  void* placeholder1 = (((DLTensor*)arg1)[0].data);
  void* arg1_shape = (((DLTensor*)arg1)[0].shape);
  void* arg1_strides = (((DLTensor*)arg1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg2)[0].data);
  void* arg2_shape = (((DLTensor*)arg2)[0].shape);
  void* arg2_strides = (((DLTensor*)arg2)[0].strides);
  void* placeholder3 = (((DLTensor*)arg3)[0].data);
  void* arg3_shape = (((DLTensor*)arg3)[0].shape);
  void* arg3_strides = (((DLTensor*)arg3)[0].strides);
  void* placeholder4 = (((DLTensor*)arg4)[0].data);
  void* arg4_shape = (((DLTensor*)arg4)[0].shape);
  void* arg4_strides = (((DLTensor*)arg4)[0].strides);
  void* placeholder5 = (((DLTensor*)arg5)[0].data);
  void* arg5_shape = (((DLTensor*)arg5)[0].shape);
  void* arg5_strides = (((DLTensor*)arg5)[0].strides);
  void* T_reshape = (((DLTensor*)arg6)[0].data);
  void* arg6_shape = (((DLTensor*)arg6)[0].shape);
  void* arg6_strides = (((DLTensor*)arg6)[0].strides);
  if (!(arg0_strides == NULL)) {
  }
  if (!(arg1_strides == NULL)) {
  }
  if (!(arg2_strides == NULL)) {
  }
  if (!(arg3_strides == NULL)) {
  }
  if (!(arg4_strides == NULL)) {
  }
  if (!(arg5_strides == NULL)) {
  }
  if (!(arg6_strides == NULL)) {
  }
  (((TVMValue*)stack_value)[0].v_int64) = ((int64_t)2);
  ((int32_t*)stack_tcode)[(0)] = 0;
  (((TVMValue*)stack_value)[1].v_int64) = ((int64_t)dev_id);
  ((int32_t*)stack_tcode)[(1)] = 0;
  if (__tvm_set_device_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "__tvm_set_device", &__tvm_set_device_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val;
  int ret_type_code;
  if (TVMFuncCall(__tvm_set_device_packed, (TVMValue*) stack_value, (int*) stack_tcode, 2, &ret_val, &ret_type_code) != 0) {
    return -1;
  }
  (((TVMValue*)stack_value)[0].v_handle) = T_reshape;
  ((int32_t*)stack_tcode)[(0)] = 3;
  (((TVMValue*)stack_value)[1].v_handle) = placeholder1;
  ((int32_t*)stack_tcode)[(1)] = 3;
  (((TVMValue*)stack_value)[2].v_int64) = ((int64_t)1);
  ((int32_t*)stack_tcode)[(2)] = 0;
  (((TVMValue*)stack_value)[3].v_int64) = ((int64_t)64);
  ((int32_t*)stack_tcode)[(3)] = 0;
  if (fused_reshape_7_kernel0_packed == NULL) {
    if (TVMBackendGetFuncFromEnv(__tvm_module_ctx, "fused_reshape_7_kernel0", &fused_reshape_7_kernel0_packed) != 0) {
      return -1;
    }
  }
  TVMValue ret_val1;
  int ret_type_code1;
  if (TVMFuncCall(fused_reshape_7_kernel0_packed, (TVMValue*) stack_value, (int*) stack_tcode, 4, &ret_val1, &ret_type_code1) != 0) {
    return -1;
  }
  return 0;
}


