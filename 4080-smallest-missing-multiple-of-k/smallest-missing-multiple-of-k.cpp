class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int count=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<count*k){continue;}
            if(nums[i]!=count*k){
                return count*k;
            }
            count++;



        }
        return count*k;
        
    }
};