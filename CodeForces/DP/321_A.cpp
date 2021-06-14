#include<bits/stdc++.h>
using namespace std;

/*
    - Max. non-decre subsegment (Max profitible sub of days)
    Ans.
        2 2 1 3 4 1
            |  \
        last    no
*/
void solve(){
    int n; cin>>n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int omax=0,lmax=0,last = arr[0];

    for (auto no : arr){
        if (no>=last)
            lmax ++;
        else lmax = 1;
        last = no;
        omax = max(lmax,omax);
        //cout << lmax <<":"<< omax<<endl;
    }
    cout << omax;
}


int main(){
    int t=1;
    while(t--){
        solve();
    }
    return 0;
}