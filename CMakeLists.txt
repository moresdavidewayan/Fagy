cmake_minimum_required(VERSION 3.26.3)

set(CXX_STANDARD 20)
set(CXX_STANDARD_REQUIRED true)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED true)

project(Fagy)

add_subdirectory(src)

add_executable(fagy src/main.cpp)
