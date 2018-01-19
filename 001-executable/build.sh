#!/bin/bash

mkdir build
mkdir install

cd build

# Default: /usr/local
# cmake ..

# Custom: ../install
cmake .. -DCMAKE_INSTALL_PREFIX=../install

make
make install