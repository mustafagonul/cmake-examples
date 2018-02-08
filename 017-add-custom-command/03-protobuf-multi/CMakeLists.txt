cmake_minimum_required(VERSION 2.8)

# Project
project(017-add-custom-command)

# Directories
set(example_BIN_DIR bin)
set(example_INC_DIR include)
set(example_LIB_DIR lib)
set(example_SRC_DIR src)
set(example_GEN_DIR gen)

# Directory for generated files
set(GENERATED_FILES_DIR ${CMAKE_CURRENT_BINARY_DIR}/${example_GEN_DIR})
file(MAKE_DIRECTORY ${GENERATED_FILES_DIR})

set(protos user task)

# protoc
find_program(protoc_APP protoc)
if(protoc_APP)
  message(STATUS "Protoc found at ${protoc_APP}")
else()
  message(FATAL_ERROR "Protoc not found!")
endif()

# Protocol
foreach(proto ${protos})
  set(proto_EXT    .proto)
  set(proto_PATH   ${CMAKE_CURRENT_SOURCE_DIR}/${example_SRC_DIR}/${proto}${proto_EXT})
  set(proto_HEADER ${GENERATED_FILES_DIR}/${proto}.pb.h)
  set(proto_SOURCE ${GENERATED_FILES_DIR}/${proto}.pb.cc)

  # Custom command
  add_custom_command(
    OUTPUT ${proto_SOURCE} ${proto_HEADER}
    COMMAND ${protoc_APP} ARGS -I=${CMAKE_CURRENT_SOURCE_DIR}/${example_SRC_DIR} --cpp_out=${GENERATED_FILES_DIR} ${proto_PATH}
    DEPENDS ${proto_PATH}
    COMMENT "Generating code: ${proto}"
  )

  #
  list(APPEND protos_HEADERS ${proto_HEADER})
  list(APPEND protos_SOURCES ${proto_SOURCE})
endforeach()

add_custom_target(generate_protos ALL DEPENDS ${protos_SOURCES})

# Add library to project
add_library(library STATIC ${protos_SOURCES})

# Include directories
target_include_directories(library PUBLIC ${GENERATED_FILES_DIR})

# Install
install(TARGETS library DESTINATION ${example_LIB_DIR})
install(FILES ${protos_HEADERS} DESTINATION ${example_INC_DIR})
