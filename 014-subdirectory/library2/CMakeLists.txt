cmake_minimum_required(VERSION 2.8)

# Project
project(014-header-only-library)

# Directories
set(example_BIN_DIR bin)
set(example_INC_DIR include)
set(example_SRC_DIR src)

# Library files
set(library2_HEADERS ${example_INC_DIR}/library2.h)

# Add library to project
add_library(library2 INTERFACE)

# Include directories for library
target_include_directories(library2 INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/${example_INC_DIR})

# Install
install(FILES ${library2_HEADERS} DESTINATION ${example_INC_DIR})
