class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map <int,int> mp;
        int n=nums.size();
        int start=0;
        int ans=1;
        for(int i=0;i<n;i++){
             mp[nums[i]]++;
             if(mp[nums[i]]>k){
                while(nums[start]!=nums[i]){
                    mp[nums[start]]--;
                    start++;
                    
                }
                mp[nums[start]]--;
                start++;

             }
             int count=i-start+1;
             ans=max(ans,count);
        }
        return ans;
    }
};