#ifndef COMMANDER_HPP
#define COMMANDER_HPP

#include <ros/ros.h>
#include "tugas1/DronePos.h" 

class Commander {
public:
    Commander(ros::NodeHandle& nh);
    ~Commander();

private:
    ros::NodeHandle nh_;       
    ros::Subscriber sub_;        // Subscriber penerima pesan
    ros::Publisher pub_;         // Publisher pengirim pesan
    void callbackStatus(const tugas1::DronePos::ConstPtr& msg);
};

#endif
