#include <iostream>
#include "ros/ros.h"

int main(int argc, char **argv) {
  ros::init(argc, argv, "Timer");

  ros::NodeHandle n;
  ros::Rate loop_rate(2);

  while (ros::ok()) {
    ros::Time time = ros::Time::now();
    ROS_INFO_STREAM("Time: " << time);

    ros::spinOnce();
    loop_rate.sleep();
  }

  return 0;
}

