string   completions_id     # Specifies the target completions node when addressing the completions_multiplexer
string   role               # The role of the added message; Must be in list ['system','user','assistant','tool','json']
string   text               # The text content of the message added; For multi-modal messages (images, tool calls, etc.) use 'json' role according to the documentation (ignoring role and tool_response_id fields)
bool     reset_context      # Clears the context of the completions node so that the added message will be its first element
string   tool_response_id   # If not empty, this indicates that the text is a response to a tool call with that ID
string   response_type      # Must be 'none' (no response, just add to context), 'text' (response must be text), 'tool name' (response must call specified tool), 'auto' (whatever), or 'always' (response must contain at least one tool call)
