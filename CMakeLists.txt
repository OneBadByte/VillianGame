cmake_minimum_required(VERSION 3.6)
project(VillianGame)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Character.cpp Character.h Tools.cpp Tools.h Levels.cpp Levels.h)
add_executable(VillianGame ${SOURCE_FILES})