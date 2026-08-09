class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int summ=0;
        unordered_map <int,int> mp;
        
        for(int i=0;i<nums.size();i++){
              summ+=nums[i];
              int rem=summ%k;
              if(rem==0&& i>=1){return true;}
              if(mp.find(rem)!=mp.end() &&(  i-mp[rem])>=2){return true;

              }
              if(mp.find(rem)==mp.end()){ 
              mp[rem]=i;}

        }
        return false;
    }
};