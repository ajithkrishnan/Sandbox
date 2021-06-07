#include <ros/ros.h>

int main(int argc, char** argv){
  ros::init(argc, argv, "simple-node");
  ros::NodeHandle n;

  ros::Rate r(100);

  while(n.ok()){

    r.sleep();
  }
}
