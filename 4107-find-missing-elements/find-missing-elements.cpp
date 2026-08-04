class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int start=nums[0];
        int end=nums[n-1];
        int k=0;
        vector<int> ans;
        for(int i=start;i<end;i++){
            if(nums[k]!=i){
                ans.push_back(i);
                
            }
            else{k++;}

        }
        return ans;
    }
};