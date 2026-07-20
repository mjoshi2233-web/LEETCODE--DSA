class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m=grid.size();
        int n=grid[0].size();

        vector<vector<int>> ans=grid;
        int count=0;
        while(count!=k){  
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(j==n-1 && i==m-1){
                    ans[0][0]=grid[i][j];
                }
                else if(j==n-1){
                    ans[i+1][0]=grid[i][j];

                }
                else {
                    ans[i][j+1]=grid[i][j];
                }
            }
        }count++;
        grid=ans;}
        return ans;
        
    }
};