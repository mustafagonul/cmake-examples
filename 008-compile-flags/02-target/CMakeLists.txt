cmake_minimum_required(VERSION 2.8)

# Project
project(008-compile-flags-02)

# Executable source files
set(executable_SOURCES src/main.cpp)

# Executable
add_executable(executable ${executable_SOURCES})

# Definitions
target_compile_definitions(executable PRIVATE HELLO_WORLD)

# Install
install(TARGETS executable DESTINATION bin)
