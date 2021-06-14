from collections import Counter
from sys import stdin

def read_int():
    return int(stdin.readline())
def read_ints():
    return map(int, stdin.readline().split())

def main():
    t = read_int()
    for case in range(t):
        n = read_int()
        s = list(stdin.readline().strip())
        #20192020

        for i in range(n):
            if (s[0:i] + s[n-4+i:4-i]) == "2020":
                print("YES\n")
                break
        
        print("NO")
        
main()