#include <ros/ros.h>
#include <sensor_msgs/Joy.h>

class M5baseController
{
private:
    ros::NodeHandle n_;
    ros::Subscriber sub_;
    void joyCallback(const sensor_msgs::Joy& joy);
public:
    M5baseController();
};
