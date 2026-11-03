class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

        int n = nums.size();
       vector<int>ans(n);
       int P =0;
       int N =1;
       for(int i=0;i<nums.size();i++){
       if(nums[i]>=0){
           ans[P]=nums[i];
    P+=2;
        }
   else{
    ans[N]=nums[i];
    N+=2;
   }
 }
 return ans;
    }
};