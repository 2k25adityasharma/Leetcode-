class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int n = nums.size();
        int ans =0;
        for(int i =0;i<n;i++){
            int c =0;
            int l =0;
            for(int j =i;j<n;j++){
        l = j-i+1;
   if(nums[j]==target)
   c++;

    if(c>l/2)
            ans++;
            }
           
        }
        return ans;
    }
};