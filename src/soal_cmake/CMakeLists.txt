cmake_minimum_required(VERSION 3.10.0)
project(robot VERSION 0.1.0 LANGUAGES C CXX)

include_directories(include())

add_executable(robot 
main.cpp
src/robot.cpp
src/robotair.cpp
)

message(STATUS "Install prefix before set: ${CMAKE_INSTALL_PREFIX}")
set(CMAKE_INSTALL_PREFIX ${CMAKE_CURRENT_SOURCE_DIR})
message(STATUS "Install prefix after set: ${CMAKE_INSTALL_PREFIX}")

install(TARGETS robot
    DESTINATION bin
)

