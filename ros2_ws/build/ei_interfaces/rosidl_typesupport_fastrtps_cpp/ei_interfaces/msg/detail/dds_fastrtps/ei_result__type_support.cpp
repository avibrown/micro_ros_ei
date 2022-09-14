// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ei_interfaces:msg/EIResult.idl
// generated code does not contain a copyright notice
#include "ei_interfaces/msg/detail/ei_result__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ei_interfaces/msg/detail/ei_result__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace ei_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const ei_interfaces::msg::EIClassification &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  ei_interfaces::msg::EIClassification &);
size_t get_serialized_size(
  const ei_interfaces::msg::EIClassification &,
  size_t current_alignment);
size_t
max_serialized_size_EIClassification(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace ei_interfaces


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
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: result
  {
    size_t size = ros_message.result.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      ei_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.result[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ei_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ei_interfaces::msg::EIResult & ros_message)
{
  // Member: result
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.result.resize(size);
    for (size_t i = 0; i < size; i++) {
      ei_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.result[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ei_interfaces
get_serialized_size(
  const ei_interfaces::msg::EIResult & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: result
  {
    size_t array_size = ros_message.result.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ei_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.result[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ei_interfaces
max_serialized_size_EIResult(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: result
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        ei_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_EIClassification(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _EIResult__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ei_interfaces::msg::EIResult *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _EIResult__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ei_interfaces::msg::EIResult *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _EIResult__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ei_interfaces::msg::EIResult *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _EIResult__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_EIResult(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _EIResult__callbacks = {
  "ei_interfaces::msg",
  "EIResult",
  _EIResult__cdr_serialize,
  _EIResult__cdr_deserialize,
  _EIResult__get_serialized_size,
  _EIResult__max_serialized_size
};

static rosidl_message_type_support_t _EIResult__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_EIResult__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ei_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ei_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<ei_interfaces::msg::EIResult>()
{
  return &ei_interfaces::msg::typesupport_fastrtps_cpp::_EIResult__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ei_interfaces, msg, EIResult)() {
  return &ei_interfaces::msg::typesupport_fastrtps_cpp::_EIResult__handle;
}

#ifdef __cplusplus
}
#endif
