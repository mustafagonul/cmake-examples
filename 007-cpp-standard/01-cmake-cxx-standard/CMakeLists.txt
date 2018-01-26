cmake_minimum_required(VERSION 2.8)

# Project
project(007-cpp-standard-01)

# Set the standard
set(CMAKE_CXX_STANDARD 11)

# Executable source files
set(executable_SOURCES src/main.cpp)

# Executable
add_executable(executable ${executable_SOURCES})

# Install
install(TARGETS executable DESTINATION bin)
