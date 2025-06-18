cmake_minimum_required(VERSION 3.30)
project(cgpa_calculator)

set(CMAKE_CXX_STANDARD 20)

add_executable(cgpa_calculator src/main.cpp
        src/Course.cpp
        src/Course.h
        src/CGPACalculator.cpp
        src/CGPACalculator.h)
