cmake_minimum_required(VERSION 3.29)
project(data_structures)

set(CMAKE_CXX_STANDARD 14)

include_directories(HW1-wet)
include_directories(HW1-wet/herd)
include_directories(HW1-wet/Horses)

add_executable(data_structures
    HW1-wet/herd/herd.h
    HW1-wet/Horses/Horses.h
    HW1-wet/main25a1.cpp
    HW1-wet/plains25a1.cpp
    HW1-wet/plains25a1.h
    HW1-wet/wet1util.h)
