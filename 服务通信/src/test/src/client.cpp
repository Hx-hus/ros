#include "ros/ros.h"
#include "test/addints.h"
#include <iostream>

int main(int argc, char* argv[])//argc是命令从工作空间名开始后空格隔开的参数个数,argv是输入的命令本身
{
    //解决中文乱码
    setlocale(LC_ALL,"");

    //直接在命令后输入参数
    if (argc != 3)//当不是3的时候，说明后面参数不全
    {
        ROS_INFO("输入参数有误");
        return 0;
    } 
    //初始化ros节点
    ros::init(argc,argv,"num");

    //创建节点句柄
    ros::NodeHandle nh;

    //创建一个客户端对象
    ros::ServiceClient client = nh.serviceClient<test::addints>("addInts");

    //提交请求
    test::addints ai;
    ai.request.num1 = atoi(argv[1]);
    ai.request.num2 = atoi(argv[2]);

    //判断服务端是否开启
    client.waitForExistence();//启动之后如果服务端没有启动可以挂起客户端等待服务端挂起
    //ros::service::waitForService("addInts");
    //与上述函数结果一样

    //处理响应
    bool flag = client.call(ai);//发送响应
    if (flag) 
    {
        ROS_INFO("响应成功");
        ROS_INFO("响应结果是：%d",ai.response.sum);
    }
    else ROS_INFO("响应失败");
    
    //处理回调函数
    ros::spin();
    return 0;
}