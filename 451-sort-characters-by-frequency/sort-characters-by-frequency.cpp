class Solution {
public:
    string frequencySort(string s) {
        unordered_map <char,int> mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        string as="";
        vector<pair<int,char>> arr;
        for(auto&x :mp){
            arr.push_back({x.second,x.first});
        }
        sort(arr.begin(),arr.end(),greater<pair<int,char>>());
        for(int i=0;i<arr.size();i++){
            while(arr[i].first!=0){
                as+=arr[i].second;
                arr[i].first--;
            }
        }
        return as;

        
    }
};