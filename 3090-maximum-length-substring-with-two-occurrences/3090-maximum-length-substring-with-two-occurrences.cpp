class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n = s.size();
        int maxi = 0;

            unordered_map<char, int> mp;
        for (int i = 0; i < n; i++) {
            int c = 0;

            for (int j = i; j < n; j++) {

                mp[s[j]]++;
                c++;

                if (mp[s[j]] > 2) {
                    mp.clear();
                    break;
                }

                maxi = max(maxi, c);
            }
        }

        return maxi;
    }
};