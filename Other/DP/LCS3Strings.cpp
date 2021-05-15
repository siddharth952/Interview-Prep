#include<iostream>
#include<vector>
using namespace std;
typedef vector<int> v1d;
typedef vector<v1d> v2d;
typedef vector<v2d> v3d;

/*
    3 Strings len < 100, Need to find longest common sub-sequence on all 3 given sequences
    Time: 
        - Think:
        - Code: 
        - Not able to?: 

    in 1 Seq LCS
       -    a      b      c      d
   -|  0  | 0   |  0  |  0  |  0  |
   a|  0  |  1  |  1  |  1  |  1  |
   b|  0  |  1  |  2  |  2  |  2  |
   c|  0  |  1  |  2  |  3  |  3  |
*/

// int main(){
//     string text = "abcd"; string ptn = "abc";
//     // First rows then columns
//     vector<vector<int>> dp( ptn.size()+1 , vector<int> (text.size()+1, 0)); 
//     // Initial fill
//     for(int i = 0;i<text.size();i++){dp[i][0] = 0;dp[0][i] = 0;}
//     for (int i = 1; i < dp.size(); i++)
//         for(int j = 1;j<dp[0].size();j++){
//             if(ptn[i] == text[i])
//                 dp[i][j] = dp[i-1][j-1]+1;
//             else{
//                 if(dp[i-1][j] > dp[i][j-1])
//                     dp[i][j] = dp[i-1][j];
//                 else
//                     dp[i][j] = dp[i][j-1];
//             }
//         }
//     // Show max length of LCS 
//     cout <<"Length is :"<< dp[ptn.size()][text.size()] << endl; 
//     return 0;
// }


int main(){
    string X = "AGGT12"; string Y = "12TXAYB"; 
    string ptn = "12XBA";
    // Just extend to 3D DP

    // First rows then columns
    //vector<vector<vector<int> > > dp(Y.size()+1 ,vector<vector<int> >(ptn.size()+1 , vector<int> (X.size()+1, 0))); 
    v3d dp(X.size()+1, v2d(Y.size()+1, v1d(ptn.size()+1, 0)));

    //int dp[X.size()+1][Y.size()+1][ptn.size()+1]; 

    // Initial fill
    
    for (int i = 0; i <= X.size(); i++)
        for(int j = 0;j<=Y.size();j++)
            for(int k = 0;k<=ptn.size();k++){
                if(i==0||j==0||k==0) dp[i][j][k] = 0;
                else if (X[i-1]==Y[j-1] && X[i-1]== ptn[k-1])
                    dp[i][j][k] = dp[i-1][j-1][k-1] +1 ;
                else
                    dp[i][j][k] = max(max(dp[i-1][j][k],dp[i][j-1][k]),dp[i][j][k-1]);
            }
        
    // Show max length of LCS 
    cout <<"Length is :"<< dp[X.size()][Y.size()][ptn.size()] << endl; 
    return 0;
}