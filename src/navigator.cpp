#include "tugas1/navigator.hpp"

Navigator::Navigator(ros::NodeHandle& nh) : nh_(nh) {
    pub_ = nh_.advertise<tugas1::DronePos>("/drone_status", 10);
    kirimStatusDrone();
}

Navigator::~Navigator() {}

void Navigator::kirimStatusDrone() {
    ros::Rate loop_rate(1);    // 1 Hz
    tugas1::DronePos pesan;  
    // Inisiasi nilai
    float x = 0.0;
    float z = 0.0;
    string status = "takeoff";
    
    while (ros::ok()) {
        pesan.x = x;
        pesan.y = 0.0;
        pesan.z = z;
        pesan.status = status;
        pub_.publish(pesan); // Mengirim pesan ke topik

        // Update sesuai spesifikasi
        if (z >= 10) {
            z = 0.0;
        } else {
            z += 1.0;
        }
        if (z == 0) {
            status = "land";
        } else if (z == 10) {
            status = "fly";
        } else {
            status = "takeoff";
        }

        ros::spinOnce();      // Memproses pesan ROS yang tertunda
        loop_rate.sleep();    // Menunggu selama waktu yang diperlukan agar mencapai frekuensi yang diinginkan
    }
}
