#!/bin/bash

rm -Rf build
rm -Rf install

mkdir build
mkdir install

cd build

# Default: /usr/local
# cmake ..

# Custom: ../install
cmake ..                                   -DCMAKE_INSTALL_PREFIX=../install
cmake .. -DCMAKE_BUILD_TYPE=Debug          -DCMAKE_INSTALL_PREFIX=../install
cmake .. -DCMAKE_BUILD_TYPE=Release        -DCMAKE_INSTALL_PREFIX=../install
cmake .. -DCMAKE_BUILD_TYPE=MinSizeRel     -DCMAKE_INSTALL_PREFIX=../install
cmake .. -DCMAKE_BUILD_TYPE=RelWithDebInfo -DCMAKE_INSTALL_PREFIX=../install
cmake .. -DCMAKE_BUILD_TYPE=foo            -DCMAKE_INSTALL_PREFIX=../install

## Verbose on
# cmake .. -DCMAKE_INSTALL_PREFIX=../install -DCMAKE_VERBOSE_MAKEFILE:BOOL=ON
# make VERBOSE=1

# make
# make install