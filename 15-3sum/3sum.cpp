class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>> s;
        for(int i=0;i<nums.size()-2;i++){
           int start=i+1;
           int end=nums.size()-1;
           while(start<end){  
           if(nums[i]+nums[start]+nums[end]==0){
            s.insert({nums[i],nums[start],nums[end]});
            start++;end--;
           }
           else if(nums[i]+nums[start]+nums[end]<0){
            start++;
           }
           else{
            end--;
           }
           }
        }
        return {s.begin(),s.end()};
     
    }
};