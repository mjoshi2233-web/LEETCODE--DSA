class Solution {
public:
    vector<vector<int>> generate(int numRows) {
         vector<vector<int>> ans;
        for(int i=0;i<numRows;i++){
            int temp=1;
            vector<int> a;
            a.push_back(1);
            for(int j=0;j<i;j++){
                 
               temp=temp*(i-j)/(j+1);
               a.push_back(temp);
              
            }
            ans.push_back(a);
        }
        return ans;
    }
};