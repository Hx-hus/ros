#include "ros/ros.h"

int main(int argc, char *argv[])
{
    setlocale(LC_ALL,"");

    ros::init(argc,argv, "hello");

    ROS_INFO("你好ros");

    return 0;
}