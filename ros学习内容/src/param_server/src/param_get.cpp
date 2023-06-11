#include "ros/ros.h"
#include <string>
#include <vector>

int main(int argc, char *argv[])
{
    //处理中文乱码
    setlocale(LC_ALL,"");

    //初始化ros节点
    ros::init(argc,argv,"param_get");

    //创建ros句柄
    ros::NodeHandle nh;

    //查找
        //使用句柄
    double tmp1 = nh.param("radius",0.5);//查找是否有该键，有返回代表的值，没有返回后面跟的参数
    ROS_INFO("获取到的结果是：%lf",tmp1);

    double tmp2 = 0;
    bool ans1 = nh.getParam("radius",tmp2);//查找是否有该键，有则返回真，并且把值赋给参数2，没有返回假同时不给参数2赋值
    if(ans1) ROS_INFO("获取到的结果是：%lf",tmp2);
    else ROS_INFO("没有该键，无法查到");

    ans1 = nh.getParamCached("radius",tmp2);//与getParam作用相同，它会先在程序里面找是否找过，如果找过直接把找过的赋值给参数2，如果没有就其参数服务器中找
    if(ans1) ROS_INFO("获取到的结果是：%lf",tmp2);
    else ROS_INFO("没有该键，无法查到");

    std::vector<std::string> names;
    nh.getParamNames(names);//获取到参数服务器当中所有的键，放到names中保存
    for(auto name : names) ROS_INFO("参数服务器中的键有：%s",name.c_str());

    bool ans2 = nh.hasParam("radius");//查询是否存在此键
    if(ans2) ROS_INFO("radius存在");
    else ROS_INFO("radius不存在");

    std::string tmp3;
    nh.searchParam("radius",tmp3);//查询是否存在raius,如果存在赋值给tmp3，不存在不进行操作
    ROS_INFO("查找到：%s",tmp3.c_str());

        //使用ros::param
    double tmp4 = ros::param::param("radius",0.5);//作用同句柄的param
    ROS_INFO("获取到的结果是：%lf",tmp4);

    std::vector<std::string> names1;
    ros::param::getParamNames(names1);
    for(auto name : names1) ROS_INFO("参数服务器中的键有：%s",name.c_str());
    

    //剩余用法同句柄

    //spin
    ros::spin();


    return 0;
}
