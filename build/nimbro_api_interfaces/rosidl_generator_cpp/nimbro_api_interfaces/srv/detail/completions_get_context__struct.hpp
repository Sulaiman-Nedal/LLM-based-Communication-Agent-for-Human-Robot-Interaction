// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nimbro_api_interfaces:srv/CompletionsGetContext.idl
// generated code does not contain a copyright notice

#ifndef NIMBRO_API_INTERFACES__SRV__DETAIL__COMPLETIONS_GET_CONTEXT__STRUCT_HPP_
#define NIMBRO_API_INTERFACES__SRV__DETAIL__COMPLETIONS_GET_CONTEXT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__nimbro_api_interfaces__srv__CompletionsGetContext_Request __attribute__((deprecated))
#else
# define DEPRECATED__nimbro_api_interfaces__srv__CompletionsGetContext_Request __declspec(deprecated)
#endif

namespace nimbro_api_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CompletionsGetContext_Request_
{
  using Type = CompletionsGetContext_Request_<ContainerAllocator>;

  explicit CompletionsGetContext_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->completions_id = "";
    }
  }

  explicit CompletionsGetContext_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : completions_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->completions_id = "";
    }
  }

  // field types and members
  using _completions_id_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _completions_id_type completions_id;

  // setters for named parameter idiom
  Type & set__completions_id(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->completions_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nimbro_api_interfaces::srv::CompletionsGetContext_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const nimbro_api_interfaces::srv::CompletionsGetContext_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nimbro_api_interfaces::srv::CompletionsGetContext_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nimbro_api_interfaces::srv::CompletionsGetContext_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nimbro_api_interfaces::srv::CompletionsGetContext_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nimbro_api_interfaces::srv::CompletionsGetContext_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nimbro_api_interfaces::srv::CompletionsGetContext_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nimbro_api_interfaces::srv::CompletionsGetContext_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nimbro_api_interfaces::srv::CompletionsGetContext_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nimbro_api_interfaces::srv::CompletionsGetContext_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nimbro_api_interfaces__srv__CompletionsGetContext_Request
    std::shared_ptr<nimbro_api_interfaces::srv::CompletionsGetContext_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nimbro_api_interfaces__srv__CompletionsGetContext_Request
    std::shared_ptr<nimbro_api_interfaces::srv::CompletionsGetContext_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CompletionsGetContext_Request_ & other) const
  {
    if (this->completions_id != other.completions_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const CompletionsGetContext_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CompletionsGetContext_Request_

// alias to use template instance with default allocator
using CompletionsGetContext_Request =
  nimbro_api_interfaces::srv::CompletionsGetContext_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace nimbro_api_interfaces


#ifndef _WIN32
# define DEPRECATED__nimbro_api_interfaces__srv__CompletionsGetContext_Response __attribute__((deprecated))
#else
# define DEPRECATED__nimbro_api_interfaces__srv__CompletionsGetContext_Response __declspec(deprecated)
#endif

namespace nimbro_api_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CompletionsGetContext_Response_
{
  using Type = CompletionsGetContext_Response_<ContainerAllocator>;

  explicit CompletionsGetContext_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
      this->messages = 0ul;
    }
  }

  explicit CompletionsGetContext_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
      this->messages = 0ul;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _message_type message;
  using _context_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _context_type context;
  using _messages_type =
    uint32_t;
  _messages_type messages;

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
  Type & set__context(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->context = _arg;
    return *this;
  }
  Type & set__messages(
    const uint32_t & _arg)
  {
    this->messages = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nimbro_api_interfaces::srv::CompletionsGetContext_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const nimbro_api_interfaces::srv::CompletionsGetContext_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nimbro_api_interfaces::srv::CompletionsGetContext_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nimbro_api_interfaces::srv::CompletionsGetContext_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nimbro_api_interfaces::srv::CompletionsGetContext_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nimbro_api_interfaces::srv::CompletionsGetContext_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nimbro_api_interfaces::srv::CompletionsGetContext_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nimbro_api_interfaces::srv::CompletionsGetContext_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nimbro_api_interfaces::srv::CompletionsGetContext_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nimbro_api_interfaces::srv::CompletionsGetContext_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nimbro_api_interfaces__srv__CompletionsGetContext_Response
    std::shared_ptr<nimbro_api_interfaces::srv::CompletionsGetContext_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nimbro_api_interfaces__srv__CompletionsGetContext_Response
    std::shared_ptr<nimbro_api_interfaces::srv::CompletionsGetContext_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CompletionsGetContext_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->context != other.context) {
      return false;
    }
    if (this->messages != other.messages) {
      return false;
    }
    return true;
  }
  bool operator!=(const CompletionsGetContext_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CompletionsGetContext_Response_

// alias to use template instance with default allocator
using CompletionsGetContext_Response =
  nimbro_api_interfaces::srv::CompletionsGetContext_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace nimbro_api_interfaces

namespace nimbro_api_interfaces
{

namespace srv
{

struct CompletionsGetContext
{
  using Request = nimbro_api_interfaces::srv::CompletionsGetContext_Request;
  using Response = nimbro_api_interfaces::srv::CompletionsGetContext_Response;
};

}  // namespace srv

}  // namespace nimbro_api_interfaces

#endif  // NIMBRO_API_INTERFACES__SRV__DETAIL__COMPLETIONS_GET_CONTEXT__STRUCT_HPP_
