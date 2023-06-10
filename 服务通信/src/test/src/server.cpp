#include "ros/ros.h"
#include "test/addints.h"


bool donums(test::addints::Request &request,//请求对象
            test::addints::Response &reponse)//响应对象
{
    //处理请求
    int num1 = request.num1;
    int num2 = request.num2;
    ROS_INFO("收到的请求数据:num1 = %d, num2 = %d", num1, num2);

    //组织相应
    int sum = num1 + num2;
    reponse.sum = sum;
    ROS_INFO("处理后的数据:sum = %d", sum);
    
    return true;
}
int main(int argc, char *argv[])
{
    //解决中文乱码
    setlocale(LC_ALL,"");
    //初始化节点
    ros::init(argc,argv,"sum");

    //创建节点句柄
    ros::NodeHandle nh;

    //创建服务对象
    ros::ServiceServer server = nh.advertiseService("addInts",donums);
    ROS_INFO("服务器端启动");

    ros::spin();

    return 0;
}