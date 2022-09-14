// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ei_interfaces:msg/EIClassification.idl
// generated code does not contain a copyright notice

#ifndef EI_INTERFACES__MSG__DETAIL__EI_CLASSIFICATION__STRUCT_HPP_
#define EI_INTERFACES__MSG__DETAIL__EI_CLASSIFICATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ei_interfaces__msg__EIClassification __attribute__((deprecated))
#else
# define DEPRECATED__ei_interfaces__msg__EIClassification __declspec(deprecated)
#endif

namespace ei_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EIClassification_
{
  using Type = EIClassification_<ContainerAllocator>;

  explicit EIClassification_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->label = "";
      this->value = 0.0f;
    }
  }

  explicit EIClassification_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : label(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->label = "";
      this->value = 0.0f;
    }
  }

  // field types and members
  using _label_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _label_type label;
  using _value_type =
    float;
  _value_type value;

  // setters for named parameter idiom
  Type & set__label(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->label = _arg;
    return *this;
  }
  Type & set__value(
    const float & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ei_interfaces::msg::EIClassification_<ContainerAllocator> *;
  using ConstRawPtr =
    const ei_interfaces::msg::EIClassification_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ei_interfaces::msg::EIClassification_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ei_interfaces::msg::EIClassification_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ei_interfaces::msg::EIClassification_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ei_interfaces::msg::EIClassification_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ei_interfaces::msg::EIClassification_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ei_interfaces::msg::EIClassification_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ei_interfaces::msg::EIClassification_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ei_interfaces::msg::EIClassification_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ei_interfaces__msg__EIClassification
    std::shared_ptr<ei_interfaces::msg::EIClassification_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ei_interfaces__msg__EIClassification
    std::shared_ptr<ei_interfaces::msg::EIClassification_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EIClassification_ & other) const
  {
    if (this->label != other.label) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const EIClassification_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EIClassification_

// alias to use template instance with default allocator
using EIClassification =
  ei_interfaces::msg::EIClassification_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ei_interfaces

#endif  // EI_INTERFACES__MSG__DETAIL__EI_CLASSIFICATION__STRUCT_HPP_
