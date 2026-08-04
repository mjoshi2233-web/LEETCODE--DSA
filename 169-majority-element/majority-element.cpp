class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int ans=nums[0];
        int freq=1;
        for(int i=1;i<n;i++){
            if(freq==0){ans=nums[i];}
            if(nums[i]!=ans){
                freq--;
            }
            else{
                freq++;
            }
            
        }

        return ans;
    }
};