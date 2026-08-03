class Solution {
public:
void dfs(int i,int j,vector<vector<int>> &grid,int& flag){
     int m=grid.size();
     int n=grid[0].size();
     if(i<0 || j<0 || i>=m || j>=n || grid[i][j]==0 || grid[i][j]==2){return ;}
    
    grid[i][j]=3;
    flag=1;
    return ;

}
    int orangesRotting(vector<vector<int>>& grid) {
         int m=grid.size();
         int ans=0;
          int n=grid[0].size();
          while(true){ 
                int flag=0;
                  for(int i=0;i<m;i++){
                    for(int j=0;j<n;j++){
                         if(grid[i][j]==2){
                             dfs(i+1,j,grid,flag);
                             dfs(i-1,j,grid,flag);
                             dfs(i,j+1,grid,flag);
                             dfs(i,j-1,grid,flag);
            }
            }
     }
     for(int i=0;i<m;i++){
                    for(int j=0;j<n;j++){
                        if(grid[i][j]==3){
                            grid[i][j]=2;
                        }
                    }}
     if(flag==1){ans++;}
     else{break;} 
        
    }

for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(grid[i][j]==1){return -1;}}}

return ans; }

};