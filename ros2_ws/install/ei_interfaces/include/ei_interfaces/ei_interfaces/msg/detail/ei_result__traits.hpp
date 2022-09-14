// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ei_interfaces:msg/EIResult.idl
// generated code does not contain a copyright notice

#ifndef EI_INTERFACES__MSG__DETAIL__EI_RESULT__TRAITS_HPP_
#define EI_INTERFACES__MSG__DETAIL__EI_RESULT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ei_interfaces/msg/detail/ei_result__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'result'
#include "ei_interfaces/msg/detail/ei_classification__traits.hpp"

namespace ei_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const EIResult & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    if (msg.result.size() == 0) {
      out << "result: []";
    } else {
      out << "result: [";
      size_t pending_items = msg.result.size();
      for (auto item : msg.result) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EIResult & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.result.size() == 0) {
      out << "result: []\n";
    } else {
      out << "result:\n";
      for (auto item : msg.result) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EIResult & msg, bool use_flow_style = false)
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
  const ei_interfaces::msg::EIResult & msg,
  std::ostream & out, size_t indentation = 0)
{
  ei_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ei_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const ei_interfaces::msg::EIResult & msg)
{
  return ei_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ei_interfaces::msg::EIResult>()
{
  return "ei_interfaces::msg::EIResult";
}

template<>
inline const char * name<ei_interfaces::msg::EIResult>()
{
  return "ei_interfaces/msg/EIResult";
}

template<>
struct has_fixed_size<ei_interfaces::msg::EIResult>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ei_interfaces::msg::EIResult>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ei_interfaces::msg::EIResult>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // EI_INTERFACES__MSG__DETAIL__EI_RESULT__TRAITS_HPP_
