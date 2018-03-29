cmake_minimum_required(VERSION 2.8)

# Project
project(011-find-package-01-mpi)

# Search Boost
find_package(MPI REQUIRED)

# Check MPI 
if(MPI_FOUND)
  message("MPI Found")
else()
  message(FATAL_ERROR "Cannot Find MPI")
endif()

# Executable source files
set(executable_SOURCES src/main.c)

# Executable
add_executable(executable ${executable_SOURCES})

# Libraries
target_link_libraries(executable PRIVATE ${MPI_LIBRARIES})

# Compile Flags
set_target_properties(executable PROPERTIES COMPILE_FLAGS ${MPI_COMPILE_FLAGS})

# Link Flags
set_target_properties(executable PROPERTIES LINK_FLAGS ${MPI_LINK_FLAGS})

# Install
install(TARGETS executable DESTINATION bin)

