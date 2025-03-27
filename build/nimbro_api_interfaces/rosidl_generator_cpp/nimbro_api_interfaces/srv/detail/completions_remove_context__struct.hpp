// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nimbro_api_interfaces:srv/CompletionsRemoveContext.idl
// generated code does not contain a copyright notice

#ifndef NIMBRO_API_INTERFACES__SRV__DETAIL__COMPLETIONS_REMOVE_CONTEXT__STRUCT_HPP_
#define NIMBRO_API_INTERFACES__SRV__DETAIL__COMPLETIONS_REMOVE_CONTEXT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__nimbro_api_interfaces__srv__CompletionsRemoveContext_Request __attribute__((deprecated))
#else
# define DEPRECATED__nimbro_api_interfaces__srv__CompletionsRemoveContext_Request __declspec(deprecated)
#endif

namespace nimbro_api_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CompletionsRemoveContext_Request_
{
  using Type = CompletionsRemoveContext_Request_<ContainerAllocator>;

  explicit CompletionsRemoveContext_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->indexing_last_to_first = true;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->completions_id = "";
      this->remove_all = false;
      this->indexing_last_to_first = false;
      this->index = 0ul;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->completions_id = "";
      this->remove_all = false;
      this->index = 0ul;
    }
  }

  explicit CompletionsRemoveContext_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : completions_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->indexing_last_to_first = true;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->completions_id = "";
      this->remove_all = false;
      this->indexing_last_to_first = false;
      this->index = 0ul;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->completions_id = "";
      this->remove_all = false;
      this->index = 0ul;
    }
  }

  // field types and members
  using _completions_id_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _completions_id_type completions_id;
  using _remove_all_type =
    bool;
  _remove_all_type remove_all;
  using _indexing_last_to_first_type =
    bool;
  _indexing_last_to_first_type indexing_last_to_first;
  using _index_type =
    uint32_t;
  _index_type index;

  // setters for named parameter idiom
  Type & set__completions_id(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->completions_id = _arg;
    return *this;
  }
  Type & set__remove_all(
    const bool & _arg)
  {
    this->remove_all = _arg;
    return *this;
  }
  Type & set__indexing_last_to_first(
    const bool & _arg)
  {
    this->indexing_last_to_first = _arg;
    return *this;
  }
  Type & set__index(
    const uint32_t & _arg)
  {
    this->index = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nimbro_api_interfaces::srv::CompletionsRemoveContext_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const nimbro_api_interfaces::srv::CompletionsRemoveContext_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nimbro_api_interfaces::srv::CompletionsRemoveContext_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nimbro_api_interfaces::srv::CompletionsRemoveContext_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nimbro_api_interfaces::srv::CompletionsRemoveContext_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nimbro_api_interfaces::srv::CompletionsRemoveContext_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nimbro_api_interfaces::srv::CompletionsRemoveContext_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nimbro_api_interfaces::srv::CompletionsRemoveContext_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nimbro_api_interfaces::srv::CompletionsRemoveContext_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nimbro_api_interfaces::srv::CompletionsRemoveContext_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nimbro_api_interfaces__srv__CompletionsRemoveContext_Request
    std::shared_ptr<nimbro_api_interfaces::srv::CompletionsRemoveContext_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nimbro_api_interfaces__srv__CompletionsRemoveContext_Request
    std::shared_ptr<nimbro_api_interfaces::srv::CompletionsRemoveContext_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CompletionsRemoveContext_Request_ & other) const
  {
    if (this->completions_id != other.completions_id) {
      return false;
    }
    if (this->remove_all != other.remove_all) {
      return false;
    }
    if (this->indexing_last_to_first != other.indexing_last_to_first) {
      return false;
    }
    if (this->index != other.index) {
      return false;
    }
    return true;
  }
  bool operator!=(const CompletionsRemoveContext_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CompletionsRemoveContext_Request_

// alias to use template instance with default allocator
using CompletionsRemoveContext_Request =
  nimbro_api_interfaces::srv::CompletionsRemoveContext_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace nimbro_api_interfaces


#ifndef _WIN32
# define DEPRECATED__nimbro_api_interfaces__srv__CompletionsRemoveContext_Response __attribute__((deprecated))
#else
# define DEPRECATED__nimbro_api_interfaces__srv__CompletionsRemoveContext_Response __declspec(deprecated)
#endif

namespace nimbro_api_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CompletionsRemoveContext_Response_
{
  using Type = CompletionsRemoveContext_Response_<ContainerAllocator>;

  explicit CompletionsRemoveContext_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit CompletionsRemoveContext_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _message_type message;

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

  // constant declarations

  // pointer types
  using RawPtr =
    nimbro_api_interfaces::srv::CompletionsRemoveContext_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const nimbro_api_interfaces::srv::CompletionsRemoveContext_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nimbro_api_interfaces::srv::CompletionsRemoveContext_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nimbro_api_interfaces::srv::CompletionsRemoveContext_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nimbro_api_interfaces::srv::CompletionsRemoveContext_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nimbro_api_interfaces::srv::CompletionsRemoveContext_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nimbro_api_interfaces::srv::CompletionsRemoveContext_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nimbro_api_interfaces::srv::CompletionsRemoveContext_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nimbro_api_interfaces::srv::CompletionsRemoveContext_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nimbro_api_interfaces::srv::CompletionsRemoveContext_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nimbro_api_interfaces__srv__CompletionsRemoveContext_Response
    std::shared_ptr<nimbro_api_interfaces::srv::CompletionsRemoveContext_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nimbro_api_interfaces__srv__CompletionsRemoveContext_Response
    std::shared_ptr<nimbro_api_interfaces::srv::CompletionsRemoveContext_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CompletionsRemoveContext_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const CompletionsRemoveContext_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CompletionsRemoveContext_Response_

// alias to use template instance with default allocator
using CompletionsRemoveContext_Response =
  nimbro_api_interfaces::srv::CompletionsRemoveContext_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace nimbro_api_interfaces

namespace nimbro_api_interfaces
{

namespace srv
{

struct CompletionsRemoveContext
{
  using Request = nimbro_api_interfaces::srv::CompletionsRemoveContext_Request;
  using Response = nimbro_api_interfaces::srv::CompletionsRemoveContext_Response;
};

}  // namespace srv

}  // namespace nimbro_api_interfaces

#endif  // NIMBRO_API_INTERFACES__SRV__DETAIL__COMPLETIONS_REMOVE_CONTEXT__STRUCT_HPP_
