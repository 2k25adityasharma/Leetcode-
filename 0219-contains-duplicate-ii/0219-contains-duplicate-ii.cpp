class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
         unordered_map<int,vector<int>>mp;
         for(int i =0;i<nums.size();i++){
            mp[nums[i]].push_back(i);
         }
         for(auto i:mp){
            if(i.second.size()>=2){
              for(int j =1;j<i.second.size();j++){
                if(abs(i.second[j-1] -i.second[j])<=k)
                return true;
              }
            }
         }
         return false;
    }
};