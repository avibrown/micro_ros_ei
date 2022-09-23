// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from ei_interfaces:msg/EIResult.idl
// generated code does not contain a copyright notice

#ifndef EI_INTERFACES__MSG__DETAIL__EI_RESULT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define EI_INTERFACES__MSG__DETAIL__EI_RESULT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "ei_interfaces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "ei_interfaces/msg/detail/ei_result__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace ei_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ei_interfaces
cdr_serialize(
  const ei_interfaces::msg::EIResult & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ei_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ei_interfaces::msg::EIResult & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ei_interfaces
get_serialized_size(
  const ei_interfaces::msg::EIResult & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ei_interfaces
max_serialized_size_EIResult(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ei_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ei_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ei_interfaces, msg, EIResult)();

#ifdef __cplusplus
}
#endif

#endif  // EI_INTERFACES__MSG__DETAIL__EI_RESULT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
