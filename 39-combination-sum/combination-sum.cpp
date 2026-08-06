class Solution {
public:
     void xy(int ind,int summ,vector<vector<int>> &ans,vector<int> cand,int target,int n,vector<int> dp){ 
          if(ind==n){
            return;
          }

          dp.push_back(cand[ind]);
          summ+=cand[ind];
          if(summ==target){
            ans.push_back(dp);
           
            
          }
          if(summ>target){
            dp.pop_back();
            summ-=cand[ind];
            xy(ind + 1, summ, ans, cand, target, n, dp);
          return;}
          xy(ind,summ,ans,cand,target,n,dp);
          summ-=cand[ind];
          dp.pop_back();
          xy(ind+1,summ,ans,cand,target,n,dp);
         return ;}

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n=candidates.size();
        vector<vector<int>> ans;
        vector<int> dp;
        xy(0,0,ans,candidates,target,n,dp);
        return ans;
    }
};