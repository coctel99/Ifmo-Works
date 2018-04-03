cmake_minimum_required(VERSION 3.9)
project(LabWork4)

set(CMAKE_CXX_STANDARD 11)

include_directories(/usr/local/include/libxml++-2.6/)
include_directories(/usr/local/include/glibmm-2.4/)
include_directories(/usr/local/include/glibmm-2.4/glibmm/)

add_executable(LabWork4 main.cpp XMLParser.cpp XMLParser.h)