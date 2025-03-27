// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nimbro_api_interfaces:msg/Embedding.idl
// generated code does not contain a copyright notice

#ifndef NIMBRO_API_INTERFACES__MSG__DETAIL__EMBEDDING__STRUCT_HPP_
#define NIMBRO_API_INTERFACES__MSG__DETAIL__EMBEDDING__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__nimbro_api_interfaces__msg__Embedding __attribute__((deprecated))
#else
# define DEPRECATED__nimbro_api_interfaces__msg__Embedding __declspec(deprecated)
#endif

namespace nimbro_api_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Embedding_
{
  using Type = Embedding_<ContainerAllocator>;

  explicit Embedding_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Embedding_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _embedding_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _embedding_type embedding;

  // setters for named parameter idiom
  Type & set__embedding(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->embedding = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nimbro_api_interfaces::msg::Embedding_<ContainerAllocator> *;
  using ConstRawPtr =
    const nimbro_api_interfaces::msg::Embedding_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nimbro_api_interfaces::msg::Embedding_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nimbro_api_interfaces::msg::Embedding_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nimbro_api_interfaces::msg::Embedding_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nimbro_api_interfaces::msg::Embedding_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nimbro_api_interfaces::msg::Embedding_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nimbro_api_interfaces::msg::Embedding_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nimbro_api_interfaces::msg::Embedding_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nimbro_api_interfaces::msg::Embedding_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nimbro_api_interfaces__msg__Embedding
    std::shared_ptr<nimbro_api_interfaces::msg::Embedding_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nimbro_api_interfaces__msg__Embedding
    std::shared_ptr<nimbro_api_interfaces::msg::Embedding_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Embedding_ & other) const
  {
    if (this->embedding != other.embedding) {
      return false;
    }
    return true;
  }
  bool operator!=(const Embedding_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Embedding_

// alias to use template instance with default allocator
using Embedding =
  nimbro_api_interfaces::msg::Embedding_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace nimbro_api_interfaces

#endif  // NIMBRO_API_INTERFACES__MSG__DETAIL__EMBEDDING__STRUCT_HPP_
