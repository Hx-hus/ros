#include "ros/ros.h"


int main(int argc, char *argv[])
{
    //初始化ros节点
    ros::init(argc,argv,"param_set");

    //ros句柄
    ros::NodeHandle nh;

    //增加参数
        //方案1：句柄
    nh.setParam("type","penchi");
    nh.setParam("radius",0.5);

        //方案2：ros::param
    ros::param::set("type_param","baoma");
    ros::param::set("radius_param",0.4);

    //修改参数
        //句柄
    nh.setParam("radius",0.45);//当这个键存在的时候，会覆盖键代表的值
    
        //ros::param
    ros::param::set("radiu_param",0.3);

    //处理回调函数
    ros::spin();
    
    return 0;
}
