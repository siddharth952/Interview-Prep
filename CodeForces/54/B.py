
''' Question:
    denomination of each coin should be divisible by denomination of any cheaper coin
    
    Solution:

'''

from collections import Counter
from sys import stdin

def read_int():
    return int(stdin.readline())
def read_ints():
    return map(int, stdin.readline().split())

def main():
    t = read_int()

    for case in range(t):
        s = list(stdin.readline().strip())

        
        
main()