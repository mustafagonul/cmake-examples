cmake_minimum_required(VERSION 2.8)

# Project
project(006-build-type)

# Messages
message(STATUS "CMake Build Type: ${CMAKE_BUILD_TYPE}")
if (NOT CMAKE_BUILD_TYPE)
  message(WARNING "Setting build type to 'Release' as none was specified.")
  set(CMAKE_BUILD_TYPE Release CACHE STRING "Choose the type of build." FORCE)
elseif (${CMAKE_BUILD_TYPE} MATCHES "Release")
  message(STATUS "CXX Compiler Flags Release: ${CMAKE_CXX_FLAGS_RELEASE}")
  message(STATUS "C Compiler Flags Release: ${CMAKE_C_FLAGS_RELEASE}")
elseif(${CMAKE_BUILD_TYPE} MATCHES "Debug")
  message(STATUS "CXX Compiler Flags Debug: ${CMAKE_CXX_FLAGS_DEBUG}")
  message(STATUS "C Compiler Flags Debug: ${CMAKE_C_FLAGS_DEBUG}")
elseif(${CMAKE_BUILD_TYPE} MATCHES "MinSizeRel")
  message(STATUS "CXX Compiler Flags MinSizeRel: ${CMAKE_CXX_FLAGS_MINSIZEREL}")
  message(STATUS "C Compiler Flags MinSizeRel: ${CMAKE_C_FLAGS_MINSIZEREL}")
elseif(${CMAKE_BUILD_TYPE} MATCHES "RelWithDebInfo")
  message(STATUS "CXX Compiler Flags RelWithDebInfo: ${CMAKE_CXX_FLAGS_RELWITHDEBINFO}")
  message(STATUS "C Compiler Flags RelWithDebInfo: ${CMAKE_C_FLAGS_RELWITHDEBINFO}")
else()
  message(STATUS "Other Build Type")
endif()

# Executable source files
set(executable_SOURCES src/main.cpp)

# Executable
add_executable(executable ${executable_SOURCES})

# Install
install(TARGETS executable DESTINATION bin)




