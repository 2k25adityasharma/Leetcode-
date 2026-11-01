class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int countzero = 0;
        int maxl = 0;
        int j = 0;

        for(int i = 0; i < n; i++) {

            if(nums[i] == 0)
                countzero++;

            if(countzero >= 2) {
                if(nums[j] == 0) {
                    countzero--;
                }
                j++;
            }

            maxl = max(maxl, i-j+1);
        }

        return maxl-1;
    }
};