class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set <vector<int>> s;
        sort(nums.begin(),nums.end());
        if(nums.size()<4){return {};}
        for(int i=0;i<nums.size()-3;i++){
         for(int j=i+1;j<nums.size()-2;j++){
            int k=j+1;
            int l=nums.size()-1;
            while(k<l){
                long long summ =nums[i]+nums[j];
                summ+=nums[k];
                summ+=nums[l];
                if(summ==target){
                    s.insert({nums[i],nums[j],nums[k],nums[l]});
                    k++;l--;
                }
                else if(summ<target){
                    k++;
                }
                else{l--;}
            }
         }
        }
        return {s.begin(),s.end()};
    }
};