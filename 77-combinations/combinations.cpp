class Solution {
public:
void check(int ind,vector<vector<int>>& ans,int n,int k,vector<int> &ds){
    if(ds.size()==k){
        ans.push_back(ds);return;
    }
    if(ind>n){return;}
    ds.push_back(ind);
    check(ind+1,ans,n,k,ds);
    ds.pop_back();
    check(ind+1,ans,n,k,ds);
    return;
}
    vector<vector<int>> combine(int n, int k) {
        vector<int> ds;
        vector<vector<int>> ans;
        check(1,ans,n,k,ds);
        return ans;
        
    }
};