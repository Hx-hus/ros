#include "ros/ros.h"
#include "test/person.h"

int main(int argc,char* argv[])
{
    //解决中文乱码
    setlocale(LC_ALL,"");
    ROS_INFO("发布者");
    //初始化ros节点
    ros::init(argc,argv,"goudan");
    
    //初始化节点句柄
    ros::NodeHandle nh;

    //创建发布者对象
    ros::Publisher pub = nh.advertise<test::person>("aiqin",10);

    //创建发布者信息数据
    test::person per;
    per.name = "狗蛋";
    per.age = 18;
    per.height = 1.83;

    //设置发布频率
    ros::Rate rate(1);

    //发布数据
    while(ros::ok())
    {
        //数据发布
        pub.publish(per);
        //休眠
        rate.sleep();

        ros::spin();
    }
    return 0;
}