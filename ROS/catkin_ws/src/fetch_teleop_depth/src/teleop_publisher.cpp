#include <ros/ros.h>
#include <geometry_msgs/Twist.h>

#include <stdio.h>
#include <unistd.h>
#include <termios.h>

#include <map>


// Reminder message
const char* msg = R"(
Reading from the keyboard and Publishing to Twist!
---------------------------
Moving around:
        w     
   a         d
        s
CTRL-C to quit
)";

char key(' ');

// For non-blocking keyboard inputs
int getch(void)
{
  int ch;
  struct termios oldt;
  struct termios newt;

  // Store old settings, and copy to new settings
  tcgetattr(STDIN_FILENO, &oldt);
  newt = oldt;

  // Make required changes and apply the settings
  newt.c_lflag &= ~(ICANON | ECHO);
  newt.c_iflag |= IGNBRK;
  newt.c_iflag &= ~(INLCR | ICRNL | IXON | IXOFF);
  newt.c_lflag &= ~(ICANON | ECHO | ECHOK | ECHOE | ECHONL | ISIG | IEXTEN);
  newt.c_cc[VMIN] = 1;
  newt.c_cc[VTIME] = 0;
  tcsetattr(fileno(stdin), TCSANOW, &newt);

  // Get the current character
  ch = getchar();

  // Reapply old settings
  tcsetattr(STDIN_FILENO, TCSANOW, &oldt);

  return ch;
}

int main(int argc, char** argv)
{
  // Init ROS node
  ros::init(argc, argv, "teleop_twist_keyboard");
  ros::NodeHandle nh;

  // TODO: Initialize a publisher that is set to the "cmd_vel" channel



  while(true){
    // TODO: Initialize a message type appropriate for driving the robot's base


    // Get the pressed key
    key = getch();
    if (key == '\x03'){
        break;
    }

    /*TODO: Populate the velocity values of the message based on the user-input on the keyboard.  
    w-forward
    d-backward
    a-turn left
    d-turn right
    
    hint: you can now compare keyboard strokes with characters directly, e.g. ('a' == key)

    */
    ros::spinOnce();
  }

  return 0;
}
