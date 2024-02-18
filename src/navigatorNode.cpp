#include <ros/ros.h>
#include "tugas1/navigator.hpp"

int main(int argc, char** argv) {
    ros::init(argc, argv, "navigasi");
    ros::NodeHandle nh;

    Navigator navigator(nh); 

    ros::spin();

    return 0;
}
