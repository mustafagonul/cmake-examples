#!/bin/bash

./build.sh

mpirun -np 2 ./install/bin/executable

