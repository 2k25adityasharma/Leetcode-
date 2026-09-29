class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int j =0;
        int i =0;
        int c=0;
        long long sum  =0;
        long long maxi  =0;
        unordered_map<int,int>mp;
        for(i =0;i<n;i++){
         while(mp[nums[i]]>0){
           mp[nums[j]]--;
            c--;
            sum-=nums[j];
            j++;
         }
         mp[nums[i]]++;
         sum+=nums[i];
         c++;
         if(c==k){
            maxi = max(maxi,sum);
           mp[nums[j]]--;
            c--;
            sum-=nums[j];
            j++;
         }
        }
        return maxi;
    }
};