// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nimbro_api_interfaces:srv/GetImage.idl
// generated code does not contain a copyright notice

#ifndef NIMBRO_API_INTERFACES__SRV__DETAIL__GET_IMAGE__STRUCT_HPP_
#define NIMBRO_API_INTERFACES__SRV__DETAIL__GET_IMAGE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__nimbro_api_interfaces__srv__GetImage_Request __attribute__((deprecated))
#else
# define DEPRECATED__nimbro_api_interfaces__srv__GetImage_Request __declspec(deprecated)
#endif

namespace nimbro_api_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetImage_Request_
{
  using Type = GetImage_Request_<ContainerAllocator>;

  explicit GetImage_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->prompt = "";
      this->model = "";
      this->quality = "";
      this->style = "";
      this->size = "";
    }
  }

  explicit GetImage_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : prompt(_alloc),
    model(_alloc),
    quality(_alloc),
    style(_alloc),
    size(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->prompt = "";
      this->model = "";
      this->quality = "";
      this->style = "";
      this->size = "";
    }
  }

  // field types and members
  using _prompt_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _prompt_type prompt;
  using _model_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _model_type model;
  using _quality_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _quality_type quality;
  using _style_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _style_type style;
  using _size_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _size_type size;

  // setters for named parameter idiom
  Type & set__prompt(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->prompt = _arg;
    return *this;
  }
  Type & set__model(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->model = _arg;
    return *this;
  }
  Type & set__quality(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->quality = _arg;
    return *this;
  }
  Type & set__style(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->style = _arg;
    return *this;
  }
  Type & set__size(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->size = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nimbro_api_interfaces::srv::GetImage_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const nimbro_api_interfaces::srv::GetImage_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nimbro_api_interfaces::srv::GetImage_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nimbro_api_interfaces::srv::GetImage_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nimbro_api_interfaces::srv::GetImage_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nimbro_api_interfaces::srv::GetImage_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nimbro_api_interfaces::srv::GetImage_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nimbro_api_interfaces::srv::GetImage_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nimbro_api_interfaces::srv::GetImage_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nimbro_api_interfaces::srv::GetImage_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nimbro_api_interfaces__srv__GetImage_Request
    std::shared_ptr<nimbro_api_interfaces::srv::GetImage_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nimbro_api_interfaces__srv__GetImage_Request
    std::shared_ptr<nimbro_api_interfaces::srv::GetImage_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetImage_Request_ & other) const
  {
    if (this->prompt != other.prompt) {
      return false;
    }
    if (this->model != other.model) {
      return false;
    }
    if (this->quality != other.quality) {
      return false;
    }
    if (this->style != other.style) {
      return false;
    }
    if (this->size != other.size) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetImage_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetImage_Request_

// alias to use template instance with default allocator
using GetImage_Request =
  nimbro_api_interfaces::srv::GetImage_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace nimbro_api_interfaces


// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__nimbro_api_interfaces__srv__GetImage_Response __attribute__((deprecated))
#else
# define DEPRECATED__nimbro_api_interfaces__srv__GetImage_Response __declspec(deprecated)
#endif

namespace nimbro_api_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetImage_Response_
{
  using Type = GetImage_Response_<ContainerAllocator>;

  explicit GetImage_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : image(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
      this->path = "";
    }
  }

  explicit GetImage_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc),
    image(_alloc, _init),
    path(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
      this->path = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _message_type message;
  using _image_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _image_type image;
  using _path_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _path_type path;

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
  Type & set__image(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->image = _arg;
    return *this;
  }
  Type & set__path(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->path = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nimbro_api_interfaces::srv::GetImage_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const nimbro_api_interfaces::srv::GetImage_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nimbro_api_interfaces::srv::GetImage_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nimbro_api_interfaces::srv::GetImage_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nimbro_api_interfaces::srv::GetImage_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nimbro_api_interfaces::srv::GetImage_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nimbro_api_interfaces::srv::GetImage_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nimbro_api_interfaces::srv::GetImage_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nimbro_api_interfaces::srv::GetImage_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nimbro_api_interfaces::srv::GetImage_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nimbro_api_interfaces__srv__GetImage_Response
    std::shared_ptr<nimbro_api_interfaces::srv::GetImage_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nimbro_api_interfaces__srv__GetImage_Response
    std::shared_ptr<nimbro_api_interfaces::srv::GetImage_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetImage_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->image != other.image) {
      return false;
    }
    if (this->path != other.path) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetImage_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetImage_Response_

// alias to use template instance with default allocator
using GetImage_Response =
  nimbro_api_interfaces::srv::GetImage_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace nimbro_api_interfaces

namespace nimbro_api_interfaces
{

namespace srv
{

struct GetImage
{
  using Request = nimbro_api_interfaces::srv::GetImage_Request;
  using Response = nimbro_api_interfaces::srv::GetImage_Response;
};

}  // namespace srv

}  // namespace nimbro_api_interfaces

#endif  // NIMBRO_API_INTERFACES__SRV__DETAIL__GET_IMAGE__STRUCT_HPP_
