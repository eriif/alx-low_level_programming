#!/bin/bash
wget -P .. https://raw.githubusercontent.com/VicvekSr9485/alx-low_level_programming/main/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD="$PWD/../libgiga.so"
