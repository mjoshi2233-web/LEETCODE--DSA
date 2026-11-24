class Solution {
public:
    int maxLength(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i;j<nums.size();j++){
                long long gcdd=0;
                long long  lcmm=1;
                long long  product=1;
                for(int k=i;k<=j;k++){
                    gcdd=gcd(gcdd,nums[k]);
                    lcmm=lcm(lcmm,nums[k]);
                    product*=(long long)nums[k];
                    if(lcmm*gcdd<product){
                        break;
                    }
                }
                if(product==gcdd*lcmm){
                    ans=max(ans,(j-i+1));
                }
            }
        }
        return ans;
    }
};