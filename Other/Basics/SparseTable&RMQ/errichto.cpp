// Followed - https://www.youtube.com/watch?v=0jWeUdxrGm4

/*
    Problem - Is RMQ (Range Min Query)
        Given a range say ai to an find the min
    -brute force: O(Q*N)
    
    Goal is O(N*Log(N) + Q <- Const time ) 
    
    0  1  2  3  4  5  6  7
    ______________________
    2, 3, 4, 5, 3, 1, 1, 3


• Dense Table:
    precompute for every possible range. O(N^2)

• Sparse Table: (compute some of em)
    Do smtg for powers of 2 eg. 1, 2, [4], 8 

    len = 4 we have ->  2  3  1  1  1 
                        2, 3, 4, 5, 3, 1, 1, 3

    So this way we create 2d array of minima of int m[N][LOGN]






*/