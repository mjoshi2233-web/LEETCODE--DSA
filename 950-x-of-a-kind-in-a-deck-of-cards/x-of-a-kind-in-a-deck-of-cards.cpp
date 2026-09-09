class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map <int,int> mp;
        if(deck.size()<=1){return false;}
        for(int i=0;i<deck.size();i++){
            mp[deck[i]]++;
        }
      int gcdd=0;
        for(auto x: mp){
            gcdd=gcd(gcdd,x.second);
        }
        return gcdd>1;
        
    }
};