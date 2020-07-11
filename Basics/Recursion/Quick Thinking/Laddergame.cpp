#include<iostream>
using namespace std;

// Static K
int jump(int N) {
    if(N < 0) return 0;
    if( N == 0 or N == 1) return 1;

    return (jump(N-1) + jump(N-2) + jump(N-3));

}

// Static K with DP
 long long jumpDP(int N, long long DP[]) {
     if(N<0) return 0;
     if(N == 0 or N == 1) return 1;
     if(DP[N] != 0) return DP[N];
     else
    DP[N] = jumpDP(N-1, DP) + jumpDP(N-2, DP) + jumpDP(N-3, DP);
    return DP[N];
 }

 // K with DP
  long long jumpDP(int N, int K, long long DP[]) {
     if(N<0) return 0;
     if(N == 0 or N == 1) return 1;
     if(DP[N] != 0) return DP[N];
     else{
        int ans = 0;
        for(int i=1;i<=K;i++){
            ans += jumpDP(N-i, DP);
        }
        DP[N] = ans;
     }
    return DP[N];
 }


int main() {
    long long dp[8+1] = {0};
    cout << jumpDP(8,4,dp);
    return 0;
}