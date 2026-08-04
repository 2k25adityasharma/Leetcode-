class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int ele = nums[0];
        vector<int>ans;
        int i =1;
        while(i<n){
            if(nums[i]-ele==1){
                ele= nums[i];
                i++;
                continue;
            }
            else{
            ans.push_back(ele+1);
         ele++;
            } 
        }
        return ans;
    }
};