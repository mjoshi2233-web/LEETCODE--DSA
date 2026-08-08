class Solution {
public:void xy(int ind,int summ,vector<vector<int>> &ans,vector<int> &cand,int target,vector<int>& dp){ 
    if(summ==target){
        ans.push_back(dp);
        return;
    }
    for(int i=ind;i<cand.size();i++){
        if(i>ind && cand[i]==cand[i-1]){
            continue;
        }
        if(summ + cand[i] > target) {
                break;
            }
        dp.push_back(cand[i]);
        xy(i+1,summ+cand[i],ans,cand,target,dp);
        dp.pop_back();
    }




}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> dp;
        vector<vector<int>> ans;
        sort(candidates.begin(),candidates.end());
        xy(0,0,ans,candidates,target,dp);
        return ans;
        
    }
};