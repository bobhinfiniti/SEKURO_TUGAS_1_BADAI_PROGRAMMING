cmake_minimum_required(VERSION 3.8)
project(tugas1_package)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)

add_executable(chatter src/chatter.cpp)
target_include_directories(chatter PRIVATE include)
ament_target_dependencies(chatter rclcpp std_msgs)

add_executable(display src/display.cpp)
target_include_directories(display PRIVATE include)
ament_target_dependencies(display rclcpp std_msgs)

install(TARGETS 
  chatter
  display
  DESTINATION lib/tugas1_package
)

ament_package()
