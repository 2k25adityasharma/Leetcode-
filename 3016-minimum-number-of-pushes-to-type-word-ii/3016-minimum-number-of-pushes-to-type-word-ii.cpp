class Solution {
public:
    int minimumPushes(string word) {

        unordered_map<char, int> mp;

        for(char ch : word)
            mp[ch]++;

        vector<int> freq;

        for(auto x : mp)
            freq.push_back(x.second);

        sort(freq.begin(), freq.end(), greater<int>());

        int ans = 0;

        for(int i = 0; i < freq.size(); i++) {
            ans += ((i / 8) + 1) * freq[i];
        }

        return ans;
    }
};