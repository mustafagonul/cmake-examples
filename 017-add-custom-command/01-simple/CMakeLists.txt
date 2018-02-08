cmake_minimum_required(VERSION 2.8)

# Project
project(017-add-custom-command-01)

# Files
set(SRC_FILE ${CMAKE_CURRENT_SOURCE_DIR}/src/main)
set(DST_FILE ${CMAKE_CURRENT_BINARY_DIR}/main.cpp)

# cp
find_program(cp_APP cp)
if(cp_APP)
  message(STATUS "Copy found at ${cp_APP}")
else()
  message(FATAL_ERROR "Copy not found!")
endif()


# Custom command
add_custom_command(
  OUTPUT ${DST_FILE}
  PRE_BUILD
  COMMAND ${cp_APP} ARGS ${SRC_FILE} ${DST_FILE}
  DEPENDS ${SRC_FILE}
  COMMENT "Copying main."
)

# Executable
add_executable(executable ${DST_FILE})

# Install
install(TARGETS executable DESTINATION bin)
