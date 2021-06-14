
''' Question:
    Valid - "abaCABA12","Z7q","3R24m"   (1 digit, 1 upper, 1 lower)
    Invalid - "qwerty","qwerty12345","Password"

    Change his pass => is valid in minimal possible length of replacement substring
    Solution:

'''

from collections import Counter
from sys import stdin

def read_int():
    return int(stdin.readline())
def read_ints():
    return map(int, stdin.readline().split())

def main():
    # Main
    t = read_int()
     # Counters
    up,low,digit = [],[],[]

    for case in range(t):
        s = list(stdin.readline().strip())

        while(len(up) < 1 or len(low) < 1 or len(digit) < 1):
            up,low,digit = [],[],[]
        
            for i in range(len(s)):
                if ord(s[i]) >= ord('A') and ord(s[i]) <= ord('Z'): up.append(i)
                elif ord(s[i]) >= ord('a') and ord(s[i]) <= ord('z'): low.append(i)
                else: digit.append(i)

            else:
                if len(up) < 1:
                    s[low[0]] = s[low[0]].upper()
                if len(low) <1:
                    s[up[0]] = s[up[0]].lower()
                else:
                    s[low[0]] = '5'
        print(s)
main()