class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& s) {
        unordered_map<string,vector<string>> mp;
       for(int i=0;i<s.size();i++){
        string temp=s[i];
        sort(temp.begin(),temp.end());
        mp[temp].push_back(s[i]);
       }
       vector<vector<string>> ans;
       for(auto i:mp){
        ans.push_back(i.second);
       }
       return ans;
    }
};