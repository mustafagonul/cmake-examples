#!/bin/bash

rm -Rf build
rm -Rf install

mkdir build
mkdir install

cd build

# Default: /usr/local
# CMAKE_C_COMPILER
# CMAKE_CXX_COMPILER
# CMAKE_LINKER
# cmake .. -DCMAKE_C_COMPILER=clang -DCMAKE_CXX_COMPILER=clang++

# Custom: ../install
cmake .. -DCMAKE_INSTALL_PREFIX=../install -DCMAKE_C_COMPILER=clang -DCMAKE_CXX_COMPILER=clang++

## Verbose on
# cmake .. -DCMAKE_INSTALL_PREFIX=../install -DCMAKE_C_COMPILER=clang -DCMAKE_CXX_COMPILER=clang++ -DCMAKE_VERBOSE_MAKEFILE:BOOL=ON
make VERBOSE=1

# make
make install