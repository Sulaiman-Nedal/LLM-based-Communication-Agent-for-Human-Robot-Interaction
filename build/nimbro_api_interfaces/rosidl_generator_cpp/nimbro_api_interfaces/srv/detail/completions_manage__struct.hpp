// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nimbro_api_interfaces:srv/CompletionsManage.idl
// generated code does not contain a copyright notice

#ifndef NIMBRO_API_INTERFACES__SRV__DETAIL__COMPLETIONS_MANAGE__STRUCT_HPP_
#define NIMBRO_API_INTERFACES__SRV__DETAIL__COMPLETIONS_MANAGE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__nimbro_api_interfaces__srv__CompletionsManage_Request __attribute__((deprecated))
#else
# define DEPRECATED__nimbro_api_interfaces__srv__CompletionsManage_Request __declspec(deprecated)
#endif

namespace nimbro_api_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CompletionsManage_Request_
{
  using Type = CompletionsManage_Request_<ContainerAllocator>;

  explicit CompletionsManage_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->completions_id = "";
      this->action = "";
    }
  }

  explicit CompletionsManage_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : completions_id(_alloc),
    action(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->completions_id = "";
      this->action = "";
    }
  }

  // field types and members
  using _completions_id_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _completions_id_type completions_id;
  using _action_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _action_type action;
  using _parameter_names_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _parameter_names_type parameter_names;
  using _parameter_values_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _parameter_values_type parameter_values;

  // setters for named parameter idiom
  Type & set__completions_id(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->completions_id = _arg;
    return *this;
  }
  Type & set__action(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->action = _arg;
    return *this;
  }
  Type & set__parameter_names(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->parameter_names = _arg;
    return *this;
  }
  Type & set__parameter_values(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->parameter_values = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nimbro_api_interfaces::srv::CompletionsManage_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const nimbro_api_interfaces::srv::CompletionsManage_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nimbro_api_interfaces::srv::CompletionsManage_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nimbro_api_interfaces::srv::CompletionsManage_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nimbro_api_interfaces::srv::CompletionsManage_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nimbro_api_interfaces::srv::CompletionsManage_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nimbro_api_interfaces::srv::CompletionsManage_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nimbro_api_interfaces::srv::CompletionsManage_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nimbro_api_interfaces::srv::CompletionsManage_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nimbro_api_interfaces::srv::CompletionsManage_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nimbro_api_interfaces__srv__CompletionsManage_Request
    std::shared_ptr<nimbro_api_interfaces::srv::CompletionsManage_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nimbro_api_interfaces__srv__CompletionsManage_Request
    std::shared_ptr<nimbro_api_interfaces::srv::CompletionsManage_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CompletionsManage_Request_ & other) const
  {
    if (this->completions_id != other.completions_id) {
      return false;
    }
    if (this->action != other.action) {
      return false;
    }
    if (this->parameter_names != other.parameter_names) {
      return false;
    }
    if (this->parameter_values != other.parameter_values) {
      return false;
    }
    return true;
  }
  bool operator!=(const CompletionsManage_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CompletionsManage_Request_

// alias to use template instance with default allocator
using CompletionsManage_Request =
  nimbro_api_interfaces::srv::CompletionsManage_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace nimbro_api_interfaces


#ifndef _WIN32
# define DEPRECATED__nimbro_api_interfaces__srv__CompletionsManage_Response __attribute__((deprecated))
#else
# define DEPRECATED__nimbro_api_interfaces__srv__CompletionsManage_Response __declspec(deprecated)
#endif

namespace nimbro_api_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CompletionsManage_Response_
{
  using Type = CompletionsManage_Response_<ContainerAllocator>;

  explicit CompletionsManage_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
      this->completions_id = "";
    }
  }

  explicit CompletionsManage_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc),
    completions_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
      this->completions_id = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _message_type message;
  using _completions_id_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _completions_id_type completions_id;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->message = _arg;
    return *this;
  }
  Type & set__completions_id(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->completions_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nimbro_api_interfaces::srv::CompletionsManage_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const nimbro_api_interfaces::srv::CompletionsManage_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nimbro_api_interfaces::srv::CompletionsManage_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nimbro_api_interfaces::srv::CompletionsManage_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nimbro_api_interfaces::srv::CompletionsManage_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nimbro_api_interfaces::srv::CompletionsManage_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nimbro_api_interfaces::srv::CompletionsManage_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nimbro_api_interfaces::srv::CompletionsManage_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nimbro_api_interfaces::srv::CompletionsManage_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nimbro_api_interfaces::srv::CompletionsManage_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nimbro_api_interfaces__srv__CompletionsManage_Response
    std::shared_ptr<nimbro_api_interfaces::srv::CompletionsManage_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nimbro_api_interfaces__srv__CompletionsManage_Response
    std::shared_ptr<nimbro_api_interfaces::srv::CompletionsManage_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CompletionsManage_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->completions_id != other.completions_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const CompletionsManage_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CompletionsManage_Response_

// alias to use template instance with default allocator
using CompletionsManage_Response =
  nimbro_api_interfaces::srv::CompletionsManage_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace nimbro_api_interfaces

namespace nimbro_api_interfaces
{

namespace srv
{

struct CompletionsManage
{
  using Request = nimbro_api_interfaces::srv::CompletionsManage_Request;
  using Response = nimbro_api_interfaces::srv::CompletionsManage_Response;
};

}  // namespace srv

}  // namespace nimbro_api_interfaces

#endif  // NIMBRO_API_INTERFACES__SRV__DETAIL__COMPLETIONS_MANAGE__STRUCT_HPP_
