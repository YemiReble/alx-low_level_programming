#!/bin/bash
wget -P /tmp https://github.com/YemiReble/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libgigamill.so
export LD_PRELOAD=/tmp/libgigamill.so
