'''
https://leetcode.com/discuss/interview-question/989768/Amazon-or-OA-2020-or-Transaction-logs
A Company parses logs of online store user transactions/activity to flag fraudulent activity.
The log file is represented as an Array of arrays. The arrays consist of the following data:

[ <# of transactions>]

For example:
[345366 89921 45]

Note: the data is space delimited
So, the log data would look like:

[
[345366 89921 45],
[029323 38239 23]
...
]
Write a function to parse the log data to find distinct users that meet or cross a certain threshold.

The function will take in 2 inputs:
logData: Log data in form an array of arrays

threshold: threshold as an integer

Output:
It should be an array of userids that are sorted.
If same userid appears in the transaction as userid1 and userid2, it should count as one occurrence, not two.
Example:
Input:
logData:

[
[345366 89921 45],
[029323 38239 23],
[38239 345366 15],
[029323 38239 77],
[345366 38239 23],
[029323 345366 13],
[38239 38239 23]
...
]
threshold: 3

Output: [345366 , 38239, 029323]
Explanation:
Given the following counts of userids, there are only 3 userids that meet or exceed the threshold of 3.

345366 -4 , 38239 -5, 029323-3, 89921-1

From what I understood, the input contains a list of strings. 
Each string is of the format "userid1 userid2 #no of transactions". 
If the same userid appears in the transaction as userid1 and userid2 means, take this input string [38239 38239 23]. 
Here the userid1 and userid2 are same ie 38239. So count it as 1 instead of 2. When you print the contents of the map then you will see that 38239 is printed 5 instead of 6. Hope I clarified your question.
'''

data = [
['345366 89921 45'],
["029323 38239 23"],
["38239 345366 15"],
["029323 38239 77"],
["345366 38239 23"],
["029323 345366 13"],
["38239 38239 23"]]

threshold = 3

user_map = {}
set_ = set()
for entry in data:
    # entry:str
    dataList = entry[0].split(" ")
    from_ = dataList[0]
    to_ = dataList[1]

    if from_ in user_map:
        user_map[from_] += 1
        if user_map[from_] >= 3:
            set_.add(from_)
    else: user_map[from_] = 1
    if to_ in user_map:
        user_map[to_] += 1
        if user_map[to_] >= 3:
            set_.add(to_)
    else: user_map[to_] = 1

print(set_)