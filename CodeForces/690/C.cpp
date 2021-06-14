
#include<bits/stdc++.h>
using namespace std;
/* Question:
    Sum of digits = x 
    eg.     2213 = 8
            17 = 8 
            71 = 8
            62 = 8
            8 = 8 (X)

            x = 12

            66 = 12
    - Can we solved with greedy approach

        (123456789) from this x upto x=45 can be made if x > 45 then ans = 0

        Let x = 20: 20 - (9) [We choose 9 from the list] = 11 - (8) = 3 - (3) = 0

        This will give us the optimal way       389
*/

void solve(){
    int x; cin>>x;
    int sum = 0, last = 9; // Last used from 123456789
    if (x > 45 ){cout<<-1<<endl; return;}
    
    string s = "";

    for(int i=9;i>=1;i--)
        if (x<=9 && i>=x){ //Can be safely made
            s.append(to_string(x));
            break;
        }
        else{
            s.append(to_string(i));
            x -= i;
        }

    reverse(s.begin(),s.end());
    cout << s << endl;

}

int main(){
    int t; cin>>t;
    while(t--)
        solve();
    return 0;
}