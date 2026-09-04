class Solution {
public:
    int myAtoi(string s) {
        int ans=0;
        int i=0;
        int sign=1;
        while(i<s.length() && s[i]==' '){
            i++;
        }
        if(i<s.length() && s[i]=='-'){
            sign=0;
            i++;
        }
        if(i<s.length() &&(  s[i]=='+'&& sign==1) ){i++;}
        while(i<s.length()  && (s[i]>='0'  && s[i]<='9')){
            int digit=s[i]-'0';
            if(ans>INT_MAX/10 || (ans==INT_MAX/10 && digit>INT_MAX%10)){
                if(sign==0){return INT_MIN;}
                else{return INT_MAX;}
            }
            else{
                ans=ans*10+digit;
                i++;
            }
        }
        if(sign==0){ans=-ans;}
        return ans;
    }
};