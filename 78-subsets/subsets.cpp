class Solution {
public:
void subsett(vector<int> nums,set<vector<int>> &ans,int ind,vector<int> ds,int n){
    if(ind==n){
        ans.insert(ds);
        return;
    }
    ds.push_back(nums[ind]);
    subsett(nums,ans,ind+1,ds,n);
    ds.pop_back();
    subsett(nums,ans,ind+1,ds,n);
       return;
}
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        set<vector<int>> ans;
        vector <int> ds;
        subsett(nums,ans,0,ds,n);
        return {ans.begin(),ans.end()};
        
    }
};