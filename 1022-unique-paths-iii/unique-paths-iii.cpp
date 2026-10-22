class Solution {
public:
    void check( int i,int j, vector<vector<int>>& grid,vector<vector<int>> visited,int m,int n, int& ans){
        if(i<0||j<0 || i==m|| j==n || visited[i][j]==1|| grid[i][j]==-1){
            return ;
        }
        visited[i][j]=1;
        if(grid[i][j]==2){
            for(int l=0;l<m;l++){
                for(int x=0;x<n;x++){
                    if(visited[l][x]==-1 && grid[l][x]==0){
                        return;
                    }
                }
            }
            ans++;
        }

       check(i+1,j,grid,visited,m,n,ans);
        check(i-1,j,grid,visited,m,n,ans);
         check(i,j+1,grid,visited,m,n,ans);
          check(i,j-1,grid,visited,m,n,ans);
       
        return;
    }
    int uniquePathsIII(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>> visited(m,vector<int>(n,-1));
        int l,x;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){l=i;x=j;break;}
            }
        }
        int ans=0;
        check(l,x,grid,visited,m,n,ans);
        return ans;
        
    }
};