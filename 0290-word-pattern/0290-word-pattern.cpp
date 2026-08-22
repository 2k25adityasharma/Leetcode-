class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> mp;
        unordered_map<string, char> p;

        stringstream ss(s);
        string word;

        vector<string> words;

        while (ss >> word) {
            words.push_back(word);
        }

        if (pattern.size() != words.size())
            return false;

        for (int i = 0; i < pattern.size(); i++) {

            char ch = pattern[i];
            string w = words[i];

        
            if (mp.count(ch)) {
                if (mp[ch] != w)
                    return false;
            }

            
            if (p.count(w)) {
                if (p[w] != ch)
                    return false;
            }

            mp[ch] = w;
            p[w] = ch;
        }

        return true;
    }
};