cmake_minimum_required(VERSION 2.8)

# Project
project(004-executable-with-static-library)

# Library
add_library(library library.cpp)
# add_library(library STATIC library.cpp)


# Executable
add_executable(executable main.cpp)
target_link_libraries(executable library)

# Install
install(TARGETS executable DESTINATION bin)
install(TARGETS library DESTINATION lib)
install(FILES library.h DESTINATION include)
