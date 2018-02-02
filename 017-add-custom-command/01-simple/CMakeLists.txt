cmake_minimum_required(VERSION 2.8)

# Project
project(017-add-custom-command-01)

set(SRC_FILE ${CMAKE_CURRENT_SOURCE_DIR}/src/main)
set(DST_FILE ${CMAKE_CURRENT_BINARY_DIR}/main.cpp)

# Custom command
add_custom_command(
  OUTPUT ${DST_FILE}
  PRE_BUILD
  COMMAND cp ARGS ${SRC_FILE} ${DST_FILE}
  DEPENDS ${SRC_FILE}
  COMMENT "Copying main."
)

# Executable
add_executable(executable ${DST_FILE})

# Install
install(TARGETS executable DESTINATION bin)
