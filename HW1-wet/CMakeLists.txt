cmake_minimum_required(VERSION 3.29)
project(HW1_wet)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(herd)
include_directories(Horses)

add_executable(HW1_wet
    herd/herd.h
    Horses/Horses.h
    main25a1.cpp
    plains25a1.cpp
    plains25a1.h
    wet1util.h)
