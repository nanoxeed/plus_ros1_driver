cmake_minimum_required(VERSION 3.16)

project(plus_ros1_driver)

find_package(catkin REQUIRED
  COMPONENTS roscpp std_msgs sensor_msgs)

catkin_package(
  CATKIN_DEPENDS std_msgs sensor_msgs
)

include_directories(
  ${catkin_INCLUDE_DIRS}
)

add_executable(plus_m5base src/m5_ros.cpp src/m5base_controller.cpp src/motor_control.cpp)
target_link_libraries(plus_m5base
  ${catkin_LIBRARIES}
)
