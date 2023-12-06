cmake_minimum_required(VERSION 3.26)
project(CarDriver)

set(CMAKE_CXX_STANDARD 17)

add_executable(CarDriver main.cpp
        Driver.h
        Engine.h
        Car.h
)
