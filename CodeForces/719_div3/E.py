
''' Question:
   Goal = sheep line up, lvl in game is described by a string of len n has '.'(empty space),'*'(sheep)
   In 1 move can move any sheep 1 square to left or 1 square to the right.
   if corr. sq exists and is empty game ends when the sheep are lined up (no empty cells b/w sheeps)

    **..*.
    *.*.*.
    .**.*.
    .*.**.
    ..***.

Optimal Sol:
    when sheep with number m = ceil(n/2) does not make moves.
    proved by considering optimal sol. in which sheep m makes atleast 1 move, and we come to the 
    conclusion that this solution is not optimal

    Sheep with num i=1 ... n . Final position of ith sheep = xm - m+i

    Mod(Sum_till_k(xi - (xm-m+i)))
    

'''
from collections import Counter
from sys import stdin

def read_int():
    return int(stdin.readline())
def read_ints():
    return map(int, stdin.readline().split())

t = read_int()
for case in range(t):
    n = read_int()
    s = stdin.readline()
    sheeps = [] # their positions in the string.

    for i in range(n):
        if s[i] == '*':
            sheeps.append(i-len(sheeps))
    
    if len(sheeps) == 0:
        print(0)
    else:
        m = len(sheeps)
        mid = sheeps[m//2]
        print(sum( [abs(num - mid) for num in sheeps] ))

