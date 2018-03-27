cmake_minimum_required(VERSION 2.8)

# Project
project(011-find-package-01-boost)

# Search Boost
find_package(Boost REQUIRED COMPONENTS filesystem system)

# Check Boost
if(Boost_FOUND)
  message ("Boost Found")
else()
  message (FATAL_ERROR "Cannot Find Boost")
endif()

# Executable source files
set(executable_SOURCES src/main.cpp)
set(executable_DATA src/data)

# Executable
add_executable(executable ${executable_SOURCES})


# Include directories
target_include_directories(executable PRIVATE ${Boost_INCLUDE_DIRS})

# Libraries
target_link_libraries(executable PRIVATE ${Boost_SYSTEM_LIBRARY} ${Boost_FILESYSTEM_LIBRARY})

# Install
install(TARGETS executable DESTINATION bin)
install(FILES ${executable_DATA} DESTINATION bin)
