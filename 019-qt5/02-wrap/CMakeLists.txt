cmake_minimum_required (VERSION 2.8.12)

# Project
project(019-qt-02)

# Directories
set(example_BIN_DIR bin)
set(example_INC_DIR include)
set(example_LIB_DIR lib)
set(example_SRC_DIR src)
set(example_UI_DIR  ui)

# Find Qt
find_package(Qt5 COMPONENTS Widgets REQUIRED)

# Library files
set(library_SOURCES ${example_SRC_DIR}/mainwindow.cpp)
set(library_HEADERS ${example_INC_DIR}/mainwindow.h)
set(library_UI ${example_UI_DIR}/mainwindow.ui)
set(executable_SOURCES ${example_SRC_DIR}/main.cpp)

# Wraps
qt5_wrap_cpp(library_HEADERS_MOC ${library_HEADERS})
qt5_wrap_ui(library_UI_MOC ${library_UI})

# Library
add_library(library STATIC 
    ${library_SOURCES}
    ${library_HEADERS_MOC}
    ${library_UI_MOC}
)

# Include directories
target_include_directories(library PUBLIC 
  ${CMAKE_CURRENT_SOURCE_DIR}/${example_INC_DIR}
  ${CMAKE_CURRENT_BINARY_DIR}
)

# Links
target_link_libraries(library Qt5::Widgets)

# Executable
add_executable(executable ${executable_SOURCES})

# Include directories
target_include_directories(library PUBLIC 
  ${CMAKE_CURRENT_SOURCE_DIR}/${example_INC_DIR}
)

# Links
target_link_libraries(executable library)

# Install
install(TARGETS executable DESTINATION ${example_BIN_DIR})
#install(TARGETS library DESTINATION ${example_LIB_DIR})
#install(FILES ${library_HEADERS} DESTINATION ${example_INC_DIR})
