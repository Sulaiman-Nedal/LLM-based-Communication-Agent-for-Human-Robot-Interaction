// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nimbro_api_interfaces:srv/CompletionsGetStatus.idl
// generated code does not contain a copyright notice

#ifndef NIMBRO_API_INTERFACES__SRV__DETAIL__COMPLETIONS_GET_STATUS__BUILDER_HPP_
#define NIMBRO_API_INTERFACES__SRV__DETAIL__COMPLETIONS_GET_STATUS__BUILDER_HPP_

#include "nimbro_api_interfaces/srv/detail/completions_get_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace nimbro_api_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nimbro_api_interfaces::srv::CompletionsGetStatus_Request>()
{
  return ::nimbro_api_interfaces::srv::CompletionsGetStatus_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace nimbro_api_interfaces


namespace nimbro_api_interfaces
{

namespace srv
{

namespace builder
{

class Init_CompletionsGetStatus_Response_acquired
{
public:
  explicit Init_CompletionsGetStatus_Response_acquired(::nimbro_api_interfaces::srv::CompletionsGetStatus_Response & msg)
  : msg_(msg)
  {}
  ::nimbro_api_interfaces::srv::CompletionsGetStatus_Response acquired(::nimbro_api_interfaces::srv::CompletionsGetStatus_Response::_acquired_type arg)
  {
    msg_.acquired = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nimbro_api_interfaces::srv::CompletionsGetStatus_Response msg_;
};

class Init_CompletionsGetStatus_Response_completions_id
{
public:
  explicit Init_CompletionsGetStatus_Response_completions_id(::nimbro_api_interfaces::srv::CompletionsGetStatus_Response & msg)
  : msg_(msg)
  {}
  Init_CompletionsGetStatus_Response_acquired completions_id(::nimbro_api_interfaces::srv::CompletionsGetStatus_Response::_completions_id_type arg)
  {
    msg_.completions_id = std::move(arg);
    return Init_CompletionsGetStatus_Response_acquired(msg_);
  }

private:
  ::nimbro_api_interfaces::srv::CompletionsGetStatus_Response msg_;
};

class Init_CompletionsGetStatus_Response_message
{
public:
  explicit Init_CompletionsGetStatus_Response_message(::nimbro_api_interfaces::srv::CompletionsGetStatus_Response & msg)
  : msg_(msg)
  {}
  Init_CompletionsGetStatus_Response_completions_id message(::nimbro_api_interfaces::srv::CompletionsGetStatus_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_CompletionsGetStatus_Response_completions_id(msg_);
  }

private:
  ::nimbro_api_interfaces::srv::CompletionsGetStatus_Response msg_;
};

class Init_CompletionsGetStatus_Response_success
{
public:
  Init_CompletionsGetStatus_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CompletionsGetStatus_Response_message success(::nimbro_api_interfaces::srv::CompletionsGetStatus_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_CompletionsGetStatus_Response_message(msg_);
  }

private:
  ::nimbro_api_interfaces::srv::CompletionsGetStatus_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nimbro_api_interfaces::srv::CompletionsGetStatus_Response>()
{
  return nimbro_api_interfaces::srv::builder::Init_CompletionsGetStatus_Response_success();
}

}  // namespace nimbro_api_interfaces

#endif  // NIMBRO_API_INTERFACES__SRV__DETAIL__COMPLETIONS_GET_STATUS__BUILDER_HPP_
