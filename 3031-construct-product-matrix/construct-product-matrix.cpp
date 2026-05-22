class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        int m=grid.size();
        long long pre=1;
        long long suf=1;
        int n=grid[0].size();
        vector<vector<int> >ans ( m,vector<int> ( n,1));
         for( int i=0;i<m;i++){
            for( int j=0;j<n;j++){
                ans[i][j]=(ans[i][j] * pre)%12345;
                pre=(pre*grid[i][j])%12345;
            }
        }

         for( int i=m-1;i>=0;i--){
            for(int  j=n-1;j>=0;j--){
                ans[i][j]=(ans[i][j]*suf)%12345;
                suf=(suf*grid[i][j])%12345;
            }
        }
         
        
        return ans;
    }
};