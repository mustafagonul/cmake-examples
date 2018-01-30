cmake_minimum_required(VERSION 2.8)

# Project
project(014-executable)

# Executable source files
set(executable_SOURCES src/main.cpp)

# Executable
add_executable(executable ${executable_SOURCES})


# This will cause the include directories for that target to be added to this project
target_link_libraries(executable library1 library2)

# Install
install(TARGETS executable DESTINATION bin)
