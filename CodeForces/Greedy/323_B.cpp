#include<bits/stdc++.h>
using namespace std;
/*
    Q:  - each comp has atleast 1 info. needed to be retrived 
        - to crack ith robot needs to collect atleast ai price of
            info
        - Can be hacked if next it it.
        - Only left/right (cost is high if dir change)
        - Tell min. change req. to collect all n parts, initil 1

    E:
        5
        4 2 3 0 1
    Optimize:
        Track index of processed

    Errors:
        1. Make it -1 when processed
        2. exit if statement check for >= not only > which results to inf. loop
*/
void solve(){
    int n;cin>>n;
    vector<int> a (n);
    for(int i=0;i<n;i++)
        cin >> a[i];
    int res=0,have = 0;

    while(true){
        // Start to end
        for(int i =0;i<n;i++){
            
            if (a[i]<=have and a[i]>-1){
                have++;
                a[i] = -1;
            }
        }
        if (have>=n){
            cout << res; return; 
        }
            
        res++;
        // end to start
        for(int i = n-1;i>=0;i--){
            
            if (a[i]<=have and a[i]>-1){
                have++;
                a[i] = -1;
            }
            
        }
        if (have>=n){
            cout << res; return; 
        }
        res++;
    }

}

int main(){
    solve();
    return 0;
}