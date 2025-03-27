// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nimbro_api_interfaces:msg/ApiUsage.idl
// generated code does not contain a copyright notice

#ifndef NIMBRO_API_INTERFACES__MSG__DETAIL__API_USAGE__STRUCT_HPP_
#define NIMBRO_API_INTERFACES__MSG__DETAIL__API_USAGE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__nimbro_api_interfaces__msg__ApiUsage __attribute__((deprecated))
#else
# define DEPRECATED__nimbro_api_interfaces__msg__ApiUsage __declspec(deprecated)
#endif

namespace nimbro_api_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ApiUsage_
{
  using Type = ApiUsage_<ContainerAllocator>;

  explicit ApiUsage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->api_type = "";
      this->api_flavor = "";
      this->model_name = "";
      this->input_tokens_uncached = 0ull;
      this->input_tokens_cached = 0ull;
      this->output_tokens = 0ull;
    }
  }

  explicit ApiUsage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : api_type(_alloc),
    api_flavor(_alloc),
    model_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->api_type = "";
      this->api_flavor = "";
      this->model_name = "";
      this->input_tokens_uncached = 0ull;
      this->input_tokens_cached = 0ull;
      this->output_tokens = 0ull;
    }
  }

  // field types and members
  using _api_type_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _api_type_type api_type;
  using _api_flavor_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _api_flavor_type api_flavor;
  using _model_name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _model_name_type model_name;
  using _input_tokens_uncached_type =
    uint64_t;
  _input_tokens_uncached_type input_tokens_uncached;
  using _input_tokens_cached_type =
    uint64_t;
  _input_tokens_cached_type input_tokens_cached;
  using _output_tokens_type =
    uint64_t;
  _output_tokens_type output_tokens;

  // setters for named parameter idiom
  Type & set__api_type(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->api_type = _arg;
    return *this;
  }
  Type & set__api_flavor(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->api_flavor = _arg;
    return *this;
  }
  Type & set__model_name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->model_name = _arg;
    return *this;
  }
  Type & set__input_tokens_uncached(
    const uint64_t & _arg)
  {
    this->input_tokens_uncached = _arg;
    return *this;
  }
  Type & set__input_tokens_cached(
    const uint64_t & _arg)
  {
    this->input_tokens_cached = _arg;
    return *this;
  }
  Type & set__output_tokens(
    const uint64_t & _arg)
  {
    this->output_tokens = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nimbro_api_interfaces::msg::ApiUsage_<ContainerAllocator> *;
  using ConstRawPtr =
    const nimbro_api_interfaces::msg::ApiUsage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nimbro_api_interfaces::msg::ApiUsage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nimbro_api_interfaces::msg::ApiUsage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nimbro_api_interfaces::msg::ApiUsage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nimbro_api_interfaces::msg::ApiUsage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nimbro_api_interfaces::msg::ApiUsage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nimbro_api_interfaces::msg::ApiUsage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nimbro_api_interfaces::msg::ApiUsage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nimbro_api_interfaces::msg::ApiUsage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nimbro_api_interfaces__msg__ApiUsage
    std::shared_ptr<nimbro_api_interfaces::msg::ApiUsage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nimbro_api_interfaces__msg__ApiUsage
    std::shared_ptr<nimbro_api_interfaces::msg::ApiUsage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ApiUsage_ & other) const
  {
    if (this->api_type != other.api_type) {
      return false;
    }
    if (this->api_flavor != other.api_flavor) {
      return false;
    }
    if (this->model_name != other.model_name) {
      return false;
    }
    if (this->input_tokens_uncached != other.input_tokens_uncached) {
      return false;
    }
    if (this->input_tokens_cached != other.input_tokens_cached) {
      return false;
    }
    if (this->output_tokens != other.output_tokens) {
      return false;
    }
    return true;
  }
  bool operator!=(const ApiUsage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ApiUsage_

// alias to use template instance with default allocator
using ApiUsage =
  nimbro_api_interfaces::msg::ApiUsage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace nimbro_api_interfaces

#endif  // NIMBRO_API_INTERFACES__MSG__DETAIL__API_USAGE__STRUCT_HPP_
