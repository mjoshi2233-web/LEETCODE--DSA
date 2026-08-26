class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        string ans="";
        int arr[2]={0};
        int start=0;
        for(int i=0;i<s.length();i++){
           if(s[i]=='1'){
            arr[1]++;
           }
           if(arr[1]>k){
            while(start<s.length() && s[start]!='1'){
                start++;
            }
            arr[1]--;start++;
            while(start<s.length() && s[start]!='1'){
                start++;
            }
           }
           if(arr[1]==k){
            while(start<s.length() && s[start]!='1'){
                start++;
            }
            string temp = s.substr(start, i - start + 1);

                if(ans == "") {
                    ans = temp;
                }
                else if(temp.length() < ans.length()) {
                    ans = temp;
                }
                else if(temp.length() == ans.length() && temp < ans) {
                    ans = temp;
                }
            }
           }  
        return ans;
    }
};