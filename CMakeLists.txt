cmake_minimum_required(VERSION 3.7)

project(IsoCity)

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

# I have no idea if this will work...
# we can also add an inc directory if needed

set(SOURCES
  src/main.cpp
  src/iso.cpp
)

add_executable(IsoCity ${SOURCES})
target_link_libraries(IsoCity ${SDL2_LIBRARIES})
