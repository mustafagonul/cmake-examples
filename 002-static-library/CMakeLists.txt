cmake_minimum_required(VERSION 2.8)

# Project
project(002-static-library)

# Directories
set(library_BIN_DIR bin)
set(library_INC_DIR include)
set(library_LIB_DIR lib)
set(library_SRC_DIR src)

# Library files
set(library_SOURCES ${library_SRC_DIR}/library.cpp)
set(library_HEADERS ${library_INC_DIR}/library.h)

# Add library to project
add_library(library STATIC ${library_SOURCES})

# Include directories
target_include_directories(library PUBLIC ${PROJECT_SOURCE_DIR}/${library_INC_DIR})

# Install
install(TARGETS library DESTINATION ${library_BIN_DIR})
install(FILES ${library_HEADERS} DESTINATION ${library_INC_DIR})
