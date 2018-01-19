cmake_minimum_required(VERSION 2.8)

project(001-executable)

add_executable(executable main.cpp)

install(TARGETS executable DESTINATION bin)