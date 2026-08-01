class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
       int start=0;
       int end=1;

       while(end<nums.size()){
        if(nums[start]==nums[end]){
            return nums[start];
        }
        start++;
        end++;
       }
       return -1;
    }
};