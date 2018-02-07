cmake_minimum_required(VERSION 2.8)

# Project
project(018-protobuf)

# Find protobuf
find_package(Protobuf REQUIRED)

# Check protobuf
if(PROTOBUF_FOUND)
  message("Protobuf Found.")
else()
  message(FATAL_ERROR "Cannot find Protobuf!")
endif()

# Generate files
PROTOBUF_GENERATE_CPP(PROTO_SRCS PROTO_HDRS AddressBook.proto)

# Executable
add_executable(executable
  main.cpp
  ${PROTO_SRCS}
  ${PROTO_HDRS}
)

# Include directories
target_include_directories(executable
  PUBLIC
  ${PROTOBUF_INCLUDE_DIRS}
  ${CMAKE_CURRENT_BINARY_DIR}
)

# Link libraries
target_link_libraries(executable
  PUBLIC
  ${PROTOBUF_LIBRARIES}
)

# Install
install(TARGETS executable DESTINATION bin)
