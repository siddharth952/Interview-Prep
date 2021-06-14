#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
/*
    Find 1...11's req to be combined to make x

    x = 33 = 11 + 11 + 11 
    Output: 3

    1111 = 11 * 100 + 11 similarly 11111 = 111 * 100 + 11
    So only need to check if possible to build X from 11 & 111 only
    Let X = A*11 + B*111    
        B = C * 11 + D and D < 11

        Then 
        X = A*11 + (C*11+D)*111
          = A*11 + C*111 * 11 + D*111
          = 11*(A+C*111) + D*111
        Now we can brute force all 11 value if D t

*/

void solve(){
    int x; cin>>x;
    int t = x%11;
    if (x >= t*111) puts("YES");
    else puts("NO");
}

int main(){
    int t; cin >>t;
    while(t--)
        solve();
    return 0;
}