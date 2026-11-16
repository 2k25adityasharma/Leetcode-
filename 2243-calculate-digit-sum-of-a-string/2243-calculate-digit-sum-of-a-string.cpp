
class Solution {
public:
    string digitSum(string s, int k) {

        if (s.size() <= k) return s;

        string a = "";
        int i = 0;
        int j = 0;

        while (i < s.size()) {
            int sum = 0;
            int count = 0;

            while (j < s.size() && count < k) {
                sum += s[j] - '0';
                j++;
                count++;
            }

            a += to_string(sum);
            i = j;
        }

        return digitSum(a, k);
    }
};
