class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n = nums.size();
        int mini =INT_MAX;
     sort(nums.begin(),nums.end());
      int st =0;
         
      for( int end =k-1;end<n;end++){
        int diff = nums[end]-nums[st];
        mini= min(mini,diff);
             st++;
      } 
      return mini;
    }
};