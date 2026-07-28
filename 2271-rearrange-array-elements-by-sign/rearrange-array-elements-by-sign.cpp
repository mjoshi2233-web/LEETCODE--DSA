class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int left=0;int right=1;
        vector<int> ans=nums;
        for(int i=0;i<nums.size();i++){
           if(nums[i]<0){
            ans[right]=nums[i];
            right+=2;
           }
           else{
            ans[left]=nums[i];
            left+=2;
           }
        }
        return ans;
    }
};