class Solution {
public:
    int romanToInt(string s) {
        int n=s.length();
        int ans=0;int prev=0;
        for( int i=n-1;i>=0;i--){
            int num;
            if(s[i]=='I' ){num=1;}
            if(s[i]=='V' ){num=5;}
            if(s[i]=='X' ){num=10;}
            if(s[i]=='L' ){num=50;}
            if(s[i]=='D' ){num=500;}
            if(s[i]=='C' ){num=100;}
            if(s[i]=='M' ){num=1000;}
          
          if(num<prev){
            ans-=num;
          }
          else{ans+=num;}
          prev=num;


        }
       
return ans;
        
    }
};