class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       map<int,int>mp;
       int n  = nums.size();
       int sum =0;
       for(int i =0;i<n;i++){
       sum = nums[i];
       int need = target - sum ;
       if(mp.find(need)!=mp.end()){
        return {mp[need],i};
       }
       mp[sum]=i;
       }

      return {};
    }
};