#include "Laser_Scan_Handler.hpp"

Laser_Scan_Handler::Laser_Scan_Handler(ros::NodeHandle &nh)
{
    nh_ = nh;
    subscriber_ = nh_.subscribe("/base_scan", 1, &Laser_Scan_Handler::Laser_Scan_Callback, this);

    //TODO: initialize a publisher that is set to the channel "minimum_scan_distance"
}

void Laser_Scan_Handler::Laser_Scan_Callback(const sensor_msgs::LaserScan::ConstPtr &msg_laser_scan)
{
    //TODO: Given the incoming laser scan message, find the minimium distance scan, and publish this to "minimum_scan_distance"


}
