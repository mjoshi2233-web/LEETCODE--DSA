class Solution {
public:
    int numberOfSubstrings(string s) {
        int ans=0;
        for(int i=0;i<s.length();i++){
            bool a=false,b=false,c=false;
            for(int j=i;j<s.length();j++){
                if(s[j]=='a'){a=true;}
                if(s[j]=='b'){b=true;}
                if(s[j]=='c'){c=true;}
                if(a && b && c){
                    ans+=s.length()-j;
                    break;
                }
            }
        }
        return ans;
    }
};