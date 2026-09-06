class Solution {
public:
    int countRotations(string s, int k) {
        int count=0;
        int n=s.length();
        for(int i=0;i<s.length()-1;i++){
               if(s[i]==s[i+1]){count++;}
        }
        int ans=(count==k);
        for(int i=1;i<s.length();i++){
            int temp=count+(s[0]==s[n-1])-(s[i]==s[i-1]);
            if(temp==k){ans++;}

        }
        return ans;
        
    }
};