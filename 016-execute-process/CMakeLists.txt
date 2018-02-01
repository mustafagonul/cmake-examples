cmake_minimum_required(VERSION 2.8)

# Project
project(016-execute-process)

# Executable source files and files
set(executable_SOURCES src/main.cpp)
set(executable_DATA ${CMAKE_CURRENT_BINARY_DIR}/data)

# Command
execute_process(
  COMMAND echo "Hello World!"
  OUTPUT_FILE ${executable_DATA}
)

# Executable
add_executable(executable ${executable_SOURCES})

# Install
install(TARGETS executable DESTINATION bin)
install(FILES ${executable_DATA} DESTINATION bin)

