cmake_minimum_required(VERSION 3.16)
project(FinishTask)

set(CMAKE_CXX_STANDARD 17)

add_executable(FinishTask main.cpp Options.h Options.cpp Instructions.h Solving.h Instructions.cpp Solving.cpp)