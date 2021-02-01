# TVM API "scope_attr" is order-sensitive
* Run <code>python3 test_ssd.py</code> to get your host_code.cc
* Search "fused_vision_multibox_transform_loc" in host_code.cc, you will find ((TVMValue*)stack_value)[6].v_int64 is 30 instead of 64
* You can refer to [multibox.py](https://github.com/aquapapaya/TVM-SSD-multibox-operator/blob/main/multibox.py#L198) for correct order
