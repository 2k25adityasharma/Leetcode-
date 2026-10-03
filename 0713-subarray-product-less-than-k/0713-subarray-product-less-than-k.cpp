class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int c = 0;
        int j = 0;
        long long m = 1;

        if (k <= 1)
            return 0;

        for (int i = 0; i < nums.size(); i++) {

            m *= nums[i];

            while (m >= k) {
                m /= nums[j];
                j++;
            }

            c += i - j + 1;
        }

        return c;
    }
};