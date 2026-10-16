class Solution {
public:
    int check(vector<int>& nums,int i,vector<int> &dp){
        if(i>=nums.size()){return 0;}
        if(i==nums.size()-1){return nums[i];}
        if(dp[i]!=-1){return dp[i];}
        int left=nums[i]+check(nums,i+2,dp);
        int right=check(nums,i+1,dp);
        return dp[i]= max(left,right);
    }
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(),-1);
        int ans=check(nums,0,dp);
        return ans;
        
    }
};