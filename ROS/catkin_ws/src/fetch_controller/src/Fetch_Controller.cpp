#include "Fetch_Controller.hpp"

Fetch_Controller::Fetch_Controller(ros::NodeHandle &nh)
{
    nh_ = nh;

    //TODO: initialize a subscriber that is set to the channel "/base_scan"
    //TODO: initialize a publisher that is set to the channel "/cmd_vel"


}

void Fetch_Controller::Laser_Scan_Callback(const sensor_msgs::LaserScan::ConstPtr &msg_laser_scan)
{
    /*TODO: 
    Given the incoming laser scan message, find the minimium distance of the front facing scans
    Hint: Consider scans 241 - 421 instead of 0-661
    If the minimum scan in this direction is greater than 1m, drive forward. 
    Otherwise, turn left. 
    */

}
