cmake_minimum_required(VERSION 2.8)

# Project
project(005-executable-with-shared-library)

# Directories
set(example_BIN_DIR bin)
set(example_INC_DIR include)
set(example_LIB_DIR lib)
set(example_SRC_DIR src)

# Library files
set(library_SOURCES ${example_SRC_DIR}/library.cpp)
set(library_HEADERS ${example_INC_DIR}/library.h)
set(executable_SOURCES ${example_SRC_DIR}/main.cpp)

# Setting RPATH
# See https://cmake.org/Wiki/CMake_RPATH_handling
set(CMAKE_INSTALL_RPATH ${CMAKE_INSTALL_PREFIX}/${example_LIB_DIR})

# Add library to project
add_library(library SHARED ${library_SOURCES})

# Include directories
target_include_directories(library PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/${example_INC_DIR})

# Add executable to project
add_executable(executable ${executable_SOURCES})

# Linking
target_link_libraries(executable PRIVATE library)

# Install
install(TARGETS executable DESTINATION ${example_BIN_DIR})
install(TARGETS library DESTINATION ${example_LIB_DIR})
install(FILES ${library_HEADERS} DESTINATION ${example_INC_DIR})
