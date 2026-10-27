class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        int ans=1;
        if(nums.size()==1){return ans;}
       multiset <int> mp;int start=0;
        for(int i=0;i<nums.size();i++){
            mp.insert(nums[i]);
            int temp=*mp.rbegin()-*mp.begin();
           
           
            if(temp>limit){
               while(start<=i && (*mp.rbegin()-*mp.begin())>limit){
                mp.erase(mp.find(nums[start]));
                start++;

               }
               
              
            }
            ans=max(ans,i-start+1);

        }
       return ans;
        
    }
};