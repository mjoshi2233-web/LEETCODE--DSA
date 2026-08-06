class Solution {
public:
    int dp(int k ,int n,vector<int>& ans){
        if(k==n){return 1;}
        if(k>n){return 0;}
        if(ans[k]!=-1){return ans[k];}
        int left=dp(k+1,n,ans);
        int right=dp(k+2,n,ans);
        return ans[k]=(left+right);
    }
    int climbStairs(int n) {
       vector<int> ans(n+1,-1);
       int f=dp(0,n,ans);
       return f;
    }
};