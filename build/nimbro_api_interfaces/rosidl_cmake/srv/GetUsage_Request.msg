string api_type    # Specifies the API type for which the usage is being requested; Leave blank to respond with all types
string stamp_start # Discard usage before this time (parsed with datetime.fromisoformat); Leave blank to consider everything from the first usage
string stamp_end   # Discard usage after this time (parsed with datetime.fromisoformat); Leave blank to consider everything until the last usage
