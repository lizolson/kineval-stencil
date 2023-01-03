#include <string>
#include <iostream>
#include <ros/ros.h>
#include "Laser_Scan_Handler.hpp"

int main(int argc, char *argv[])
{
    /* Initialize ROS Node */
    ros::init(argc, argv, "laser_scan_node"); // node name
    ros::NodeHandle nh("~");

    /* Initialize class */
    Laser_Scan_Handler scan_handler(nh);

    /* ROS spin for updating callback*/
    ros::spin();

    return 0;
}