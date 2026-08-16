class Solution {
public:
void perm(vector<int> & nums,vector<vector<int>>& ans,vector<int>& ds,vector<bool>& mark){
    if(ds.size()==nums.size()){
        ans.push_back(ds);return;

    }
    for(int i=0;i<nums.size();i++){
        if(!mark[i]){
            ds.push_back(nums[i]);
            mark[i]=true;
            perm(nums,ans,ds,mark);
            mark[i]=false;
            ds.pop_back();
        }
    }
    return;
    
  
}
    vector<vector<int>> permute(vector<int>& nums) {
       vector<int> ds;
       vector<bool> mark(nums.size(),false);
       vector<vector<int>> ans;
       perm(nums,ans,ds,mark);
       return ans;
        
    }
};