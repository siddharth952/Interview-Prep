#include<iostream>
using namespace std;
/*
    Given a wall of size of 4 X N and titles of size (1,4) and (4,1) in how many ways can you build the wall
    ++++
     OR                         Wall : X ...                                                        f(n)
     +                                 X ...                                                       /    \
     +                                 X ...                                                 f(n-1)(v)   f(n-4)(horizontal)
     +                                 X ...
     +

    Recursive case: f(n) = f(n-1) + f(n-4)


*/
int tileWays(int n){
    if(n<=3) return 1;     
    int total = 0;

   total += tileWays(n-1);
   total += tileWays(n-4);
    return total;
}

int main(){
   cout<< tileWays(10);
 return 0;
}