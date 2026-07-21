class Solution {
public:
    vector<vector<int>> dp;
    bool solve(string s1, string s2, string s3,int i,int j)
    {
        if(i+j==s3.size())
          return (i==s1.length())&&(j==s2.length());
        if(dp[i][j]!=-1)
         return dp[i][j];
        int res=0;
         if(i<s1.length()&&s1[i]==s3[i+j])
            res=solve(s1,s2,s3,i+1,j);
         if(j<s2.length()&&s2[j]==s3[i+j])
           res=solve(s1,s2,s3,i,j+1); 
        return dp[i][j]=res;   
    }
    bool isInterleave(string s1, string s2, string s3) {
        dp.assign(s1.size()+1,vector<int>(s2.size()+1,-1));
        return (bool)solve(s1,s2,s3,0,0);
    }
};
