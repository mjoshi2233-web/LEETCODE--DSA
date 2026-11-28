class Solution {
public:
    bool checkString(string s) {
      int start=-1,end=-1;
      for(int i=0;i<s.length();i++){
        if(s[i]=='a'){
            end=i;
        }
      }
      for(int i=0;i<s.length();i++){
        if(s[i]=='b'){
            start=i; break;
        }
      }
      if(start==-1 || end==-1){return true;}
      return end<=start;
        
    }
};