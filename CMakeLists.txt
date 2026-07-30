cmake_minimum_required(VERSION 3.10)
project(DesignPatt CXX)

set(CMAKE_CXX_STANDARD 98)

file(GLOB SOURCES "src/*.cpp")
add_executable(DesignPatt ${SOURCES} main.cpp)
target_include_directories(DesignPatt PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -g")
