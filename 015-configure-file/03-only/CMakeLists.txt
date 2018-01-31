cmake_minimum_required(VERSION 2.8)

# Project
project(015-configure-file-03)

# Version
set(example_VERSION_MAJOR 1)
set(example_VERSION_MINOR 2)
set(example_VERSION_PATCH 3)
set(example_VERSION "${example_VERSION_MAJOR}.${example_VERSION_MINOR}.${example_VERSION_PATCH}")

# Version File
configure_file(include/version.h.in ${CMAKE_CURRENT_BINARY_DIR}/version.h @ONLY)

# Executable
add_executable(executable src/main.cpp)

# Include Directories
target_include_directories(executable PUBLIC ${CMAKE_CURRENT_BINARY_DIR})

# Install
install(TARGETS executable DESTINATION bin)
