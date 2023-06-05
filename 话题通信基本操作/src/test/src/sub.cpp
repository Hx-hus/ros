#include "ros/ros.h"
#include "std_msgs/String.h"

//订阅方实现
//1.包含头文件
//      ros中的文本类型是std_msga/String.h
//2.初始化ros节点
//3.创建节点句柄
//4.创建订阅者对象
//5.处理订阅到的数据
//6.spin()函数

void dispose(const std_msgs::String::ConstPtr &msg)//参数是订阅到的消息
{   
    
    //通过msg获取并操作订阅到的数据
    ROS_INFO("goudan订阅到的数据:%s",msg->data.c_str());

}

int main(int argc,char *argv[])
{
    setlocale(LC_ALL,"");
    //初始化ros节点
    ros::init(argc,argv,"goudan");
    //创建节点句柄
    ros::NodeHandle nh;
    //创建订阅者对象
    ros::Subscriber sub = nh.subscribe("aiqin",10,dispose);//第三个参数是回调函数，用于处理数据
    //上面的类型因为是订阅方，则可以自动类型推导，不用指定类型

    ros::spin();//回头，因为27行的回调函数是需要重复调用的,有回调函数必须要添加其处理回调函数

    return 0;
}