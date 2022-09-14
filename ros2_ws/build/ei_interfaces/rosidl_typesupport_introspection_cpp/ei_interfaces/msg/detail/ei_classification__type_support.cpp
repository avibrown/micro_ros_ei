// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ei_interfaces:msg/EIClassification.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ei_interfaces/msg/detail/ei_classification__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ei_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void EIClassification_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ei_interfaces::msg::EIClassification(_init);
}

void EIClassification_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ei_interfaces::msg::EIClassification *>(message_memory);
  typed_message->~EIClassification();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember EIClassification_message_member_array[2] = {
  {
    "label",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ei_interfaces::msg::EIClassification, label),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "value",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ei_interfaces::msg::EIClassification, value),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers EIClassification_message_members = {
  "ei_interfaces::msg",  // message namespace
  "EIClassification",  // message name
  2,  // number of fields
  sizeof(ei_interfaces::msg::EIClassification),
  EIClassification_message_member_array,  // message members
  EIClassification_init_function,  // function to initialize message memory (memory has to be allocated)
  EIClassification_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t EIClassification_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &EIClassification_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace ei_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ei_interfaces::msg::EIClassification>()
{
  return &::ei_interfaces::msg::rosidl_typesupport_introspection_cpp::EIClassification_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ei_interfaces, msg, EIClassification)() {
  return &::ei_interfaces::msg::rosidl_typesupport_introspection_cpp::EIClassification_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
