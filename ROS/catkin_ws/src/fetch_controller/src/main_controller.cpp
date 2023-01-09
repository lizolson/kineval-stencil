#include <string>
#include <iostream>
#include <ros/ros.h>
#include "Fetch_Controller.hpp"

int main(int argc, char *argv[])
{
    /* Initialize ROS Node */
    ros::init(argc, argv, "fetch_controller_node"); // node name
    ros::NodeHandle nh("~");

    /* Initialize class */
    Fetch_Controller myController(nh);

    /* ROS spin for updating callback*/
    ros::spin();

    return 0;
}
