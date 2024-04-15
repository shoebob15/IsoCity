cmake_minimum_required(VERSION 3.7)

project(IsoCity)

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

add_executable(IsoCity src/main.cpp)
target_link_libraries(IsoCity ${SDL2_LIBRARIES})
