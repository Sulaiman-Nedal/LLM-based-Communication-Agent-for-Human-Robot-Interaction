
bool     success        # Indicates the success or failure of the service call
string   message        # A natural language summary of the service call outcome
string[] completions_id # A list of the IDs of all multiplexed completions nodes
bool[]   acquired       # A corresponding list signalling if a completions node is currently acquired