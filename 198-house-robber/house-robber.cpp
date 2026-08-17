class Solution {
public:
int check(int ind,vector<int> &nums,vector<int> &dp){
    if(ind==nums.size()-1){
        return nums[ind];

    }
    if(ind>=nums.size()){return 0;}
    if(dp[ind]!=-1){return dp[ind];}
    int take=nums[ind]+check(ind+2,nums,dp);
    int nottake=check(ind+1,nums,dp);
    return dp[ind]=max(take,nottake);
}
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(),-1);
        int ans=check(0,nums,dp);
        return ans;
        
    }
};