#include<bits/stdc++.h>
using namespace std;


/* Question:
    n ordinary if in the decimal notation all digits are the same  eg. 1,2,99 are ordinary nos. 
    but 719 and 2021 are not
*/ 

/* Solution:
    7 % 10 = 0.7 = 0
    3 % 10 = 0.3 = 0
    16 % 10 = 1.6 = 1

    Any ordinary number is d x (10^0 + 10^1 + 10^2 + 10^3 + 10^k) So cnt all such ordinary numbers among the nums
    from 1 to n, it is enough to cnt the num of (d,k) pairs => d x (10^0 + 10^1 + 10^2 + .. + 10^k) <= n
    and here enough to iterate over d from 1 to 0 and k from 0 to 8 
*/
using ll = long long;
void solve() {
    int n,res=0; cin>>n;

    for(ll pw = 1; pw<= n; pw=pw*10+1)
        for(int d=1;d<=9;d++)
            if(pw * d <= n)
                res++;

    cout << res << endl;
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