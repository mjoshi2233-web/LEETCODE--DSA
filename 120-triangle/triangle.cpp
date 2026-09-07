class Solution {
public:
     int check(int i ,int j,vector<vector<int>>& triangle,vector<vector<int>>& dp,int n){

        if(i>=n ){return 1e9;}
        if(i==n-1){return triangle[i][j];}
        if(dp[i][j]!=INT_MAX){return dp[i][j];}
        int left=triangle[i][j]+check(i+1,j,triangle,dp,n);
        int right=triangle[i][j]+ check(i+1,j+1,triangle,dp,n);
        return dp[i][j]=min(left,right);







     }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        int m=triangle[n-1].size();
        vector<vector<int>> dp(n,vector<int>(m,INT_MAX));
        int ans=check(0,0,triangle,dp,n);
        return ans;

        
    }
};