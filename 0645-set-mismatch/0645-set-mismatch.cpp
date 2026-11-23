class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        vector<int> ans;

        // Find duplicate
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] == nums[i-1]) {
                ans.push_back(nums[i]);
                break;
            }
        }

        // Find missing number
        int c = 1;

        for(int i = 0; i < nums.size(); i++) {

            if(nums[i] == c) {
                c++;
            }
            else if(nums[i] > c) {
                break;
            }
        }

        ans.push_back(c);

        return ans;
    }
};