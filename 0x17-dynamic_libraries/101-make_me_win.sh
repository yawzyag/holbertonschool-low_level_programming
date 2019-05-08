#!/bin/bash
wget -P /tmp/ https://github.com/yawzyag/holbertonschool-low_level_programming/raw/master/0x17-dynamic_libraries/random_num.so
export LD_PRELOAD=/tmp/random_num.so
