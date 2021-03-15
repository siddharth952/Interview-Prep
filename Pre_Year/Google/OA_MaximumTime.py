"""
Given string representing time in format of hh:mm some of digits are blank(?)
Need to fill in the '?' => time represented by this string is the max possible

"?4:5?"
output: "14:59" 

    _  _ : _  _
    0  0   0  0
    1  .   .  .
    2  .   .  .
       9   5  9
"""

def max_time(s:str):
    s = list(s)
    if s[0] == '?':
        s[0] = '2' if s[1] <= '3' or s[1] == '?' else '1'
    if s[1] == '?': s[1] = '9' if s[0] != '2' else '3'
    if s[3] == '?' : s[3] = '5'
    if s[4] == '?' : s[4] = '9'

    return ''.join(s) 

print(max_time("?4:5?"))