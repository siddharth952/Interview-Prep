#include<iostream>
using namespace std;

/*
 friends what to got a party on bikes each gut can go as singke or as couple find
 the number of ways in which friends can go to the party
*/

int dp[1000];

int friendPair(int n){
    if(n<0) return 0;
    if (n == 0 or n == 1) return 1;
    int ans =0;
    ans = 1*friendPair(n-1) + (n-1)*friendPair(n-2);
    return ans;
}

// DP Top Down
int friendPairDP(int n){
    if(n==0 or n==1){ dp[n] = 1; return 1; }
    if(dp[n]!=0) return dp[n];

    dp[n] = 1*friendPairDP(n-1) + (n-1)*friendPairDP(n-2);

    return dp[n];
}

// DP Bottom up

int friendPairBottom(int n){
    int dp[n+1];
    
    dp[0] = 1, dp[1] = 1;
    for(int i = 2; i<= n;i++)
        dp[i] = 1*dp[i-1] + (i-1)*dp[i-2];

    return dp[n];
}



int main(){
    cout<<friendPairBottom(4);
} 