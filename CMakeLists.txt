cmake_minimum_required(VERSION 3.10)

project(right_angled_triangle VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(right_angled_triangle main.cpp Point.cpp RightAngledTriangle.cpp)

target_include_directories(right_angled_triangle PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})