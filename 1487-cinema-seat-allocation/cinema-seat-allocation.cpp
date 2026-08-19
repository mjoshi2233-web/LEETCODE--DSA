class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& res) {
        int count=0;
        set <vector<int>> mp;
        set <int> check;
        for(int i=0;i<res.size();i++){
           mp.insert(res[i]);
           check.insert(res[i][0]);}
           count=2*(n-check.size());        
        for(auto i:check){
            bool k=true,l=true;
            if(mp.find({i,2})==mp.end()&& mp.find({i,3})==mp.end() && mp.find({i,4})==mp.end() && mp.find({i,5})==mp.end()){
                count++;k=false;
            }if(k){ 
             if(mp.find({i,4})==mp.end()&& mp.find({i,5})==mp.end() && mp.find({i,6})==mp.end() && mp.find({i,7})==mp.end()){
                count++;l=false;
            }}
            if(l){ 
             if(mp.find({i,6})==mp.end()&& mp.find({i,7})==mp.end() && mp.find({i,8})==mp.end() && mp.find({i,9})==mp.end()){
                count++;
            }}

        }
        return count;
        
}
};