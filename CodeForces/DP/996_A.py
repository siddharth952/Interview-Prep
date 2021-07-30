
''' Question:
        n $ in bank (Say 10) which we would like to take out. The denominations for bills are 
        1, 5, 10, 20, 100
        We need to output the min no of bills to empty the account.

    Solution:
        if n == 80 
            check if divisible with the largest denomination if not check others
        
        minimize 𝑥1+𝑥2+𝑥3+𝑥4+𝑥5 given that 𝑥1+5𝑥2+10𝑥3+20𝑥4+100𝑥5=𝑛
    

'''
from collections import Counter
from sys import stdin

def read_int():
    return int(stdin.readline())
def read_ints():
    return map(int, stdin.readline().split())

n = read_int()
denom = [100,20,10,5,1]
cnt:int = 0
for i in denom:
    cnt += n // i
    n %= i
print(cnt)