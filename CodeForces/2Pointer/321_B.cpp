#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
/*
    - Friend can X/O the offer and has amtmon & friendfactor
    - Friend feels poor if any friend has d (say 10 money more)
    - Kefa need max friendfactor
    Ans.
        nooffri  | d
        - friend 0 (amtmon,fac)
        - ...

        - if friend has fac diff is > d then friendship decreases
        - 
    4, 5
    75 5
    0 100
    150 20
    75 1
        -> Sort (amt) d = 5
        0 100
        75 1
        75 5
        150 20

    5,1
    5 9
    2 10
    8 5
    18 12
    1 1
        ->sort 
    
    1 1
    2 10
    5 9
    8 5
    18 12


*/
void solve(){
    ll nf,d; cin>>nf>>d;
    vector<pair<int,int> > arr(nf);
    for (int i = 0; i < nf; i++){
        int amt,fac;
        cin>> amt >> fac;
        arr[i] = make_pair(amt,fac);
    }
    sort(arr.begin(),arr.end());
    ll res=0, sum=0,diff = 0,st=0;

    for (int i = 0; i < nf; i++)
    {
        diff = arr[i].first - arr[st].first;

        // Fix the diff cuz if its giving a diff of <= d here, hence with the increase of the array we will get larger values
        // hence the diff would only broden.
        while(diff>=d){
            sum -= arr[st].second;
            diff = arr[i].first - arr[++st].first;
        }
        sum += arr[i].second;
        res = max(res,sum);
    }
    cout << res << endl;
}

int main(){
    int t=1;
    while(t--){
        solve();
    }
    return 0;
}