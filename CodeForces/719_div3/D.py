
''' Question:
    Array of n intergers.
    Cnt the no of pairs of indices: • (i,j) i (1) < j (2) 
                                    • aj - ai = j-i

    Solution:
    • We cannot sort it as we are working the indexes and if we sort it relative pos would change
            0  1  2  4  5  6
            ________________
            3  5  1  4  6  6

    • Cache?

'''

# O(N^2)
# for _ in range (int(input())): # Test Cases
#     n = int(input()) 
#     # Array Input
#     arr = list(map(int,input().split()))
#     cnt = 0
#     for i in range(n):
#         for j in range(i+1,n):
#             if (arr[j] - arr[i]) == (j-i):
#                 cnt += 1
#     print(cnt)

# O(2N):
# aj - ai = j-i ===== aj-j = ai-i
# We look out for in dict where bi == bj
# for _ in range (int(input())): # Test Cases
#     n = int(input()) 
#     arr = list(map(int,input().split()))
#     d = defaultdict(int)

#     for i in range(n):
#         d[arr[i]-i] += 1
#     cnt = 0
#     for i in d:
#         cnt += (arr[i]*(arr[i]-1))//2
#     print(cnt)

                    
# O(2N):
# aj - ai = j-i ===== aj-j = ai-i
# We look out for in dict where bi == bj

from collections import Counter
from sys import stdin

def read_int():
    return int(stdin.readline())
def read_ints():
    return map(int, stdin.readline().split())

t = read_int()
for case in range(t):
    n = read_int()
    a = list(read_ints())
    cnt = Counter()
    ans = 0
    for i, num in enumerate(a): # Seq list 0,arr[0]
        ans += cnt[num-i]
        cnt[num-i] += 1
    print(ans)
