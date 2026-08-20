class Solution {
public:   

       int check(int i,int j,vector<vector<int>>& grid, vector<vector<int>>& moveCost,int m,int n,vector<vector<int>>&dp){

        if(i==m){
            return grid[i][j];
        }
        if(dp[i][j]!=-1){return dp[i][j];}
        int minn=INT_MAX;int temp;
        
            for(int l=0;l<=n;l++){ 
            
                 temp=grid[i][j]+moveCost[grid[i][j]][l]+check(i+1,l,grid,moveCost,m,n,dp);


        minn=min(minn,temp);
        }
            return dp[i][j]=minn;
       }
    int minPathCost(vector<vector<int>>& grid, vector<vector<int>>& moveCost) {
        int m=grid.size()-1;
        int n=grid[0].size()-1;
            int ans=INT_MAX;
        vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
        for(int i=0;i<=n;i++){ 
        ans=min(ans,check(0,i,grid,moveCost,m,n,dp));}
        return ans;
        
    }
};