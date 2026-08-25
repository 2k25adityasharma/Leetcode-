class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {

        unordered_map<int,int> mp;

        for(auto x : nums) {
            mp[x]++;
        }

        nums.clear();

        for(auto x : mp) {
            nums.push_back(x.first);
        }

        sort(nums.begin(), nums.end());

        int n = nums.size();
        int a = 1;
    
        for(int i = 0; i < n; i++) {

            if(nums[i] == k * a) {
                a++;
                
            }

            if(k * a < nums[i]) {
                return k * a;
            }
        }

        return k * a;
    }
};