cmake_minimum_required(VERSION 3.0.2)
project(tugas1)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  std_msgs
)

catkin_package(
  INCLUDE_DIRS include
)

include_directories(
  include
  ${catkin_INCLUDE_DIRS}
)

add_executable(commanderNode src/commanderNode.cpp src/commander.cpp)
target_link_libraries(commanderNode ${catkin_LIBRARIES})

add_executable(navigatorNode src/navigatorNode.cpp src/navigator.cpp)
target_link_libraries(navigatorNode ${catkin_LIBRARIES})
