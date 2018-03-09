cmake_minimum_required(VERSION 2.8)

# Project
project(016-execute-process-02)

# Executable source files and files
set(executable_SOURCES src/main.cpp)
set(executable_DATA ${CMAKE_CURRENT_BINARY_DIR}/data)

# Echo
find_program(nproc_APP nproc)
if(nproc_APP)
  message(STATUS "nproc found at ${nproc_APP}")
else()
  message(FATAL_ERROR "nproc not found!")
endif()

# Command
execute_process(
  COMMAND ${nproc_APP}
  OUTPUT_VARIABLE core_count
)

# Message
message(STATUS "Core Count: ${core_count}")

# Executable
add_executable(executable ${executable_SOURCES})

# Install
install(TARGETS executable DESTINATION bin)

