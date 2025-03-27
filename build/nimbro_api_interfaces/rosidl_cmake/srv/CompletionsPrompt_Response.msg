
bool     success            # Indicates the success or failure of the service call
string   message            # A natural language summary of the service call outcome
string   text               # The text response of the completion
string[] tool_calls         # The tool response of the completion as a list of JSON objects {"id":"", "name":"", "arguments":"[{"arg_1":"", ...}, ...]"}