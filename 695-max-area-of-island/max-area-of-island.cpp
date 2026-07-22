class Solution {
public:

    int  dfs( int &ans,int i,int j,vector<vector<int>> &grid){
            int m=grid.size();
            int n=grid[0].size();
            if( i>=m  || j>=n || i<0 || j<0|| grid[i][j]==0){
                return 0;
            }
            ans+=1;
            grid[i][j]=0;
            dfs(ans,i+1,j,grid);
            dfs(ans,i-1,j,grid);
            dfs(ans,i,j+1,grid);
            dfs(ans,i,j-1,grid);

        return ans;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
         int m=grid.size();
         int final=0;
         int n=grid[0].size();
         for( int i=0;i<m;i++){
            for(int j=0;j<n;j++){
           if(grid[i][j]==1){
                  int ans=0;
             final=max(final,dfs(ans,i,j,grid));
           } }
         }

return final;
}
};