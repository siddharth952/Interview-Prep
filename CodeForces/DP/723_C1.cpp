#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n; 
    vector<int> potions;
    cin >> n;
    priority_queue<ll, vector<ll>, greater<ll> > pq; // min-heap, by default its max-heap
    ll sum = 0;

    for (int i = 1; i <= n; i++){
        ll x; cin >>x;
        sum += x;
        pq.push(x);

        while(sum<0){
            sum -= pq.top();  // [-10 <- ,-9,-6,-1,5,7,2]
            pq.pop();
        }
    }
    cout << (int) pq.size();
}

int main(){
    int t=1;
    while(t--)
        solve();
    return 0;
}