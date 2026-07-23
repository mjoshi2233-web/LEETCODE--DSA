class Solution {
public:
    vector<int> intersect(vector<int>& num1, vector<int>& num2) {
         sort(num1.begin(),num1.end());
        sort(num2.begin(),num2.end());
        int m=num1.size();
       
        int n=num2.size();
        vector<int> ans;
        int i=0,j=0;
        while(i<m && j<n){
            if(num1[i]<num2[j]){
                i++;
            }
            else if( num1[i]==num2[j] ){
                ans.push_back(num1[i]);

                i++;j++;
            }
            else{j++;}
        }
return ans;
        
        
    }
};