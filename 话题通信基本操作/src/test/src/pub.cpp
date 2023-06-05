#include "ros/ros.h"
#include "std_msgs/String.h"
#include <sstream>

//发布方实现
//1.包含头文件
//      ros中的文本类型是std_msga/String.h
//2.初始化ros节点
//3.创建节点句柄
//4.创建发布者对象
//5.编写发布者逻辑并发布数据
int main(int argc,char *argv[])
{
    setlocale(LC_ALL,"");
    //初始化ros节点
    ros::init(argc ,argv, "cuihua");//cuihua是节点名
    //创建节点句柄
    ros::NodeHandle nh;
    //创建发布者对象
    ros::Publisher pub = nh.advertise<std_msgs::String>("aiqin",10);//advertise是用于创建发布者对象的，有三个重载，这里用第二个，
    //第一个参数是话题，是string类型的，第二个是最大消息长度，

    //5.编写发布逻辑并发布数据
    //要求10hz频率发布消息，并且文本后添加编号
    //先创建被发布的消息
    std_msgs::String msg;//消息
    //发布频率
    ros::Rate rate(10);//直接初始化成10hz
    //设置编号
    int count = 0;
    //通过循环发布数据
    ros::Duration(3).sleep();//休眠3秒，等待订阅者
    while (ros::ok())//如果这个节点还或者就为真
    {
        count++;
        //实现字符串拼接
        std::stringstream ss;
        ss << "cuihua --->" << count;
        msg.data = ss.str();
        pub.publish(msg);//发布数据
        //添加日志
        //ROS_INFO("发布的数据是：%s",ss.str().c_str());
        rate.sleep();//每次结束的哦等10hz
    }
    return 0;
}