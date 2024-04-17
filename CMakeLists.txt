cmake_minimum_required(VERSION 3.7)

project(IsoCity)

# set module path for cmake
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "cmake")
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_COMPILER clang++)

set(CMAKE_EXE_LINKER_FLAGS "-lSDL2")

# find SDL
find_package(SDL2 REQUIRED)

# include sdl
include_directories(${SDL2_INCLUDE_DIRS})



# I have no idea if this will work...
# we can also add an inc directory if needed

set(SOURCES
  src/main.cpp
  src/iso.cpp
)

add_executable(IsoCity ${SOURCES})
target_link_libraries(IsoCity ${SDL2_LIBRARIES})
