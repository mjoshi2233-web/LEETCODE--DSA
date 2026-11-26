class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n=nums.size();
        vector<long long> prefix(n);
        vector<long long> suffix(n);
        int maxx=nums[0];
        for(int i=1;i<n-1;i++){
            prefix[i]=maxx;
            maxx=max(maxx,nums[i]);
        }
        maxx=nums[n-1];
        for(int i=n-2;i>0;i--){
            suffix[i]=maxx;
            maxx=max(maxx,nums[i]);
        }
        long long ans=0;
        for(int i=1;i<n-1;i++){
            long long temp=(prefix[i]-nums[i])*suffix[i];
            if(temp>0){
                ans=max(ans,temp);
            }
        }
        return ans;
    }
};