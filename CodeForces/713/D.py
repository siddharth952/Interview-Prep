
''' Question:
    
    array a written to array b , (n+1)th element of array b is sum of numbers in arr
    ie , b(n+1) = a1 + a2 + ... + an
    (n+2)th element of b written with x
    b shuffled

    b = [2,3,7,12,2]
    - a = [2,2,3] and x = 12
    - a = [3,2,7] and x = 2
    



    Solution:
    


'''

from collections import Counter
from sys import stdin

def read_int():
    return int(stdin.readline())
def read_ints():
    return map(int, stdin.readline().split())

t = read_int()
for case in range(t):
    ab = list(read_ints())
    s = list(stdin.readline())
    LEN = len(s)
    flag = 0

for i in range(LEN):
    if s[i] != '?':
        tmp = s[i]
        if s[LEN-i-1] == '?': # Put char
            s[LEN-i-1] = tmp
        elif s[i] != s[LEN-i-1]: # Conflict
            print(-1)
            
# mid
if s[LEN//2] == "?":
    if ab[0] % 2 != 0: # a is odd put 0
        s[LEN//2] = '0'
        ab[0] -= 1
    elif ab[1] % 2 != 0:
        s[LEN//2] = '1'
        ab[1] -= 1
    else:
        print(-1) # a and b are not odd

    
# make pairs and select from a,b greedily
for i in range(LEN):
    if s[i]=='?':
        if ab[0]>0:
            s[i] = '0'
            s[LEN-1-i] = '0'
            ab[0] -= 2
        else:
            s[i] = '1'
            s[LEN-1-i] = '1'
            ab[1] -= 2

print(''.join(s))





    # cnt = Counter()
    # ans = 0
    # for i, num in enumerate(a): # Seq list 0,arr[0]
    #     ans += cnt[num-i]
    #     cnt[num-i] += 1
    # print(ans)
