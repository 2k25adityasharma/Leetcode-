class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {

        long long ans = 0;
        long long sum = 0;

        int n = nums.size();
        int j = 0;
        int cnt = 0;

        unordered_map<int, int> mp;

      for(int i = 0; i < n; i++) {

    while(mp[nums[i]] > 0) {
        sum -= nums[j];
        mp[nums[j]]--;
        j++;
        cnt--;
    }

    mp[nums[i]]++;
    sum += nums[i];
    cnt++;

    if(cnt == k) {
        ans = max(ans, sum);

        sum -= nums[j];
        mp[nums[j]]--;
        j++;
        cnt--;
    }
}
        return ans;
    }
};