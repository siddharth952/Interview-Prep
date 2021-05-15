#include<bits/stdc++.h>
using namespace std;

/*
 26 tasks 
 Polycarp began to solve some task, then he must solve it to the end, 
 without being distracted by another task. After switching to another task, 
 Polycarp cannot return to the previous task.
*/

/*
Find the 1st day a perticular problem was solved then find the last such day
now all the problems b/w this should be the same
*/

void solve() {
    int n; cin>>n;
    string s; cin>>s;

    for(char c = 'A'; c<='Z';c++){
        int firstEncounter = INT_MAX;
        int last = INT_MIN;
        for(int i=0;i<n;i++)
            if (s[i] == c){
                firstEncounter = min(firstEncounter,i);
                last = max(last,i);
            }

        // Find out if any char diff
        for(int i=firstEncounter;i<=last;i++)
            if (s[i] != c){
                cout << "NO\n";
                return;
            }
    }

    cout<<"YES\n";

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