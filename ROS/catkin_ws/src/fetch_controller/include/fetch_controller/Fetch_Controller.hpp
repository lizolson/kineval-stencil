#pragma once

#include <iostream>
#include "ros/ros.h"
#include <sensor_msgs/LaserScan.h>
#include <geometry_msgs/Twist.h>

class Fetch_Controller
{
public:
    Fetch_Controller(ros::NodeHandle &nh);
    
private:
    void Laser_Scan_Callback(const sensor_msgs::LaserScan::ConstPtr &msg_laser_scan);
    ros::NodeHandle nh_;
    ros::Subscriber subscriber_;
    ros::Publisher publisher_;
};
