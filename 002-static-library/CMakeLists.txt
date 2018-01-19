cmake_minimum_required(VERSION 2.8)

project(002-library)

add_library(library library.cpp)

install(TARGETS library DESTINATION lib)
install(FILES library.h DESTINATION include)