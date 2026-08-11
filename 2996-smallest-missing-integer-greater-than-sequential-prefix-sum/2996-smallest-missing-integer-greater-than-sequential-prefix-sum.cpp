class Solution {
public:
    int missingInteger(vector<int>& nums) {

        int sum = nums[0];


        for(int i = 1; i < nums.size(); i++) {

            if(nums[i] == nums[i - 1] + 1)
                sum += nums[i];
            else
                break;
        }

     
        int ans = sum;
        sort(nums.begin(),nums.end());
for(int i =0;i<nums.size();i++){
    if(ans==nums[i])
    ans++;
}

        return ans;
    }
};