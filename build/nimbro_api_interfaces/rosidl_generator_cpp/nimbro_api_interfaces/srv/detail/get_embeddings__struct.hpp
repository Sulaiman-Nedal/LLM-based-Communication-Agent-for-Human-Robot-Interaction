// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nimbro_api_interfaces:srv/GetEmbeddings.idl
// generated code does not contain a copyright notice

#ifndef NIMBRO_API_INTERFACES__SRV__DETAIL__GET_EMBEDDINGS__STRUCT_HPP_
#define NIMBRO_API_INTERFACES__SRV__DETAIL__GET_EMBEDDINGS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__nimbro_api_interfaces__srv__GetEmbeddings_Request __attribute__((deprecated))
#else
# define DEPRECATED__nimbro_api_interfaces__srv__GetEmbeddings_Request __declspec(deprecated)
#endif

namespace nimbro_api_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetEmbeddings_Request_
{
  using Type = GetEmbeddings_Request_<ContainerAllocator>;

  explicit GetEmbeddings_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit GetEmbeddings_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _texts_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _texts_type texts;

  // setters for named parameter idiom
  Type & set__texts(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->texts = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nimbro_api_interfaces::srv::GetEmbeddings_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const nimbro_api_interfaces::srv::GetEmbeddings_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nimbro_api_interfaces::srv::GetEmbeddings_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nimbro_api_interfaces::srv::GetEmbeddings_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nimbro_api_interfaces::srv::GetEmbeddings_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nimbro_api_interfaces::srv::GetEmbeddings_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nimbro_api_interfaces::srv::GetEmbeddings_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nimbro_api_interfaces::srv::GetEmbeddings_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nimbro_api_interfaces::srv::GetEmbeddings_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nimbro_api_interfaces::srv::GetEmbeddings_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nimbro_api_interfaces__srv__GetEmbeddings_Request
    std::shared_ptr<nimbro_api_interfaces::srv::GetEmbeddings_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nimbro_api_interfaces__srv__GetEmbeddings_Request
    std::shared_ptr<nimbro_api_interfaces::srv::GetEmbeddings_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetEmbeddings_Request_ & other) const
  {
    if (this->texts != other.texts) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetEmbeddings_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetEmbeddings_Request_

// alias to use template instance with default allocator
using GetEmbeddings_Request =
  nimbro_api_interfaces::srv::GetEmbeddings_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace nimbro_api_interfaces


// Include directives for member types
// Member 'embeddings'
#include "nimbro_api_interfaces/msg/detail/embedding__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__nimbro_api_interfaces__srv__GetEmbeddings_Response __attribute__((deprecated))
#else
# define DEPRECATED__nimbro_api_interfaces__srv__GetEmbeddings_Response __declspec(deprecated)
#endif

namespace nimbro_api_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetEmbeddings_Response_
{
  using Type = GetEmbeddings_Response_<ContainerAllocator>;

  explicit GetEmbeddings_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit GetEmbeddings_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
  using _embeddings_type =
    std::vector<nimbro_api_interfaces::msg::Embedding_<ContainerAllocator>, typename ContainerAllocator::template rebind<nimbro_api_interfaces::msg::Embedding_<ContainerAllocator>>::other>;
  _embeddings_type embeddings;

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
  Type & set__embeddings(
    const std::vector<nimbro_api_interfaces::msg::Embedding_<ContainerAllocator>, typename ContainerAllocator::template rebind<nimbro_api_interfaces::msg::Embedding_<ContainerAllocator>>::other> & _arg)
  {
    this->embeddings = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nimbro_api_interfaces::srv::GetEmbeddings_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const nimbro_api_interfaces::srv::GetEmbeddings_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nimbro_api_interfaces::srv::GetEmbeddings_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nimbro_api_interfaces::srv::GetEmbeddings_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nimbro_api_interfaces::srv::GetEmbeddings_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nimbro_api_interfaces::srv::GetEmbeddings_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nimbro_api_interfaces::srv::GetEmbeddings_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nimbro_api_interfaces::srv::GetEmbeddings_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nimbro_api_interfaces::srv::GetEmbeddings_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nimbro_api_interfaces::srv::GetEmbeddings_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nimbro_api_interfaces__srv__GetEmbeddings_Response
    std::shared_ptr<nimbro_api_interfaces::srv::GetEmbeddings_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nimbro_api_interfaces__srv__GetEmbeddings_Response
    std::shared_ptr<nimbro_api_interfaces::srv::GetEmbeddings_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetEmbeddings_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->embeddings != other.embeddings) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetEmbeddings_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetEmbeddings_Response_

// alias to use template instance with default allocator
using GetEmbeddings_Response =
  nimbro_api_interfaces::srv::GetEmbeddings_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace nimbro_api_interfaces

namespace nimbro_api_interfaces
{

namespace srv
{

struct GetEmbeddings
{
  using Request = nimbro_api_interfaces::srv::GetEmbeddings_Request;
  using Response = nimbro_api_interfaces::srv::GetEmbeddings_Response;
};

}  // namespace srv

}  // namespace nimbro_api_interfaces

#endif  // NIMBRO_API_INTERFACES__SRV__DETAIL__GET_EMBEDDINGS__STRUCT_HPP_
