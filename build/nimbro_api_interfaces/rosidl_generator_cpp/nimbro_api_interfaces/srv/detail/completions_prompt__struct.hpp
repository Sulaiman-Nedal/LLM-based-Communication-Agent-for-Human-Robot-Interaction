// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nimbro_api_interfaces:srv/CompletionsPrompt.idl
// generated code does not contain a copyright notice

#ifndef NIMBRO_API_INTERFACES__SRV__DETAIL__COMPLETIONS_PROMPT__STRUCT_HPP_
#define NIMBRO_API_INTERFACES__SRV__DETAIL__COMPLETIONS_PROMPT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__nimbro_api_interfaces__srv__CompletionsPrompt_Request __attribute__((deprecated))
#else
# define DEPRECATED__nimbro_api_interfaces__srv__CompletionsPrompt_Request __declspec(deprecated)
#endif

namespace nimbro_api_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CompletionsPrompt_Request_
{
  using Type = CompletionsPrompt_Request_<ContainerAllocator>;

  explicit CompletionsPrompt_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->completions_id = "";
      this->role = "";
      this->text = "";
      this->reset_context = false;
      this->tool_response_id = "";
      this->response_type = "";
    }
  }

  explicit CompletionsPrompt_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : completions_id(_alloc),
    role(_alloc),
    text(_alloc),
    tool_response_id(_alloc),
    response_type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->completions_id = "";
      this->role = "";
      this->text = "";
      this->reset_context = false;
      this->tool_response_id = "";
      this->response_type = "";
    }
  }

  // field types and members
  using _completions_id_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _completions_id_type completions_id;
  using _role_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _role_type role;
  using _text_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _text_type text;
  using _reset_context_type =
    bool;
  _reset_context_type reset_context;
  using _tool_response_id_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _tool_response_id_type tool_response_id;
  using _response_type_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _response_type_type response_type;

  // setters for named parameter idiom
  Type & set__completions_id(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->completions_id = _arg;
    return *this;
  }
  Type & set__role(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->role = _arg;
    return *this;
  }
  Type & set__text(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->text = _arg;
    return *this;
  }
  Type & set__reset_context(
    const bool & _arg)
  {
    this->reset_context = _arg;
    return *this;
  }
  Type & set__tool_response_id(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->tool_response_id = _arg;
    return *this;
  }
  Type & set__response_type(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->response_type = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nimbro_api_interfaces::srv::CompletionsPrompt_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const nimbro_api_interfaces::srv::CompletionsPrompt_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nimbro_api_interfaces::srv::CompletionsPrompt_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nimbro_api_interfaces::srv::CompletionsPrompt_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nimbro_api_interfaces::srv::CompletionsPrompt_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nimbro_api_interfaces::srv::CompletionsPrompt_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nimbro_api_interfaces::srv::CompletionsPrompt_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nimbro_api_interfaces::srv::CompletionsPrompt_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nimbro_api_interfaces::srv::CompletionsPrompt_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nimbro_api_interfaces::srv::CompletionsPrompt_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nimbro_api_interfaces__srv__CompletionsPrompt_Request
    std::shared_ptr<nimbro_api_interfaces::srv::CompletionsPrompt_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nimbro_api_interfaces__srv__CompletionsPrompt_Request
    std::shared_ptr<nimbro_api_interfaces::srv::CompletionsPrompt_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CompletionsPrompt_Request_ & other) const
  {
    if (this->completions_id != other.completions_id) {
      return false;
    }
    if (this->role != other.role) {
      return false;
    }
    if (this->text != other.text) {
      return false;
    }
    if (this->reset_context != other.reset_context) {
      return false;
    }
    if (this->tool_response_id != other.tool_response_id) {
      return false;
    }
    if (this->response_type != other.response_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const CompletionsPrompt_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CompletionsPrompt_Request_

// alias to use template instance with default allocator
using CompletionsPrompt_Request =
  nimbro_api_interfaces::srv::CompletionsPrompt_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace nimbro_api_interfaces


#ifndef _WIN32
# define DEPRECATED__nimbro_api_interfaces__srv__CompletionsPrompt_Response __attribute__((deprecated))
#else
# define DEPRECATED__nimbro_api_interfaces__srv__CompletionsPrompt_Response __declspec(deprecated)
#endif

namespace nimbro_api_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CompletionsPrompt_Response_
{
  using Type = CompletionsPrompt_Response_<ContainerAllocator>;

  explicit CompletionsPrompt_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
      this->text = "";
    }
  }

  explicit CompletionsPrompt_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc),
    text(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
      this->text = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _message_type message;
  using _text_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _text_type text;
  using _tool_calls_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _tool_calls_type tool_calls;

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
  Type & set__text(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->text = _arg;
    return *this;
  }
  Type & set__tool_calls(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->tool_calls = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nimbro_api_interfaces::srv::CompletionsPrompt_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const nimbro_api_interfaces::srv::CompletionsPrompt_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nimbro_api_interfaces::srv::CompletionsPrompt_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nimbro_api_interfaces::srv::CompletionsPrompt_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nimbro_api_interfaces::srv::CompletionsPrompt_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nimbro_api_interfaces::srv::CompletionsPrompt_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nimbro_api_interfaces::srv::CompletionsPrompt_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nimbro_api_interfaces::srv::CompletionsPrompt_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nimbro_api_interfaces::srv::CompletionsPrompt_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nimbro_api_interfaces::srv::CompletionsPrompt_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nimbro_api_interfaces__srv__CompletionsPrompt_Response
    std::shared_ptr<nimbro_api_interfaces::srv::CompletionsPrompt_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nimbro_api_interfaces__srv__CompletionsPrompt_Response
    std::shared_ptr<nimbro_api_interfaces::srv::CompletionsPrompt_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CompletionsPrompt_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->text != other.text) {
      return false;
    }
    if (this->tool_calls != other.tool_calls) {
      return false;
    }
    return true;
  }
  bool operator!=(const CompletionsPrompt_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CompletionsPrompt_Response_

// alias to use template instance with default allocator
using CompletionsPrompt_Response =
  nimbro_api_interfaces::srv::CompletionsPrompt_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace nimbro_api_interfaces

namespace nimbro_api_interfaces
{

namespace srv
{

struct CompletionsPrompt
{
  using Request = nimbro_api_interfaces::srv::CompletionsPrompt_Request;
  using Response = nimbro_api_interfaces::srv::CompletionsPrompt_Response;
};

}  // namespace srv

}  // namespace nimbro_api_interfaces

#endif  // NIMBRO_API_INTERFACES__SRV__DETAIL__COMPLETIONS_PROMPT__STRUCT_HPP_
