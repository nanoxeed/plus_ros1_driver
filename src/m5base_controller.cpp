#include  <ros/ros.h>
#include  <sensor_msgs/Joy.h>
#include  "m5base_controller.hpp"
#include  "motor_control.hpp"

#define DEF_IP  "192.168.0.162" 

MotorControl  motor_control = MotorControl();

M5baseController::M5baseController() {
    std::string ip;
    n_.param<std::string>("plus_ip", ip, DEF_IP);
    ROS_INFO("Plus IP: %s", ip.c_str());

    strcpy(motor_control.m_ip, ip.c_str());
    sub_ = n_.subscribe("joy", 10, &M5baseController::joyCallback, this);
}

void M5baseController::joyCallback(const sensor_msgs::Joy& joy) {
    motor_control.drive((int)(joy.axes[2] * 63.0), (int)(joy.axes[1] * 63.0));
    ROS_INFO("Joy: %d, %d", (int)(joy.axes[2] * 63.0), (int)(joy.axes[1] *63.0));
}
