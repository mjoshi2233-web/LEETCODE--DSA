class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        unordered_map <int,int> mp;
        for(int i=0;i<nums.size()-1;i++){
            if(mp.find(nums[i]+nums[i+1])!=mp.end() ){return true;}
            mp[nums[i]+nums[i+1]]=i;
        }
        return false;
    }
};