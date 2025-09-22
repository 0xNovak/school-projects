cmake_minimum_required (VERSION 4.0)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
project(project)

add_executable(project src/main.cpp)
set_target_properties(project PROPERTIES
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin 
)
