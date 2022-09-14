// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ei_interfaces:msg/EIResult.idl
// generated code does not contain a copyright notice

#ifndef EI_INTERFACES__MSG__DETAIL__EI_RESULT__STRUCT_HPP_
#define EI_INTERFACES__MSG__DETAIL__EI_RESULT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'result'
#include "ei_interfaces/msg/detail/ei_classification__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ei_interfaces__msg__EIResult __attribute__((deprecated))
#else
# define DEPRECATED__ei_interfaces__msg__EIResult __declspec(deprecated)
#endif

namespace ei_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EIResult_
{
  using Type = EIResult_<ContainerAllocator>;

  explicit EIResult_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit EIResult_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _result_type =
    std::vector<ei_interfaces::msg::EIClassification_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ei_interfaces::msg::EIClassification_<ContainerAllocator>>>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const std::vector<ei_interfaces::msg::EIClassification_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ei_interfaces::msg::EIClassification_<ContainerAllocator>>> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ei_interfaces::msg::EIResult_<ContainerAllocator> *;
  using ConstRawPtr =
    const ei_interfaces::msg::EIResult_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ei_interfaces::msg::EIResult_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ei_interfaces::msg::EIResult_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ei_interfaces::msg::EIResult_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ei_interfaces::msg::EIResult_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ei_interfaces::msg::EIResult_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ei_interfaces::msg::EIResult_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ei_interfaces::msg::EIResult_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ei_interfaces::msg::EIResult_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ei_interfaces__msg__EIResult
    std::shared_ptr<ei_interfaces::msg::EIResult_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ei_interfaces__msg__EIResult
    std::shared_ptr<ei_interfaces::msg::EIResult_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EIResult_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const EIResult_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EIResult_

// alias to use template instance with default allocator
using EIResult =
  ei_interfaces::msg::EIResult_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ei_interfaces

#endif  // EI_INTERFACES__MSG__DETAIL__EI_RESULT__STRUCT_HPP_
