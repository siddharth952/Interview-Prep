#include<iostream>
#include<string>

using namespace std;
int cnt(int n){
    int a[n], b[n];
    a[0] = b[0] = 1;
    for (int i = 1; i < n; i++)
    {
        a[i] = a[i-1] + b[i-1];
        b[i] = a[i-1];
    }
    return a[n-1] + b[n-1];
    
}
int main(){

    // Cnt all possible distinct binary strings of len N => no consecutive 1's
    // N = 1 ; dp[1] = 2
    // N = 2 ; dp[2] = 00,10,01 = 3

    //                A[i]        B[i]
    // N = 3 ; 100, 010,000,| 101,001

    // We can append 1/0 if ending 0, and only 1 if ending 1

    // With A[i] = A[i-1] + B[i-1]
    // With B[i] = A[i-1] 
     
    cout<< cnt(3) << endl;
    return 0;
}



