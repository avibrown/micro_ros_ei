// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ei_interfaces:msg/EIResult.idl
// generated code does not contain a copyright notice

#ifndef EI_INTERFACES__MSG__DETAIL__EI_RESULT__BUILDER_HPP_
#define EI_INTERFACES__MSG__DETAIL__EI_RESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ei_interfaces/msg/detail/ei_result__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ei_interfaces
{

namespace msg
{

namespace builder
{

class Init_EIResult_result
{
public:
  Init_EIResult_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ei_interfaces::msg::EIResult result(::ei_interfaces::msg::EIResult::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ei_interfaces::msg::EIResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ei_interfaces::msg::EIResult>()
{
  return ei_interfaces::msg::builder::Init_EIResult_result();
}

}  // namespace ei_interfaces

#endif  // EI_INTERFACES__MSG__DETAIL__EI_RESULT__BUILDER_HPP_
