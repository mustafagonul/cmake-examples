cmake_minimum_required(VERSION 2.8)

# Project
project(007-cpp-standard-03)

# Executable source files
set(executable_SOURCES src/main.cpp)

# Compile features of CMake
message("Compile Features: ${CMAKE_CXX_COMPILE_FEATURES}")

# Executable
add_executable(executable ${executable_SOURCES})

# set the C++ standard to the approriate standard for using auto
target_compile_features(executable PUBLIC cxx_std_11)

# Install
install(TARGETS executable DESTINATION bin)
