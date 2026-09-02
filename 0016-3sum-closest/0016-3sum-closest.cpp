class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int mini = INT_MAX;
            int ans =0;
        for(int i =0;i<n;i++){
            int a = nums[i];
            int l = i+1;
            int r = n-1;
            while(l<r){
             int sum = a+nums[l]+nums[r];
             if(sum == target)
             return sum;

           int diff = abs(target - sum);
             if(mini>diff){
            mini = diff;
            ans = sum;
             }                
       else if(sum<target)
       l++;
       else
       r--;

            }
        }
        return ans;
    }
};