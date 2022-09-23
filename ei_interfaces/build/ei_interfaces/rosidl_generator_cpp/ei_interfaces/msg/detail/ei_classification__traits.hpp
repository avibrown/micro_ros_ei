// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ei_interfaces:msg/EIClassification.idl
// generated code does not contain a copyright notice

#ifndef EI_INTERFACES__MSG__DETAIL__EI_CLASSIFICATION__TRAITS_HPP_
#define EI_INTERFACES__MSG__DETAIL__EI_CLASSIFICATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ei_interfaces/msg/detail/ei_classification__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ei_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const EIClassification & msg,
  std::ostream & out)
{
  out << "{";
  // member: label
  {
    out << "label: ";
    rosidl_generator_traits::value_to_yaml(msg.label, out);
    out << ", ";
  }

  // member: value
  {
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EIClassification & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: label
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "label: ";
    rosidl_generator_traits::value_to_yaml(msg.label, out);
    out << "\n";
  }

  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EIClassification & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace ei_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use ei_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ei_interfaces::msg::EIClassification & msg,
  std::ostream & out, size_t indentation = 0)
{
  ei_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ei_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const ei_interfaces::msg::EIClassification & msg)
{
  return ei_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ei_interfaces::msg::EIClassification>()
{
  return "ei_interfaces::msg::EIClassification";
}

template<>
inline const char * name<ei_interfaces::msg::EIClassification>()
{
  return "ei_interfaces/msg/EIClassification";
}

template<>
struct has_fixed_size<ei_interfaces::msg::EIClassification>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ei_interfaces::msg::EIClassification>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ei_interfaces::msg::EIClassification>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // EI_INTERFACES__MSG__DETAIL__EI_CLASSIFICATION__TRAITS_HPP_
