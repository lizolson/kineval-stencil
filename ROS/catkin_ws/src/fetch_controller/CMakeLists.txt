cmake_minimum_required(VERSION 3.0.2)
project(fetch_controller)

## Compile as C++11, supported in ROS Kinetic and newer
add_compile_options(-std=c++11)

## Find catkin macros and libraries
## if COMPONENTS list like find_package(catkin REQUIRED COMPONENTS xyz)
## is used, also find other catkin packages
find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_msgs
  geometry_msgs
  sensor_msgs
)


###################################
## catkin specific configuration ##
###################################
## The catkin_package macro generates cmake config files for your package
## Declare things to be passed to dependent projects
## INCLUDE_DIRS: uncomment this if your package contains header files
## LIBRARIES: libraries you create in this project that dependent projects also need
## CATKIN_DEPENDS: catkin_packages dependent projects also need
## DEPENDS: system dependencies of this project that dependent projects also need

catkin_package(
  INCLUDE_DIRS include
)
###########
## Build ##
###########

include_directories(${catkin_INCLUDE_DIRS})
message(${catkin_INCLUDE_DIRS})

 
#fetch controller executable
add_executable(main_controller
src/Fetch_Controller.cpp  
src/main_controller.cpp)
add_dependencies(main_controller ${catkin_EXPORTED_TARGETS})
target_include_directories(main_controller PUBLIC 
  ${CMAKE_CURRENT_SOURCE_DIR}/include/fetch_controller)
target_link_libraries(main_controller
   ${catkin_LIBRARIES}
 )


