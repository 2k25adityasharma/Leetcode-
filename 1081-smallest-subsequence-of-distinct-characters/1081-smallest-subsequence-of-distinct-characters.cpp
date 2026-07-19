class Solution {
public:
    string smallestSubsequence(string s) {
        int n = s.size();

        unordered_map<char, vector<int>> mp;

        for (int i = 0; i < n; i++) {
            mp[s[i]].push_back(i);
        }

        string ans = "";
        vector<bool> vis(26, false);

        for (int i = 0; i < n; i++) {

            if (vis[s[i] - 'a'])
                continue;

            
            while (!ans.empty() && ans.back() > s[i]) {

                bool future = false;

               
                for (int x : mp[ans.back()]) {
                    if (x > i) {
                        future = true;
                        break;
                    }
                }

                if (!future)
                    break;

                vis[ans.back() - 'a'] = false;
                ans.pop_back();
            }

            ans.push_back(s[i]);
            vis[s[i] - 'a'] = true;
        }

        return ans;
    }
};