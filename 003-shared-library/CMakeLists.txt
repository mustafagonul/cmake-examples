cmake_minimum_required(VERSION 2.8)

project(003-shared-library)

add_library(library SHARED library.cpp)

install(TARGETS library DESTINATION lib)
install(FILES library.h DESTINATION include)