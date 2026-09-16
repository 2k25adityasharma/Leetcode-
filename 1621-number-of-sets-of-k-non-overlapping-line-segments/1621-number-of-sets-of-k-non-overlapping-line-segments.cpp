class Solution {
public:
    int numberOfSets(int n, int k) {
        int total_elements = n + k - 1;
        int choose = 2 * k;
      
        if (total_elements < choose) return 0;
        
        long long MOD = 1e9 + 7;
        
        if (choose > total_elements - choose) {
            choose = total_elements - choose;
        }
        
     
        vector<long long> dp(choose + 1, 0);
        dp[0] = 1; 
        
        for (int i = 1; i <= total_elements; ++i) {
            for (int j = min(i, choose); j > 0; --j) {
                dp[j] = (dp[j] + dp[j - 1]) % MOD;
            }
        }
        
        return dp[choose];
    }
};
