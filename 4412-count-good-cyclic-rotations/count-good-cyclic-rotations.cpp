class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        long long  summ1=0;long long  summ2=0;
        int n=nums.size();
        for(int i=0;i<n/2;i++){
            summ1+=nums[i];
        }
        for(int i=n/2;i<n;i++){
            summ2+=nums[i];
        }
        int ans=summ1>summ2;
        for(int i=0;i<n-1;i++){
            summ1=summ1-nums[i%n]+nums[(i+n/2)%n];
            summ2=summ2-nums[(i+n/2)%n]+nums[i%n];
            if(summ1>summ2){ans++;}
           

        }
        return ans;
        
    }
};