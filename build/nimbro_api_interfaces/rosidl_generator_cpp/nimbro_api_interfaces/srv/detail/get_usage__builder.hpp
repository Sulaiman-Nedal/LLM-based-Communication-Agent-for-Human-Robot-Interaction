// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nimbro_api_interfaces:srv/GetUsage.idl
// generated code does not contain a copyright notice

#ifndef NIMBRO_API_INTERFACES__SRV__DETAIL__GET_USAGE__BUILDER_HPP_
#define NIMBRO_API_INTERFACES__SRV__DETAIL__GET_USAGE__BUILDER_HPP_

#include "nimbro_api_interfaces/srv/detail/get_usage__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace nimbro_api_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetUsage_Request_stamp_end
{
public:
  explicit Init_GetUsage_Request_stamp_end(::nimbro_api_interfaces::srv::GetUsage_Request & msg)
  : msg_(msg)
  {}
  ::nimbro_api_interfaces::srv::GetUsage_Request stamp_end(::nimbro_api_interfaces::srv::GetUsage_Request::_stamp_end_type arg)
  {
    msg_.stamp_end = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nimbro_api_interfaces::srv::GetUsage_Request msg_;
};

class Init_GetUsage_Request_stamp_start
{
public:
  explicit Init_GetUsage_Request_stamp_start(::nimbro_api_interfaces::srv::GetUsage_Request & msg)
  : msg_(msg)
  {}
  Init_GetUsage_Request_stamp_end stamp_start(::nimbro_api_interfaces::srv::GetUsage_Request::_stamp_start_type arg)
  {
    msg_.stamp_start = std::move(arg);
    return Init_GetUsage_Request_stamp_end(msg_);
  }

private:
  ::nimbro_api_interfaces::srv::GetUsage_Request msg_;
};

class Init_GetUsage_Request_api_type
{
public:
  Init_GetUsage_Request_api_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetUsage_Request_stamp_start api_type(::nimbro_api_interfaces::srv::GetUsage_Request::_api_type_type arg)
  {
    msg_.api_type = std::move(arg);
    return Init_GetUsage_Request_stamp_start(msg_);
  }

private:
  ::nimbro_api_interfaces::srv::GetUsage_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nimbro_api_interfaces::srv::GetUsage_Request>()
{
  return nimbro_api_interfaces::srv::builder::Init_GetUsage_Request_api_type();
}

}  // namespace nimbro_api_interfaces


namespace nimbro_api_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetUsage_Response_usage
{
public:
  explicit Init_GetUsage_Response_usage(::nimbro_api_interfaces::srv::GetUsage_Response & msg)
  : msg_(msg)
  {}
  ::nimbro_api_interfaces::srv::GetUsage_Response usage(::nimbro_api_interfaces::srv::GetUsage_Response::_usage_type arg)
  {
    msg_.usage = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nimbro_api_interfaces::srv::GetUsage_Response msg_;
};

class Init_GetUsage_Response_message
{
public:
  explicit Init_GetUsage_Response_message(::nimbro_api_interfaces::srv::GetUsage_Response & msg)
  : msg_(msg)
  {}
  Init_GetUsage_Response_usage message(::nimbro_api_interfaces::srv::GetUsage_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_GetUsage_Response_usage(msg_);
  }

private:
  ::nimbro_api_interfaces::srv::GetUsage_Response msg_;
};

class Init_GetUsage_Response_success
{
public:
  Init_GetUsage_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetUsage_Response_message success(::nimbro_api_interfaces::srv::GetUsage_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetUsage_Response_message(msg_);
  }

private:
  ::nimbro_api_interfaces::srv::GetUsage_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nimbro_api_interfaces::srv::GetUsage_Response>()
{
  return nimbro_api_interfaces::srv::builder::Init_GetUsage_Response_success();
}

}  // namespace nimbro_api_interfaces

#endif  // NIMBRO_API_INTERFACES__SRV__DETAIL__GET_USAGE__BUILDER_HPP_
