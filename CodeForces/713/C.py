
''' Question:
    s has 0,1,?. We need to replace all char with ? by 0 or 1 => s becomes a palindrome and has 
    exactly a chars '0' and exactly b char '1'
    Palindrome equality t[i] = t[n-i+1] true for all i (1<=i<=n)

    s = "01?????0" a = 4, b=4 
        • 01|1 | | | 1|1|0


    Solution:
    
    pos => s[i]!=?
        • if s[n-i+1] = '?' then s[n-i+1] = s[i]
        • if s[i] != s[n-i+1] we cannot get a palindrome, in any way, so ans = -1
    
    After this remaining characters '?' are split into pairs, except the central one. If center char = ?
        • put '0' if a is odd
        • put '1' ,, b is odd
        • a and b are not odd then ans = -1
    
    Remaining chars '?' split to pairs (s[i]=?, then s[n-i+1]=?). Allows for '0' and '1' to be 
    replaced greedily.
        • s[i] = '?' and a>1 then s[i] = s[n-i+1] = '0' and decrease a by 2
        • s[i] = '?' and b>1 then s[i] = s[n-i+1] = '1' and decrease b by 2

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
