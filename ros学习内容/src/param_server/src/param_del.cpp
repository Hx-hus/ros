#include "ros/ros.h"

int main(int argc, char *argv[])
{
    ros::init(argc,argv,"param_del");

    ros::NodeHandle nh;

    bool ans = nh.deleteParam("rodius");
    if(ans) ROS_INFO("删除成功");
    else ROS_INFO("删除失败");

    bool ans1 = ros::param::del("rodius");
    if(ans1) ROS_INFO("删除成功");
    else ROS_INFO("删除失败");

    ros::spin();

    return 0;
}
