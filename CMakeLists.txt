cmake_minimum_required(VERSION 3.10)
project(DesignPatt CXX)

set(CMAKE_CXX_STANDARD 98)

add_executable(DesignPatt main.cpp car.cpp)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -g")
