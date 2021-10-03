cmake_minimum_required(VERSION 3.11)

project(raylib)

set(CMAKE_CXX_STANDARD 17)
find_package(raylib REQUIRED)
include_directories(${RAYLIB_INCLUDE_DIRS})
link_directories(${RAYLIB_LIBRARY_DIRS})

set(CMAKE_EXPORT_COMPILE_COMMANDS 1)
set(axe_game_src 
  src/main.cpp
  src/game.cpp
  src/player.cpp
  src/axe.cpp
  src/boundingbox2d.cpp)

add_executable(axe_game ${axe_game_src})

target_link_libraries(axe_game raylib)
target_compile_definitions(axe_game PRIVATE DEBUG)