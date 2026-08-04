class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        set <vector<int>> s;
        for(int i=0;i<n-2;i++){
            
            int j=i+1;
            int k=n-1;
            while(j<k){ 
            int summ=nums[i]+nums[j]+nums[k];
            if(summ<0){j++;}
            else if(summ>0){k--;}
            else{
                s.insert({nums[i],nums[j],nums[k]});
                j++;
                k--;
            }}
        }
        return {s.begin(),s.end()};
    }
};