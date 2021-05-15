#include<bits/stdc++.h>
using namespace std;

/* Question:
    array dense if greater of adjacent ele !> 2 bigger than smaller

   Solution:
   max(a[i],a[i+1])
   ---------------- <= 2
   min(a[i],a[i+1])

Edge:
    a) -ve big/small = -ve 
    b. 10/2 is not less so not dense


if not dense:
    [5, 11] -> [5,7,9,11] so we add 2 such numbers

*/

void solve() {
    int n,last,ans=0; cin>>n>>last;
    for (int i = 1; i < n; i++){
        int nw;
        cin >> nw;
        int a = min(last, nw), b = max(last,nw);
        while (a*2 < b){
            ans++;
            a *= 2;
        }
        last = nw;
    }
    cout<<ans<<"\n";
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