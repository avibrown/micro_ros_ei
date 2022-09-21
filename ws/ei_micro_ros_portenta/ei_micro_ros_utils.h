#ifndef EI_MICRO_ROS_UTILS_H
#define EI_MICRO_ROS_UTILS_H

// TODO: make this import unnessecary
#include <micro_ros_arduino.h>
#include "ei_result_publisher.h"

void ei_micro_ros_init(int EI_TIMER) {
  ei_micro_ros_setup(EI_TIMER, EI_CLASSIFIER_LABEL_COUNT);
  }

void fill_and_publish_msg(ei_impulse_result_t result) {
    for (int32_t ix = 0; ix < EI_CLASSIFIER_LABEL_COUNT; ix++) {
    strcpy(msg.result.data[ix].label.data, result.classification[ix].label);
    msg.result.data[ix].value = result.classification[ix].value;
    }
    
    publish_result(msg);
  }

#endif
