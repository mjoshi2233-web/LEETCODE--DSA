class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
      if(nums.size()==1){return 1;}
      int ans=1;
       int i=1;
       while(i<nums.size()){
        int count=1;
                if(nums[i]==nums[i-1]){i++; continue;}
                while(i<nums.size() && nums[i]<nums[i-1]){
                    count++;
                    ans=max(ans,count);i++;
                   
                }
                count=1;
                while(i<nums.size() && nums[i]>nums[i-1]){
                    count++;
                    ans=max(ans,count);i++;
                   
                }

            

        
       }
      return ans;
        
    }
};