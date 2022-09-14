// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ei_interfaces:msg/EIClassification.idl
// generated code does not contain a copyright notice

#ifndef EI_INTERFACES__MSG__DETAIL__EI_CLASSIFICATION__BUILDER_HPP_
#define EI_INTERFACES__MSG__DETAIL__EI_CLASSIFICATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ei_interfaces/msg/detail/ei_classification__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ei_interfaces
{

namespace msg
{

namespace builder
{

class Init_EIClassification_value
{
public:
  explicit Init_EIClassification_value(::ei_interfaces::msg::EIClassification & msg)
  : msg_(msg)
  {}
  ::ei_interfaces::msg::EIClassification value(::ei_interfaces::msg::EIClassification::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ei_interfaces::msg::EIClassification msg_;
};

class Init_EIClassification_label
{
public:
  Init_EIClassification_label()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EIClassification_value label(::ei_interfaces::msg::EIClassification::_label_type arg)
  {
    msg_.label = std::move(arg);
    return Init_EIClassification_value(msg_);
  }

private:
  ::ei_interfaces::msg::EIClassification msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ei_interfaces::msg::EIClassification>()
{
  return ei_interfaces::msg::builder::Init_EIClassification_label();
}

}  // namespace ei_interfaces

#endif  // EI_INTERFACES__MSG__DETAIL__EI_CLASSIFICATION__BUILDER_HPP_
