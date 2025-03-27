// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nimbro_api_interfaces:srv/TriggerFeedback.idl
// generated code does not contain a copyright notice

#ifndef NIMBRO_API_INTERFACES__SRV__DETAIL__TRIGGER_FEEDBACK__BUILDER_HPP_
#define NIMBRO_API_INTERFACES__SRV__DETAIL__TRIGGER_FEEDBACK__BUILDER_HPP_

#include "nimbro_api_interfaces/srv/detail/trigger_feedback__struct.hpp"
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
auto build<::nimbro_api_interfaces::srv::TriggerFeedback_Request>()
{
  return ::nimbro_api_interfaces::srv::TriggerFeedback_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace nimbro_api_interfaces


namespace nimbro_api_interfaces
{

namespace srv
{

namespace builder
{

class Init_TriggerFeedback_Response_message
{
public:
  explicit Init_TriggerFeedback_Response_message(::nimbro_api_interfaces::srv::TriggerFeedback_Response & msg)
  : msg_(msg)
  {}
  ::nimbro_api_interfaces::srv::TriggerFeedback_Response message(::nimbro_api_interfaces::srv::TriggerFeedback_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nimbro_api_interfaces::srv::TriggerFeedback_Response msg_;
};

class Init_TriggerFeedback_Response_success
{
public:
  Init_TriggerFeedback_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TriggerFeedback_Response_message success(::nimbro_api_interfaces::srv::TriggerFeedback_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_TriggerFeedback_Response_message(msg_);
  }

private:
  ::nimbro_api_interfaces::srv::TriggerFeedback_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nimbro_api_interfaces::srv::TriggerFeedback_Response>()
{
  return nimbro_api_interfaces::srv::builder::Init_TriggerFeedback_Response_success();
}

}  // namespace nimbro_api_interfaces

#endif  // NIMBRO_API_INTERFACES__SRV__DETAIL__TRIGGER_FEEDBACK__BUILDER_HPP_
