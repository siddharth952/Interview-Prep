class Solution {
public:
    int numTrees(int n) {
            // Dp soluton formula = F(n) = F(0)*F(n-1) + F(1)*F(n-2) + .. + F(n-2)*F(1) + F(n-1)*F(0)
        
            int dp[n+1];
            dp[0] = dp[1] = 1;
            
             // local n
            for(int i = 2;i<=n;i++){
                // set initial to 0
                dp[i] = 0;
                for(int j = 1;j<=i;j++){
                    dp[i] += dp[j-1] * dp[i-j];
                }
            }
        return dp[n];
        }
    
};


/*
TRY:
        // // For looping each 1...n of tree
        // for(int i=1;i<=n;i++){
        //     if(currVal < left) return;
        //     if(currVal > right) return;



MISTAKES:
line 13:j<=i
line 14: dp[i] += dp[i+j] * dp[j-i];
*/
