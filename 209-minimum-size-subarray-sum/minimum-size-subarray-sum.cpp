class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int start=0;
        int summ=0;
        int ans=INT_MAX;
        int i=0;
        while(i<nums.size()){
            summ+=nums[i];
            if(summ>=target){
                while(start<=i && summ>=target){ 
                ans=min(ans,i-start+1);
                 summ-=nums[start];
                 start++;
            }}
            i++;

        }
        if(ans==INT_MAX){return 0;}
        return ans;
        
    }
};