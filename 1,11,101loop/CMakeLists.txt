cmake_minimum_required (VERSION 3.8)
set(CMAKE_CXX_STANDARD 23)  
set(CMAKE_CXX_STANDARD_REQUIRED True)
project (project)

#include_directories(includes)


add_executable(project src/main.cpp)

set_target_properties(project PROPERTIES
RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)
