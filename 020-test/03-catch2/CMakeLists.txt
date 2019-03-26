cmake_minimum_required(VERSION 2.8)

# Project
project(020-test-03)

#--------------------------------------------------------------------------------------------------
# Directories
set(example_BIN_DIR bin)
set(example_INC_DIR include)
set(example_LIB_DIR lib)
set(example_SRC_DIR src)
set(example_TST_DIR test)

# Library files
set(library_SOURCES ${example_SRC_DIR}/geometry/point.cpp)
set(library_HEADERS ${example_INC_DIR}/geometry/point.hpp)

# Test files
set(library_TESTS
  ${example_TST_DIR}/main.cpp
  ${example_TST_DIR}/environment.cpp
  ${example_TST_DIR}/geometry/point.cpp
)

#--------------------------------------------------------------------------------------------------
# Add library to project
add_library(library STATIC ${library_SOURCES})

# Include directories
target_include_directories(library PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/${example_INC_DIR})

#--------------------------------------------------------------------------------------------------
# Setup testing
enable_testing()
find_package(Catch2 REQUIRED)

# Test executable
add_executable(library-test ${library_TESTS})
target_include_directories(library-test PUBLIC ${CATCH_INCLUDE_DIRS})
target_link_libraries(library-test library) 

# Test directive 
add_test(NAME library-test COMMAND library-test)

#--------------------------------------------------------------------------------------------------
# Install
install(TARGETS library DESTINATION ${example_LIB_DIR})
install(TARGETS library-test DESTINATION ${example_BIN_DIR}) # unnecessary
foreach(library_HEADER ${library_HEADERS})
  get_filename_component(library_HEADER_DIR ${library_HEADER} DIRECTORY)
  install(FILES ${library_HEADER} DESTINATION ${library_HEADER_DIR})
endforeach()

