#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"
#include "TrustAI_merge_types.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block TrustAI_merge/Subscribe
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_TrustAI_merge_std_msgs_Float64> Sub_TrustAI_merge_1;

// For Block TrustAI_merge/Subscribe1
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_TrustAI_merge_std_msgs_Float64> Sub_TrustAI_merge_9;

// For Block TrustAI_merge/Publish
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_TrustAI_merge_std_msgs_Float64> Pub_TrustAI_merge_23;

void slros_node_init(int argc, char** argv);

#endif
