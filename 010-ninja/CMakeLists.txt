cmake_minimum_required(VERSION 2.8)

# Project
project(010-ninja)

# Executable source files
set(executable_SOURCES src/main.cpp)

# Executable
add_executable(executable ${executable_SOURCES})

# Install
install(TARGETS executable DESTINATION bin)
