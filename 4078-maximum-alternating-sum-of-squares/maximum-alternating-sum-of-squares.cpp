class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            nums[i]=abs(nums[i]);
        }
        sort(nums.begin(),nums.end());
        int start=0;
        int end=nums.size()-1;
        long long ans=0;
        for(int i=0;i<nums.size();i++){
             if(i%2==0){
                ans+=(nums[end]*nums[end]);
                end--;
             }
             else{
                ans-=(nums[start]*nums[start]);
                start++;
             }

        }
       return ans; 
    }
};