class Solution {
public:
    int check(vector<int> &dp,int i,int n,int incre){
       
        
        if(i>n){return 1e9;}
        if(i==n){return 0;}
        if(dp[i]!=-1 && incre==1){return dp[i];}
        int take=1 + check(dp,i+incre,n,incre+1);
        int skip=1e9;
        if(incre>1){ skip=1 + check(dp,i,n,1);}
        if(incre==1){dp[i]=min(take,skip);}
        return min(take,skip);
        
    }
    int minDays(int n) {
        vector<int> dp(n+2,-1);
        int ans=check(dp,0,n,1);
        return ans;
        
        
    }
};