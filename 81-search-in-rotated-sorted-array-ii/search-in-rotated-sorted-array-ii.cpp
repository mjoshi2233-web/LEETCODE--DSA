class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int start=0;
        int n=nums.size();
        int end=n-1;
        int mid;
        while(start<=end){
            mid=start+(end-start)/2;
            if(nums[mid]==target){
                return 1;
            }
            if(nums[start]==nums[mid] && nums[end]==nums[mid]){
                start++;
                end--;
            }
            else if( nums[mid]>=nums[start]){
                if(target>=nums[start] && target<nums[mid]){
                    end=mid-1;
                }
                else{
                    start=mid+1;
                }}

            else{
                if(target<=nums[end] && target > nums[mid]){
                    start=mid+1;
                }
                else{end=mid-1;}
            }    
          }  return false;       
    }
};