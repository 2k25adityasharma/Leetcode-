class Solution {
public:
    string multiply(string num1, string num2) {
        int n = num1.size();
        int m = num2.size();

        vector<int> ans(n + m, 0);

        for(int i = n - 1; i >= 0; i--) {
            for(int j = m - 1; j >= 0; j--) {

                int a = (num1[i] - '0') * (num2[j] - '0');

                int p1 = i + j;
                int p2 = i + j + 1;

                int sum = a + ans[p2];

                ans[p2] = sum % 10;
                ans[p1] += sum / 10;
            }
        }

        string result;

        for(int i = 0; i < n + m; i++) {
            if(result.empty() && ans[i] == 0)
                continue;

            result += (ans[i] + '0');
        }

        return result.empty() ? "0" : result;
    }
};