#!/bin/bash
wget -P .. https://raw.githubusercontent.com/eriif/alx-low_level_programming/main/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD=/tmp/libgiga.so
