class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty())
            return 0;

        set<int> s(nums.begin(), nums.end());

        vector<int> v(s.begin(), s.end());

        int current = 1;
        int best = 1;

        for (int i = 1; i < v.size(); i++) {
            if (v[i] - v[i - 1] == 1) {
                current++;
            } else {
                current = 1;
            }

            best = max(best, current);
        }

        return best;
    }
};