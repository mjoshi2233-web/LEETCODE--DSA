class Solution {
public:
    int minDays(int n) {

        vector<int> dp(n + 1, 1e9);
        dp[0] = 0;

        for(int x = 1; x <= n; x++) {

            for(int k = 1; k * (k + 1) / 2 <= x; k++) {

                int triangular = k * (k + 1) / 2;

                if(triangular == x) {
                    dp[x] = min(dp[x], k);
                }
                else {
                    dp[x] = min(dp[x],
                                dp[x - triangular] + k + 1);
                }
            }
        }

        return dp[n];
    }
};