#include "ros/ros.h"
#include "test/person.h"


//打印数据函数
void p_data(const test::person::ConstPtr& per)
{
    ROS_INFO("订阅的消息是：%s,%d,%.2f",per->name.c_str(),per->age,per->height);
}

int main(int argc, char *argv[])
{
    ///解决中文乱码
    setlocale(LC_ALL,"");
    ROS_INFO("订阅者");
    //初始化ros节点
    ros::init(argc,argv,"cuihua");
    
    //初始化节点句柄
    ros::NodeHandle nh;

    //创建订阅者对象
    ros::Subscriber sub = nh.subscribe("aiqin",10,p_data);

    //调用spiOnce函数，处理回调函数
    ros::spin();

    return 0;
}