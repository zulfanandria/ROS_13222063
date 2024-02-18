#include "tugas1/commander.hpp"

Commander::Commander(ros::NodeHandle& nh) : nh_(nh) {
    sub_ = nh_.subscribe("/drone_status", 10, &Commander::callbackStatus);
}
Commander::~Commander() {}

void Commander::callbackStatus(const tugas1::DronePos::ConstPtr& msg) {

}
