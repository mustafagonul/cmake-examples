#!/bin/bash

rm -Rf build
rm -Rf install

mkdir build
mkdir install

cd build

# Default: /usr/local
# cmake .. -G Ninja

# Custom: ../install
cmake .. -G Ninja -DCMAKE_INSTALL_PREFIX=../install

## Verbose on
# cmake .. --G Ninja DCMAKE_INSTALL_PREFIX=../install -DCMAKE_VERBOSE_MAKEFILE:BOOL=ON

# Ninja
ninja -v
ninja install
