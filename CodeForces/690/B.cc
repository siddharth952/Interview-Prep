
#include<bits/stdc++.h>
using namespace std;
/* Question:
    operation once, select 2 num i,j and removes chars from s string at i,i+1,i+2,..,j
    ie, removes substring s[i...j]

    s = "20192020":
    -> 2020 i,j = 3,6 or 1,4
    -> 2019220
    Solution:
*/

void solve(){
    int n; cin>>n;
    string s; cin>>s;

    for (int i = 0; i <= 4; i++)
    {
        cout << "s: "<<s.substr(0,i) <<"|"<< s.substr(n-4+i,4-i)<<endl;
        if (s.substr(0,i) + s.substr(n-4+i,4-i) == "2020") {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main(){
    int t; cin>>t;
    while(t--)
        solve();
    return 0;
}