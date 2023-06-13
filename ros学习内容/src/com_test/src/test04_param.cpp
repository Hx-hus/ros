#include "ros/ros.h"

int main(int argc, char *argv[])
{
    ros::init(argc,argv,"colour");

/*
用句柄1
    ros::NodeHandle nh;
    nh.setParam("/turtlesim/background_b",255);
    nh.setParam("/turtlesim/background_g",255);
    nh.setParam("/turtlesim/background_r",255);
*/
/*用句柄2
    ros::NodeHandle nh("turtlesim");
    nh.setParam("background_b",255);
    nh.setParam("background_g",255);
    nh.setParam("background_r",255);
*/

    ros::param::set("/turtlesim/background_b",255);
    ros::param::set("/turtlesim/background_g",255);
    ros::param::set("/turtlesim/background_r",255);

    
    return 0;
}
