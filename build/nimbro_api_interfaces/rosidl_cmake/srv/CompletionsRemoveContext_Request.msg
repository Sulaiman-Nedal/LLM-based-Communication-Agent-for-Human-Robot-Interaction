string completions_id              # Specifies the target completions node when addressing the completions_multiplexer
bool   remove_all                  # Removes the entire context and ignores the indexing_last_to_first and index fields
bool   indexing_last_to_first true # Specifies whether index 0 points to the last (newest) or first (oldest) element of the message history
uint32 index                       # The index of the message to be removed from the message history
