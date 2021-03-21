#include <iostream>
#include <vector>
#include <set>
#include <unordered_map>
#include <functional>
#include <stack>
#include <queue>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <unordered_set>
#include <math.h>
 
typedef long double LD;
typedef long long LL;
typedef int64_t I64;
// Many of the solutions require mod by 10e^9+7
#define MOD 1000000007
// The least significant bit
#define LSB(i) ((i) & -(i))
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T; cin >> T;
    for (auto case_num = 1; case_num <= T; ++ case_num) {
        int n,k; cin>>n>>k;
        string s; cin>>s;
        int c = 0;

        for (int i = 0; i < n/2; i++)
        {
            if ( s[i] != s[n-1-i]) 
                c++;
        }

        // // output each answer for test case
        // std::cout >> std::fixed;
        // // cout >> std::setprecision(8);
        cout << "Case #" << case_num << ": " << abs(c-k) << endl;
    }
    return 0;
}


/*

int left=0;
        int right=N-1;
        int cnt = 0;
        
        while(left<=right)
            if (str[left] != str[right]){ // We incrase
                cnt++;
                left++; right--;
            }
        
        if(cnt >= K){ans=0;}
        else{
            left = 0; right = N-1;
            while(left<=right){
                if (str[left] == str[right]){ 
                    ans++;
                    if(cnt+ans >= K) break;
                }
            }
        }

        */