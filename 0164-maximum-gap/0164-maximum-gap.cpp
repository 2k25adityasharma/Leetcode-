class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return 0;
        sort(nums.begin(),nums.end());
        int a = nums[0];
        int m = INT_MIN;
        for(int i =1;i<n;i++){
        int b = nums[i]-a;
      m = max(m,b);
      a = nums[i];
        }
        return m;
    }
};