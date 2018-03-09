cmake_minimum_required(VERSION 2.8)

# Project
project(016-execute-process)

# Executable source files and files
set(executable_SOURCES src/main.cpp)
set(executable_DATA ${CMAKE_CURRENT_BINARY_DIR}/data)

# Echo
find_program(echo_APP echo)
if(echo_APP)
  message(STATUS "Echo found at ${echo_APP}")
else()
  message(FATAL_ERROR "Echo not found!")
endif()

# Command
execute_process(
  COMMAND ${echo_APP} "Hello World!"
  OUTPUT_FILE ${executable_DATA}
)

# Executable
add_executable(executable ${executable_SOURCES})

# Install
install(TARGETS executable DESTINATION bin)
install(FILES ${executable_DATA} DESTINATION bin)

