cmake_minimum_required(VERSION 3.10)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD_INCLUDE_DIRECTORIES "${CMAKE_SOURCE_DIR}")

include_directories(include)

add_library(ico_vector SHARED src/vector.cpp)

set_target_properties(ico_vector PROPERTIES LIBRARY_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/lib")