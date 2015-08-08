cmake_minimum_required(VERSION 3.2)
project(minor3_5)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(minor3_5 ${SOURCE_FILES} Truck.cpp Truck.h Package.cpp Package.h Letter.cpp Letter.h PackageFactory.h PackageFactory.cpp NullPackage.cpp NullPackage.h )