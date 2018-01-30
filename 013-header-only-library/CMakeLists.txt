cmake_minimum_required(VERSION 2.8)

# Project
project(013-header-only-library)

# Directories
set(example_BIN_DIR bin)
set(example_INC_DIR include)
set(example_SRC_DIR src)

# Library files
set(library_HEADERS ${example_INC_DIR}/library.h)
set(executable_SOURCES ${example_SRC_DIR}/main.cpp)

# Add library to project
add_library(library INTERFACE)

# Include directories for library
target_include_directories(library INTERFACE ${PROJECT_SOURCE_DIR}/${example_INC_DIR})

# Add executable to project
add_executable(executable ${executable_SOURCES})

# Include directories for executable
target_include_directories(executable PUBLIC ${PROJECT_SOURCE_DIR}/${example_INC_DIR})

# Install
install(TARGETS executable DESTINATION ${example_BIN_DIR})
install(FILES ${library_HEADERS} DESTINATION ${example_INC_DIR})
