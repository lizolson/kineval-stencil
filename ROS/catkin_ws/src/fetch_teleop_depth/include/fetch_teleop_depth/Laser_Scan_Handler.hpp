#pragma once

#include <iostream>
#include "ros/ros.h"
#include <std_msgs/Float64.h>
#include <sensor_msgs/LaserScan.h>

class Laser_Scan_Handler
{
public:
    Laser_Scan_Handler(ros::NodeHandle &nh);
    
private:
    void Laser_Scan_Callback(const sensor_msgs::LaserScan::ConstPtr &msg_laser_scan);
    ros::NodeHandle nh_;
    ros::Subscriber subscriber_;
    ros::Publisher publisher_;
    std_msgs::Float64 msg_min_dist_;
};
