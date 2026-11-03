class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans;
         vector<int>positive;
         vector<int>negative;
         int n = nums.size();
         for(int i =0;i<n;i++){
            if(nums[i]>0){
                positive.push_back(nums[i]);
              }
              else{
                negative.push_back(nums[i]);
              }

         }
         int m = positive.size();
         int k = negative.size();
         int i =0;
         int j =0;
         while(i<m&&j<k){
            ans.push_back(positive[i]);
            ans.push_back(negative[j]);
            i++;
            j++;
         }
         return ans;
    }
};