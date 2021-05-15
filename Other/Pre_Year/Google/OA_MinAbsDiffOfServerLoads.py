'''
Some processes that need to be executed. Amt of a load that process causes on a server that runs it,
is represented with a int. 
Total load caused on a server is sum of loads of all processes.
Goal is to distribute processes b/w 2 servers => abs diff of load is min.

IN: [1,2,3,4,5]
OUT: 1

- Distribute processes with loads [1,2,4] to \1\
    - [3,5] to \2\
        - Total load = 7 , 8 and diff 1

'''

def min_dif_server_load(nums):
    s = sum(nums) // 2
    n = len(nums)
    dp = [[0 for _ in range(s+1)] for x in range(n+1)]
    for i in range(1,n+1):
        for amt in range(1,s+1):
            if nums[i-1]<=amt:
                dp[i][j] = max(dp[i-1][amt], nums[i-1]+dp[i-1][amt-nums[i-1]]) 
            else:
                dp[i][j] = dp[i-1][j]
    '''return 2nd server loads - 1st server loads '''
    return (sum(nums)-dp[-1][-1]) - dp[-1][-1]
    