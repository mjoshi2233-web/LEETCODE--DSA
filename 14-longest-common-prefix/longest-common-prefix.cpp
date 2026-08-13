class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans=strs[0];
        for(int i=1;i<strs.size();i++){
            string temp="";
            int j=0;
            string x=strs[i];
            int n=ans.size();
            int m=strs[i].size();
            while(j<n&&j<m){
                if(ans[j]==x[j]){
                    temp+=x[j];
                    j++;
                }
                else {break;}
                
            }ans=temp;
            
        }
        return ans;
    }
};