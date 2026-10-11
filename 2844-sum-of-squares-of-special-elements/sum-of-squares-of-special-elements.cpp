class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int ans=0;

        for(int i=0;i<nums.size();i++){
            int k=i+1;
            if(nums.size()%k==0){
                ans+=(nums[i]*nums[i]);
            }
        }
        return ans;
    }
};