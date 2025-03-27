string   completions_id   # Specifies the targeted completions node for actions 'release' and 'configure'
string   action           # The type of action; Must be in list ['acquire', 'release', 'configure']
string[] parameter_names  # The names of the parameters to be edited; This is applied with any action
string[] parameter_values # The parameter values corresponding to parameter_names
