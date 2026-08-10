class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
   
        int n = s.size();
        int m = p.length();

        if (n < m) {
            return {};
        }

        vector<int> ans;

        map<char, int> mp;
        map<char, int> mpp;

        // Count characters of p
        for (auto i : p) {
            mpp[i]++;
        }

        // Count first window of s
        for (int i = 0; i < m; i++) {
            mp[s[i]]++;
        }

        // Check first window
        if (mp == mpp) {
            ans.push_back(0);
        }

        // Move window
        for (int i = m; i < n; i++) {

            // Add new character
            mp[s[i]]++;

            // Remove old character
            mp[s[i - m]]--;

            if (mp[s[i - m]] == 0) {
                mp.erase(s[i - m]);
            }

            // Check window
            if (mp == mpp) {
                ans.push_back(i - m + 1);
            }
        }

        return ans;

    }
};