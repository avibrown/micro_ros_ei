#include <micro_ros_arduino.h>

#include <stdio.h>
#include <rcl/rcl.h>
#include <rcl/error_handling.h>
#include <rclc/rclc.h>

#include <ei_interfaces/msg/ei_result.h>
#include <ei_interfaces/msg/ei_classification.h>

ei_interfaces__msg__EIResult msg;

rcl_publisher_t publisher;
rclc_support_t support;
rcl_allocator_t allocator;
rcl_node_t node;
rcl_timer_t timer;

#define ERROR_LED LEDR
#define PUBLISH_LED LEDB

#define RCCHECK(fn) { rcl_ret_t temp_rc = fn; if((temp_rc != RCL_RET_OK)){error_loop();}}
#define RCSOFTCHECK(fn) { rcl_ret_t temp_rc = fn; if((temp_rc != RCL_RET_OK)){}}


void error_loop(){
  while(1){
    digitalWrite(ERROR_LED, !digitalRead(ERROR_LED));
    delay(100);
  }
}

void publish_result(ei_interfaces__msg__EIResult result_msg) {
  digitalWrite(PUBLISH_LED, !digitalRead(PUBLISH_LED));
  RCSOFTCHECK(rcl_publish(&publisher, &result_msg, NULL));
}

void ei_micro_ros_setup(uint32_t EI_TIMER, uint32_t LABEL_COUNT) {  
  set_microros_transports();
  
  pinMode(ERROR_LED, OUTPUT);
  pinMode(PUBLISH_LED, OUTPUT);
  digitalWrite(ERROR_LED, HIGH);
  digitalWrite(PUBLISH_LED, HIGH);  
  
  delay(100);

  allocator = rcl_get_default_allocator();

  // Create init_options
  RCCHECK(rclc_support_init(&support, 0, NULL, &allocator));

  // Create node
  RCCHECK(rclc_node_init_default(&node, "ei_result_node", "", &support));

  // Create publisher
  RCCHECK(rclc_publisher_init_default(
    &publisher,
    &node,
    ROSIDL_GET_MSG_TYPE_SUPPORT(ei_interfaces, msg, EIResult),
    "/ei_result_publisher"));

  msg.result.capacity = LABEL_COUNT;
  msg.result.data = (ei_interfaces__msg__EIClassification*) malloc(msg.result.capacity * sizeof(ei_interfaces__msg__EIClassification));
  msg.result.size = 0;

    for (int32_t ix = 0; ix < LABEL_COUNT; ix++) {
      msg.result.data[ix].label.capacity = 20;
      msg.result.data[ix].label.data = (char*) malloc(msg.result.data[ix].label.capacity * sizeof(char));
      msg.result.data[ix].label.size = 0;
      msg.result.size++;
    }
}
