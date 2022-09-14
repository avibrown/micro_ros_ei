// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ei_interfaces:msg/EIResult.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ei_interfaces/msg/detail/ei_result__struct.hpp"
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

void EIResult_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ei_interfaces::msg::EIResult(_init);
}

void EIResult_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ei_interfaces::msg::EIResult *>(message_memory);
  typed_message->~EIResult();
}

size_t size_function__EIResult__result(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ei_interfaces::msg::EIClassification> *>(untyped_member);
  return member->size();
}

const void * get_const_function__EIResult__result(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ei_interfaces::msg::EIClassification> *>(untyped_member);
  return &member[index];
}

void * get_function__EIResult__result(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ei_interfaces::msg::EIClassification> *>(untyped_member);
  return &member[index];
}

void fetch_function__EIResult__result(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const ei_interfaces::msg::EIClassification *>(
    get_const_function__EIResult__result(untyped_member, index));
  auto & value = *reinterpret_cast<ei_interfaces::msg::EIClassification *>(untyped_value);
  value = item;
}

void assign_function__EIResult__result(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<ei_interfaces::msg::EIClassification *>(
    get_function__EIResult__result(untyped_member, index));
  const auto & value = *reinterpret_cast<const ei_interfaces::msg::EIClassification *>(untyped_value);
  item = value;
}

void resize_function__EIResult__result(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ei_interfaces::msg::EIClassification> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember EIResult_message_member_array[1] = {
  {
    "result",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ei_interfaces::msg::EIClassification>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ei_interfaces::msg::EIResult, result),  // bytes offset in struct
    nullptr,  // default value
    size_function__EIResult__result,  // size() function pointer
    get_const_function__EIResult__result,  // get_const(index) function pointer
    get_function__EIResult__result,  // get(index) function pointer
    fetch_function__EIResult__result,  // fetch(index, &value) function pointer
    assign_function__EIResult__result,  // assign(index, value) function pointer
    resize_function__EIResult__result  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers EIResult_message_members = {
  "ei_interfaces::msg",  // message namespace
  "EIResult",  // message name
  1,  // number of fields
  sizeof(ei_interfaces::msg::EIResult),
  EIResult_message_member_array,  // message members
  EIResult_init_function,  // function to initialize message memory (memory has to be allocated)
  EIResult_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t EIResult_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &EIResult_message_members,
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
get_message_type_support_handle<ei_interfaces::msg::EIResult>()
{
  return &::ei_interfaces::msg::rosidl_typesupport_introspection_cpp::EIResult_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ei_interfaces, msg, EIResult)() {
  return &::ei_interfaces::msg::rosidl_typesupport_introspection_cpp::EIResult_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
