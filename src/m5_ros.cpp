#include <ros/ros.h>
#include "m5base_controller.hpp"


int main(int argc, char** argv) {
    ros::init(argc, argv, "plus_m5base");
    ROS_INFO("Start plus_m5base!");
    M5baseController m5base_controller;
    ros::spin();
    return 0;
}
