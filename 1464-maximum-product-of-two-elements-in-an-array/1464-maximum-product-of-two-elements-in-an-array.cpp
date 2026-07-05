class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n= nums.size();
        if(n==1) return nums[0];
        int ans = INT_MIN;
         for(int i =0;i<n;i++){
            for(int j = i+1;j<n;j++){
             int p = (nums[i]-1)*(nums[j]-1);
             ans = max(p,ans);
            }
         }
         return ans;
    }
};