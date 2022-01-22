cmake_minimum_required(VERSION 3.20)
project(sdl_hworld)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(SDL)

add_executable(sdl_hworld WIN32 main.cpp)
target_link_libraries(sdl_hworld SDL2::SDL2-static SDL2::SDL2main)