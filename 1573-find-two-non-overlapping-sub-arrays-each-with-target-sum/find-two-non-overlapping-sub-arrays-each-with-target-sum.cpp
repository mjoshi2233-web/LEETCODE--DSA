class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
        int n = arr.size();

        vector<int> best(n, INT_MAX);

        int start = 0;
        int sum = 0;
        int ans = INT_MAX;
        int prev = INT_MAX;

        for (int i = 0; i < n; i++) {
            sum += arr[i];

            while (sum > target) {
                sum -= arr[start];
                start++;
            }

            if (sum == target) {
                int len = i - start + 1;

                // Combine current subarray with best previous one
                if (start > 0 && best[start - 1] != INT_MAX) {
                    ans = min(ans, len + best[start - 1]);
                }

                // Current subarray can become the best
                // subarray up to index i
                prev = min(prev, len);
            }

            best[i] = prev;
        }

        return ans == INT_MAX ? -1 : ans;
    }
};