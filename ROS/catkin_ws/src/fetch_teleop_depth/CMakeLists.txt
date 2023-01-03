cmake_minimum_required(VERSION 3.0.2)
project(fetch_teleop_depth)

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

##teleop publisher executable
add_executable(teleop_publisher src/teleop_publisher.cpp)
add_dependencies(teleop_publisher ${catkin_EXPORTED_TARGETS})
#target_include_directories(teleop_publisher PUBLIC 
#  ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(teleop_publisher
   ${catkin_LIBRARIES}
 )
 
#scan subscriber executable
add_executable(scan_subscriber 
src/Laser_Scan_Handler.cpp  
src/scan_subscriber.cpp)
add_dependencies(scan_subscriber ${catkin_EXPORTED_TARGETS})
target_include_directories(scan_subscriber PUBLIC 
  ${CMAKE_CURRENT_SOURCE_DIR}/include/fetch_teleop_depth)
target_link_libraries(scan_subscriber
   ${catkin_LIBRARIES}
 )


