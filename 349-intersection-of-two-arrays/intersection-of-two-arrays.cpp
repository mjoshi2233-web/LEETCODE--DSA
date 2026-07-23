class Solution {
public:
    vector<int> intersection(vector<int>& num1, vector<int>& num2) {
        sort(num1.begin(),num1.end());
        sort(num2.begin(),num2.end());
        int m=num1.size();
        int last=-1;
        int n=num2.size();
        vector<int> ans;
        int i=0,j=0;
        while(i<m && j<n){
            if(num1[i]<num2[j]){
                i++;
            }
            else if( num1[i]==num2[j] && num1[i]!=last){
                ans.push_back(num1[i]);
last=num1[i];
                i++;j++;
            }
            else{j++;}
        }
return ans;
    }
};