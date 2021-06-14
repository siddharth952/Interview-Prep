
''' Question:
   Letters can be deleted from s => it results to "hello"
    Solution:
    Have to keep track of stream of hello

'''

from collections import Counter
from sys import stdin

def read_int():
    return int(stdin.readline())
def read_ints():
    return map(int, stdin.readline().split())

def main():
    t = 1
    for case in range(t):
        s = list(stdin.readline().strip())
        i = 0 
        tmp = "hello"
        for c in s:
            if c == tmp[i]:
                i += 1
            if i >= 5:
                print("YES")
                return
        print("NO")
        
                

        
main()