class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int ans=INT_MAX;
       for(int i=0;i<nums.size();i++){
        for(int j=i;j<nums.size();j++){
            int temp=0;
            for(int k=i;k<=j;k++){
                temp+=nums[k];

            }
            if(j-i+1<=r && j-i+1>=l && temp>0){
                ans=min(ans,temp);
            }
        }
       }
       if(ans==INT_MAX){return -1;}
        return ans;
        
    }
};