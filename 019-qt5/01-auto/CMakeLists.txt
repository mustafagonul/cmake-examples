cmake_minimum_required(VERSION 3.0.2)

# Project
project(019-qt-01)

# Find Qt
find_package(Qt5 COMPONENTS Widgets REQUIRED)

# Qt Tools
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# Library
add_library(mainwindow STATIC mainwindow.cpp)

# Links
target_link_libraries(mainwindow Qt5::Widgets)

# Executable
add_executable(executable main.cpp)

# Links
target_link_libraries(executable mainwindow)

# Install
install(TARGETS executable DESTINATION bin)


