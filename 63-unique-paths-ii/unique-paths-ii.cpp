class Solution {
public:
     int check(int i,int j,int m,int n, vector<vector<int>> &nums,vector<vector<int>> &dp){
        if(i>=m || j>=n){return 0;}
        if(nums[i][j]==1){return 0;}
        if(i==m-1&&j==n-1){return 1;}
        if(dp[i][j]!=-1){return dp[i][j];}
        int left=nums[i][j]+check(i+1,j,m,n,nums,dp);
        int right=nums[i][j]+check(i,j+1,m,n,nums,dp);
         return dp[i][j]=left+right;
     }
    int uniquePathsWithObstacles(vector<vector<int>>& nums) {
        int m=nums.size();
        int n=nums[0].size();
        vector<vector<int>> dp(m,vector<int>(n,-1));
        int ans=check(0,0,m,n,nums,dp);
        return ans;
        
    }
};