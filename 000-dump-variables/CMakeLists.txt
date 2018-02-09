# Reference:
# https://stackoverflow.com/questions/9298278/cmake-print-out-all-accessible-variables-in-a-script

cmake_minimum_required(VERSION 2.8)

get_cmake_property(_variableNames VARIABLES)
foreach (_variableName ${_variableNames})
    message(STATUS "${_variableName}=${${_variableName}}")
endforeach()
