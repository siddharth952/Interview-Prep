/*
Stair case with n steps , 1 , 2, 3 steps @ a time count no of ways that he can run up the stairs
*/
#include<bits/stdc++.h>
using namespace std;

int countSteps(int n , int memo[]){
    if(n<0) return 0;
    else if(n==0) return 1;
    else if(memo[n] > -1) return memo[n];
    else{
        memo[n] = countSteps(n-1,memo) + countSteps(n-2,memo) + countSteps(n-3,memo);
        return memo[n];
    }

}

int countSteps(int n){
    if(n<0) return 0;
    
    int DP[n+1];
    
    for (int i = 0; i < n+1; i++) // ...initialize it
    {   
    DP[i] = -1;
    }

    return countSteps(n,DP);


}



int main(){
    int N;
    cin>>N;
    cout<<countSteps(N);
    return 0;
}