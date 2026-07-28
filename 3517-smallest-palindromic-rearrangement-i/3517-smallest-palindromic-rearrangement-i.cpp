class Solution {
public:
    string smallestPalindrome(string s) {
        sort(s.begin(), s.end());

        unordered_map<char, int> mp;
        for (char ch : s)
            mp[ch]++;

        string ans(s.size(), ' ');
        int l = 0, r = s.size() - 1;

        for (char ch : s) {
            while (mp[ch] >= 2) {
                ans[l++] = ch;
                ans[r--] = ch;
                mp[ch] -= 2;
            }
        }

        for (auto &x : mp) {
            if (x.second == 1) {
                ans[l] = x.first;
                break;
            }
        }

        return ans;
    }
};