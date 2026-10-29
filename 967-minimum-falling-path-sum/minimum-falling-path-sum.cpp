class Solution {
public:
    int check(int i,int j,vector<vector<int>>& nums,vector<vector<int>> &dp){
        int m=nums.size();
        int n=nums[0].size();
        if( j<0 || j>=n){return 1e9;}
        if(i==m-1){
            return nums[i][j];
        }
        if(dp[i][j]!=1e9){return dp[i][j];}
        int left=check(i+1,j-1,nums,dp);
        int down=check(i+1,j,nums,dp);
        int right=check(i+1,j+1,nums,dp);
        return dp[i][j]=nums[i][j]+ min(left,min(down,right));
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int ans=INT_MAX;
        int m=matrix.size();
        int n=matrix[0].size();
        vector<vector<int>> dp(m,vector<int>(n,1e9));
        for(int i=0;i<matrix[0].size();i++){
            ans=min(ans,check(0,i,matrix,dp));
        }
        return ans;
    }
};