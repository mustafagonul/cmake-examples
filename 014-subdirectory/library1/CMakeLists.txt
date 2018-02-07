cmake_minimum_required(VERSION 2.8)

# Project
project(014-static-library)

# Directories
set(example_BIN_DIR bin)
set(example_INC_DIR include)
set(example_LIB_DIR lib)
set(example_SRC_DIR src)

# Library files
set(library1_SOURCES ${example_SRC_DIR}/library1.cpp)
set(library1_HEADERS ${example_INC_DIR}/library1.h)

# Add library to project
add_library(library1 STATIC ${library1_SOURCES})

# Include directories
target_include_directories(library1 PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/${example_INC_DIR})

# Install
install(TARGETS library1 DESTINATION ${example_LIB_DIR})
install(FILES ${library1_HEADERS} DESTINATION ${example_INC_DIR})
