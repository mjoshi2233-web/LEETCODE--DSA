class Solution {
public:
    int check(int i,int j,vector<vector<int>>& dp,int m,int n){
          if(i>=m || j>=n){return 0;}
          if(i==m-1 && j==n-1){ return 1;}
          if(dp[i][j]!=-1){
            return dp[i][j];
          }
          int right=check(i,j+1,dp,m,n);
          int bottom=check(i+1,j,dp,m,n);
          return dp[i][j]=right+bottom;
    }
    int uniquePaths(int m, int n) {
        int summ;
        vector<vector<int>> dp(m,vector<int>(n,-1));
         summ=check(0,0,dp,m,n);
        return summ;
        
    }
};