class Solution {
public:
void check(int ind,vector<int>&ds,vector<vector<int>> &ans,int k,int n,int summ){     if(ds.size()==k){
            if(summ==n){
                ans.push_back(ds);
            }return;
        }
           if(ds.size()>k || ind>9|| summ>n){return;}
       
        
        ds.push_back(ind);
        summ+=ind;
        check(ind+1,ds,ans,k,n,summ);
        ds.pop_back();
        summ-=ind;
        check(ind+1,ds,ans,k,n,summ);
        return;



}
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> ds;
        vector<vector<int>> ans;
        int summ=0;
        check(1,ds,ans,k,n,summ);
        return ans;
        
    }
};