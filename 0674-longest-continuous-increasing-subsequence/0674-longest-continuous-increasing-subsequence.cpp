class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int n = nums.size();
        int ans =0;
        int j =0;
        for(int i =0;i<n-1;i++){
        if(nums[i]<nums[i+1]){
            ans= max(ans,i-j+1);
            }
        else{
            j=i+1;
        }
        }
        return ans+1;
    }
};