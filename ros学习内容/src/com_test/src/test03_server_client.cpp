#include "ros/ros.h"
#include "turtlesim/Spawn.h"

int main(int argc, char *argv[])
{
    setlocale(LC_ALL,"");

    ros::init(argc,argv,"client");

    ros::NodeHandle nh;

    ros::ServiceClient client = nh.serviceClient<turtlesim::Spawn>("/spawn");

    client.waitForExistence();

    turtlesim::Spawn spawn;

    spawn.request.x = 1.0;
    spawn.request.y = 5.0;
    spawn.request.theta = 1.0;
    spawn.request.name = "turtle2";
    
    bool flag = client.call(spawn);

    if(flag) ROS_INFO("响应成功，小乌龟创建完成，代号：%s", spawn.response.name.c_str());
    else ROS_INFO("响应失败");

    ros::spin();

    return 0;
}
