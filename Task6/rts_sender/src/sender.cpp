#include <ros/ros.h>
#include <rts_sender/ThreeInts.h>

int main(int argc, char **argv)
{
    // 初始化 ROS 节点，节点名为 rts_sender_node
    ros::init(argc, argv, "rts_sender_node");

    // 创建节点句柄
    ros::NodeHandle nh;

    // 创建发布者：
    // 发布到 /three_ints 话题
    // 消息类型为我们自己定义的 rts_sender::ThreeInts
    ros::Publisher pub =
        nh.advertise<rts_sender::ThreeInts>("/three_ints", 10);

    // 每秒发送一次
    ros::Rate rate(1);

    while (ros::ok())
    {
        rts_sender::ThreeInts msg;

        msg.x = 111;
        msg.y = 111;
        msg.z = 232;

        pub.publish(msg);

        ROS_INFO("Published: x:%ld y:%ld z:%ld",
                 msg.x, msg.y, msg.z);

        rate.sleep();
    }

    return 0;
}
