#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "TrustAI_merge";

// For Block TrustAI_merge/Subscribe
SimulinkSubscriber<std_msgs::Float64, SL_Bus_TrustAI_merge_std_msgs_Float64> Sub_TrustAI_merge_1;

// For Block TrustAI_merge/Subscribe1
SimulinkSubscriber<std_msgs::Float64, SL_Bus_TrustAI_merge_std_msgs_Float64> Sub_TrustAI_merge_9;

// For Block TrustAI_merge/Publish
SimulinkPublisher<std_msgs::Float64, SL_Bus_TrustAI_merge_std_msgs_Float64> Pub_TrustAI_merge_23;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

