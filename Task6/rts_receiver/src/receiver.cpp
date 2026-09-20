#include <ros/ros.h>
#include <rts_sender/ThreeInts.h>

void messageCallback(const rts_sender::ThreeInts::ConstPtr& msg)
{
    ROS_INFO("x:%ld y:%ld z:%ld", msg->x, msg->y, msg->z);
}

int main(int argc, char **argv)
{
    ros::init(argc, argv, "receiver_node");
    ros::NodeHandle nh;

    ros::Subscriber sub = nh.subscribe("three_ints", 10, messageCallback);

    ros::spin();

    return 0;
}
