cmake_minimum_required(VERSION 2.8)

# Project
project(008-compile-flags-01)

# Add compile flag
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DHELLO_WORLD" CACHE STRING "Hello World Define." FORCE)

# Executable source files
set(executable_SOURCES src/main.cpp)

# Executable
add_executable(executable ${executable_SOURCES})

# Install
install(TARGETS executable DESTINATION bin)
