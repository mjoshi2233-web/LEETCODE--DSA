class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int n=nums.size();
        vector<int> prefix(n);
        vector<int> suffix(n);
        int minn=nums[0];
       
       for(int i=1;i<n-1;i++){
        
        prefix[i]=minn;
        minn=min(minn,nums[i]);

       }
       minn=nums[n-1];
       for(int i=n-2;i>=0;i--){
           
           suffix[i]=minn;
           minn=min(minn,nums[i]);
       }
       int ans=INT_MAX;
       for(int i=1;i<n-1;i++){
        if(prefix[i]<nums[i] && suffix[i]<nums[i]){
            int temp=nums[i]+prefix[i]+suffix[i];
             ans=min(ans,temp);}
       }
     if(ans==INT_MAX){return -1;}
      return ans;

    }
};