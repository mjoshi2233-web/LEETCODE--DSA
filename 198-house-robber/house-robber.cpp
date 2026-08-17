class Solution {
public:
    int rob(vector<int>& nums) {
        int prev=nums[0];
        int prev2=0;int curr=nums[0];
        for(int i=1;i<nums.size();i++){
            int take=nums[i];
            take+=prev2;
            int nottake=prev;
             curr=max(take,nottake);
             prev2=prev;
            prev=curr;
           


        }
        return curr;
    }
};