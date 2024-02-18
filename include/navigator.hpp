#ifndef NAVIGATOR_HPP
#define NAVIGATOR_HPP

#include <ros/ros.h>
#include "tugas1/DronePos.h" 

class Navigator {
public:
    Navigator(ros::NodeHandle& nh);
    ~Navigator();

private:
    ros::NodeHandle nh_;     // Objek untuk berinteraksi dengan ROS
    ros::Publisher pub_;     // Publisher untuk mengirim pesan
    void kirimStatusDrone(); // Fungsi untuk mengirim status drone
};

#endif
