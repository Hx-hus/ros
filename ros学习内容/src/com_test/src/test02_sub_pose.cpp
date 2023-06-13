#include "ros/ros.h"
#include "turtlesim/Pose.h"

void dopose(const turtlesim::Pose::ConstPtr &pose)
{
    ROS_INFO("当前乌龟的坐标是(%.2f,%.2f)\n\t朝向(%.2f)\n\t线速度(%.2f)\n\t角速度(%.2f)\n",
            pose->x,pose->y,pose->theta,pose->linear_velocity,pose->angular_velocity);
}

int main(int argc, char *argv[])
{
    setlocale(LC_ALL,"");

    ros::init(argc,argv,"sub_pose");

    ros::NodeHandle nh;

    ros::Subscriber sub = nh.subscribe("/turtle1/pose",100,dopose);

    ros::spin();

    return 0;
}
