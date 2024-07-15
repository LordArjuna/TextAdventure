cmake_minimum_required(VERSION 3.10)
project(TextAdventure)

set(CMAKE_CXX_STANDARD 17)

add_executable(TextAdventure main.cpp Room.cpp Game.cpp Inventory.cpp)

# Add include directories
include_directories(${PROJECT_SOURCE_DIR})
