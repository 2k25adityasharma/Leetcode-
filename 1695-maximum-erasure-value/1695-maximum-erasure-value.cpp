class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_map<int,int>mp;
        int sum =0;
        int maxi = INT_MIN;
  int j =0;
    for(int i =0;i<nums.size();i++){
     mp[nums[i]]++;
     sum+=nums[i];
     while(mp[nums[i]]>1){
        mp[nums[j]]--;
        sum-=nums[j];
        j++;

     }
     maxi = max(maxi,sum);
    }
       return maxi; 
    }
};