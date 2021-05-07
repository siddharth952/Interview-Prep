#include<bits/stdc++.h>
using namespace std;
#define     FastIO           ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(0);

/*
Guaranteed that at least one cell is good. 
It is guaranteed that no good cell is a corner.

*/

int main(){
	 #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n,m;cin>>n>>m;
   	int ans=4;
    vector<vector<int>> arr( n , vector<int> (m, 0));

    for (int i = 0; i < n; ++i)
    	for (int j = 0; j < m; ++j){
    		cin>> arr[i][j];

    		if (arr[i][j] == 1 and (i==0 || i==n-1 || j==0 || j==m-1)){
    			ans = 2;
    			break;
    		}
    		

    	}

    	cout << ans <<endl;




return 0;
}