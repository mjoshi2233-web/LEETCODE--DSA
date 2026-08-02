class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map <int,int> mp;
        int count=0;
        mp[0]=1;
        int summ=0;
        for(int i=0;i<nums.size();i++){
            summ+=nums[i];
            int diff=summ-k;
            count+=mp[diff];
            mp[summ]++;
        }
        return count;
    }
};