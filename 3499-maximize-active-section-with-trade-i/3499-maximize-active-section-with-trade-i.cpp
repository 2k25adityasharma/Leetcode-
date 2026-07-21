class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int one = 0;
        int previous = -1;
        int sum = 0;
        int n = s.size();

        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                one++;
            } else {
                int curr = 0;

                while (i < n && s[i] == '0') {
                    curr++;
                    i++;
                }

                if (previous != -1) {
                    sum = max(sum, previous + curr);
                }

                previous = curr;
                i--;
            }
        }

        return one + sum;
    }
};