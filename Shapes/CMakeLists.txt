cmake_minimum_required(VERSION 4.1)
project(Line)

set(CMAKE_CXX_STANDARD 20)

add_executable(Line main.cpp
        Shape.h
        test.cpp
        Rectangle.h
        Square.h
        Triangle.h
        IsoscelesTriangle.h
        EquilateralTriangle.h)
