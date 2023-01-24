cmake_minimum_required(VERSION 3.24)
project(htmlgenerator)

set(CMAKE_CXX_STANDARD 20)

add_executable(htmlgenerator main.cpp model/Tag.h model/Tag.cpp)
