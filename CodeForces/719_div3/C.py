
''' Question:
    a and b adjacent if they differ by exactly one |a-b| = 1
    Consider cells of square matrix nxn as adjacent if they have common side
    for cell (r,c) cells (r,c-1) , (r,c+1), (r-1,c) and (r+1,c) are adjacent to it.

    - Construct a square nxn:
      Each int from 1 to n^2 occurs once
      if (r1,c1) and (r2,c2) are adjacent then nums in those cells must not be adjacent
 

    For n = 2 there is no answer
    else:
        cell (i,j) -> white if i+j = even else its black ie, odd
        arrange cells => all white cells are first and if colors are equal, cells can be compared 
        lexicographically.
        Arrange numbers from 1 to n^2 in ordered cells
'''

for _ in range (int(input())):
    n = int(input())
    if n == 2:
        print(-1)
        continue

    a = [[0 for i in range(n)] for j in range(n)] # Build arr
    c = -1
    for i in range(n):
        for j in range(n):
            c += 2 # Start from 1
            if c>n*n:
                c = 2
            a[i][j] = c
        print(*a[i])

'''
n = 3
gp 1 -> 1 3 5  
        7 9 2 
        4 6 8 <- gp 2
'''