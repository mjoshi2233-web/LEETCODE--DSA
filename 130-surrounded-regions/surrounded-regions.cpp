class Solution {
public:
bool check(int i, int j,
           vector<vector<char>>& board,
           vector<vector<bool>>& vis)
{
    int m = board.size();
    int n = board[0].size();

    if(i<0 || j<0 || i>=m || j>=n || board[i][j]=='X')
        return true;

    if(vis[i][j])
        return true;

    vis[i][j] = true;

    if(i==0 || j==0 || i==m-1 || j==n-1)
        return false;

    return check(i+1,j,board,vis) &&
           check(i-1,j,board,vis) &&
           check(i,j+1,board,vis) &&
           check(i,j-1,board,vis);
}
void fill(int i, int j, vector<vector<char>>& board)
{
    int m = board.size();
    int n = board[0].size();

    if(i<0 || j<0 || i>=m || j>=n || board[i][j]=='X')
        return;

    board[i][j] = 'X';

    fill(i+1,j,board);
    fill(i-1,j,board);
    fill(i,j+1,board);
    fill(i,j-1,board);
}
    void solve(vector<vector<char>>& board) {
          int m = board.size();
    int n = board[0].size();

    for(int i=1;i<m-1;i++)
    {
        for(int j=1;j<n-1;j++)
        {
            if(board[i][j]=='O')
            {
                vector<vector<bool>> vis(m, vector<bool>(n,false));

                if(check(i,j,board,vis))
                {
                    fill(i,j,board);
                }
            }
        }
    }
        
    }
};