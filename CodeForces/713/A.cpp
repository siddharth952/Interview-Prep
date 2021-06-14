#include<bits/stdc++.h>
using namespace std;

/* Question:
    All elements except 1 are the same [4,11,4,4]
   Solution:
*/

void solve() {
    int n;cin>>n;
    vector<int> v(n);
    for(int &e : v){
        cin >> e; 
    }
        
    

    vector<int> a = v;
    sort(a.begin(),a.end());

    for (int i = 0; i < n; i++)
        if (v[i] != a[1])
            cout<< i+1 << "\n"; 

    
}
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin>>t;
   while(t--){
       solve();
   }
    return 0;
}