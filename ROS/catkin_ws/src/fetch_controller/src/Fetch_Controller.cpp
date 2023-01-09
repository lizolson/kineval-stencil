#include "Fetch_Controller.hpp"

Fetch_Controller::Fetch_Controller(ros::NodeHandle &nh)
{
    nh_ = nh;

    //TODO: initialize a subscriber that is set to the channel "/base_scan". Set its callback function to be Laser_Scan_Callback
    //TODO: initialize a publisher that is set to the channel "/cmd_vel"


}

void Fetch_Controller::Laser_Scan_Callback(const sensor_msgs::LaserScan::ConstPtr &msg_laser_scan)
{
    /*TODO: 
    Given the incoming laser scan message, find the minimium distance of the front facing scans
    Hint: The laser scan measuring directly in front of the robot will be the scan at the middle of the array laser scans. 
    So for finding the minimum, we will ONLY consider the 100 laser scans in the middle of the array of laser scans. 
    If the minimum scan in this direction is greater than 1m, drive forward. 
    Otherwise, turn left. 
    */

}
