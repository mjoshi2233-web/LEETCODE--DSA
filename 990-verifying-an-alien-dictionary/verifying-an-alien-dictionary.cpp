class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map <char,int> mp;
        for(int i=0;i<order.length();i++){
            mp[order[i]]=i;
        }
        if(words.size()<=1){return true;}
        for(int i=0;i<words.size()-1;i++){
            int start=0;
           
            
            while(start<words[i].size() && start<words[i+1].size()){
                 if (mp[words[i][start]] < mp[words[i + 1][start]]) {
                    break;
                }
                if(mp[words[i][start]]>mp[words[i+1][start]]){
                    return false;
                    
                }
                start++;
            }
              if(start<words[i].size() && start>=words[i+1].size()){
                return false;
           

        }}
        return true;
    }
};