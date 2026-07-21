class Solution {
public:

// int stairs(int n){

//     return dp[n-1]+1+dp[n-2]+1;

// }
    int climbStairs(int n) {
        vector<int> dp(n+2,0);
        dp[0]=0;
        dp[1]=1;
        dp[2]=2;
        for (int i=3; i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        
        return dp[n];
    }
};
