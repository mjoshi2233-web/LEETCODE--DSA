class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map <char,int> mp;
        int count_even=0;
        int count_odd=0;

        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        for(auto &x:mp){
            if(x.second%2==1){
                count_odd=1;
            }
            count_even+=x.second/2;
        }
        return (2*count_even)+count_odd;
        
    }
};