cmake_minimum_required(VERSION 3.8)
project(templateSpecialization)

set(CMAKE_CXX_STANDARD 11)

#set(SOURCE_FILES main.cpp)
set(SOURCE_FILES accumulator.cpp Person.h accum.h Resource.h Resource.cpp)
add_executable(templateSpecialization ${SOURCE_FILES})