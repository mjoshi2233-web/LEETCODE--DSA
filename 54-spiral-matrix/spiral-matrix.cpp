class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();vector<int> ans;
        int n=matrix[0].size();
        int top=0;
        int left=0;
        int right=n-1;
        int bottom = m-1;
        while(left<=right && top<=bottom){ 
        for(int i=left;i<=right;i++){
            ans.push_back(matrix[top][i]);}
            top++;
        for(int i=top;i<=bottom;i++){
            ans.push_back(matrix[i][right]); }
            right--;
        for(int i=right;i>=left;i--){
            if(top>bottom){break;}
            ans.push_back(matrix[bottom][i]);
        }  bottom--;      
        for(int i=bottom;i>=top;i--){
            if(left>right){break;}
            ans.push_back(matrix[i][left]);
        }
        left++;}
        return ans;
    }
};