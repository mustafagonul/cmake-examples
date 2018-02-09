#!/bin/bash

cd "$(dirname "$0")"

rm -Rf build

mkdir build

cd build

cmake .. 

cd ..

rm -Rf build

