class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        int n = nums.size();

        sort(nums.begin(), nums.end());

        vector<int> ans;
        vector<vector<int>> ans2;

        for(int i = 0; i < n; i++) {

           
            if(i > 0 && nums[i] == nums[i - 1])
                continue;

            int a = nums[i];

           
            int l = i + 1;
            int r = n - 1;

            while(l < r) {

               
                int sum = nums[l] + nums[r];

                if(sum == -a) {

                    ans.push_back(a);
                    ans.push_back(nums[l]);
                    ans.push_back(nums[r]);

                    ans2.push_back(ans);
                    ans.clear();

                    l++;
                    r--;

        
                    while(l < r && nums[l] == nums[l - 1]) {
                        l++;
                    }

               
                    while(l < r && nums[r] == nums[r + 1]) {
                        r--;
                    }
                }

                else if(sum < -a) {
                    l++;
                }

                else {
                    r--;
                }
            }
        }

        return ans2;
    }
};