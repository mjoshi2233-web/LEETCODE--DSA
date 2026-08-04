class Solution {
public:
    int dp(int n,vector<int>& ans){
        if(n==0){return 1;}
        if(n<0){return 0;}
        if(ans[n]!=-1){return ans[n];}
        int left=dp(n-1,ans);
        int right=dp(n-2,ans);
        return  ans[n]=( left + right);

    }
    int climbStairs(int n) {
       vector<int> ans(n+1,-1);
       int f=dp(n,ans);
       return f;
    }
};