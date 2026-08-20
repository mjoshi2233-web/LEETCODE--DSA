class Solution {
public:  
    int check(int i,int j, vector<vector<int>>& grid,vector<vector<int>>&dp,int m,int n){ 
        if(i>=m || j>=n){return 100000;}
        if(i==m-1 && j==n-1){
            return grid[i][j];

        }
        if(dp[i][j]!=-1){return dp[i][j];}
        int right=grid[i][j]+check(i+1,j,grid,dp,m,n);
        int bottom=grid[i][j]+check(i,j+1,grid,dp,m,n);
        return dp[i][j]=min(right,bottom);





}
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>> dp(m,vector<int>(n,-1));
        int ans=check(0,0,grid,dp,m,n);
        return ans;
    }
};