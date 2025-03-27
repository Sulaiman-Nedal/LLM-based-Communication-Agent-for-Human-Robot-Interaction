// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nimbro_api_interfaces:srv/GetImage.idl
// generated code does not contain a copyright notice

#ifndef NIMBRO_API_INTERFACES__SRV__DETAIL__GET_IMAGE__BUILDER_HPP_
#define NIMBRO_API_INTERFACES__SRV__DETAIL__GET_IMAGE__BUILDER_HPP_

#include "nimbro_api_interfaces/srv/detail/get_image__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace nimbro_api_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetImage_Request_size
{
public:
  explicit Init_GetImage_Request_size(::nimbro_api_interfaces::srv::GetImage_Request & msg)
  : msg_(msg)
  {}
  ::nimbro_api_interfaces::srv::GetImage_Request size(::nimbro_api_interfaces::srv::GetImage_Request::_size_type arg)
  {
    msg_.size = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nimbro_api_interfaces::srv::GetImage_Request msg_;
};

class Init_GetImage_Request_style
{
public:
  explicit Init_GetImage_Request_style(::nimbro_api_interfaces::srv::GetImage_Request & msg)
  : msg_(msg)
  {}
  Init_GetImage_Request_size style(::nimbro_api_interfaces::srv::GetImage_Request::_style_type arg)
  {
    msg_.style = std::move(arg);
    return Init_GetImage_Request_size(msg_);
  }

private:
  ::nimbro_api_interfaces::srv::GetImage_Request msg_;
};

class Init_GetImage_Request_quality
{
public:
  explicit Init_GetImage_Request_quality(::nimbro_api_interfaces::srv::GetImage_Request & msg)
  : msg_(msg)
  {}
  Init_GetImage_Request_style quality(::nimbro_api_interfaces::srv::GetImage_Request::_quality_type arg)
  {
    msg_.quality = std::move(arg);
    return Init_GetImage_Request_style(msg_);
  }

private:
  ::nimbro_api_interfaces::srv::GetImage_Request msg_;
};

class Init_GetImage_Request_model
{
public:
  explicit Init_GetImage_Request_model(::nimbro_api_interfaces::srv::GetImage_Request & msg)
  : msg_(msg)
  {}
  Init_GetImage_Request_quality model(::nimbro_api_interfaces::srv::GetImage_Request::_model_type arg)
  {
    msg_.model = std::move(arg);
    return Init_GetImage_Request_quality(msg_);
  }

private:
  ::nimbro_api_interfaces::srv::GetImage_Request msg_;
};

class Init_GetImage_Request_prompt
{
public:
  Init_GetImage_Request_prompt()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetImage_Request_model prompt(::nimbro_api_interfaces::srv::GetImage_Request::_prompt_type arg)
  {
    msg_.prompt = std::move(arg);
    return Init_GetImage_Request_model(msg_);
  }

private:
  ::nimbro_api_interfaces::srv::GetImage_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nimbro_api_interfaces::srv::GetImage_Request>()
{
  return nimbro_api_interfaces::srv::builder::Init_GetImage_Request_prompt();
}

}  // namespace nimbro_api_interfaces


namespace nimbro_api_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetImage_Response_path
{
public:
  explicit Init_GetImage_Response_path(::nimbro_api_interfaces::srv::GetImage_Response & msg)
  : msg_(msg)
  {}
  ::nimbro_api_interfaces::srv::GetImage_Response path(::nimbro_api_interfaces::srv::GetImage_Response::_path_type arg)
  {
    msg_.path = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nimbro_api_interfaces::srv::GetImage_Response msg_;
};

class Init_GetImage_Response_image
{
public:
  explicit Init_GetImage_Response_image(::nimbro_api_interfaces::srv::GetImage_Response & msg)
  : msg_(msg)
  {}
  Init_GetImage_Response_path image(::nimbro_api_interfaces::srv::GetImage_Response::_image_type arg)
  {
    msg_.image = std::move(arg);
    return Init_GetImage_Response_path(msg_);
  }

private:
  ::nimbro_api_interfaces::srv::GetImage_Response msg_;
};

class Init_GetImage_Response_message
{
public:
  explicit Init_GetImage_Response_message(::nimbro_api_interfaces::srv::GetImage_Response & msg)
  : msg_(msg)
  {}
  Init_GetImage_Response_image message(::nimbro_api_interfaces::srv::GetImage_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_GetImage_Response_image(msg_);
  }

private:
  ::nimbro_api_interfaces::srv::GetImage_Response msg_;
};

class Init_GetImage_Response_success
{
public:
  Init_GetImage_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetImage_Response_message success(::nimbro_api_interfaces::srv::GetImage_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetImage_Response_message(msg_);
  }

private:
  ::nimbro_api_interfaces::srv::GetImage_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nimbro_api_interfaces::srv::GetImage_Response>()
{
  return nimbro_api_interfaces::srv::builder::Init_GetImage_Response_success();
}

}  // namespace nimbro_api_interfaces

#endif  // NIMBRO_API_INTERFACES__SRV__DETAIL__GET_IMAGE__BUILDER_HPP_
