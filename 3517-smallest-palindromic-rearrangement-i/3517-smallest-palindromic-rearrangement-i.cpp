class Solution {
public:
    string smallestPalindrome(string s) {
        map<char, int> mp;

        for(char ch : s)
            mp[ch]++;

        int n = s.size();
        string ans(n, ' ');

        int l = 0, r = n - 1;
        char mid = '\0';

        for(auto &x : mp) {
            while(x.second >= 2) {
                ans[l] = x.first;
                ans[r] = x.first;
                l++;
                r--;
                x.second -= 2;
            }

            if(x.second == 1)
                mid = x.first;
        }

        if(mid != '\0')
            ans[l] = mid;

        return ans;
    }
};