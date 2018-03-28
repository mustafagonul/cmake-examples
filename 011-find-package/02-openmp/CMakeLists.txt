cmake_minimum_required(VERSION 2.8)

# Project
project(011-find-package-02-openmp)

# Search OpenMP
find_package(OpenMP)

# Check OpenMP
if (OpenMP_FOUND)
  message("OpenMP Found")
  set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${OpenMP_C_FLAGS}")
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${OpenMP_CXX_FLAGS}")
  set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} ${OpenMP_EXE_LINKER_FLAGS}")
else()
  message(FATAL_ERROR "Cannot Find OpenMP")
endif()

# Executable source files
set(executable_SOURCES src/main.c)

# Executable
add_executable(executable ${executable_SOURCES})

# Include directories
target_include_directories(executable PRIVATE ${OpenMP_INCLUDE_DIRS})

# Install
install(TARGETS executable DESTINATION bin)

