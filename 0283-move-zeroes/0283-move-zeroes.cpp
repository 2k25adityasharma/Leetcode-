class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // int j = 0;

        // for (int i = 0; i < nums.size(); i++) {
        //     if (nums[i] != 0) {
        //         swap(nums[j], nums[i]);
        //         j++;
        //     }
        // }

        vector<int>v;
        int c=0;
        for(int i =0;i<nums.size();i++){
   if(nums[i]==0){
    c++;
   }
   else{
    v.push_back(nums[i]);
   }
        }
     
     for(int i =0;i<c;i++){
        v.push_back(0);
     }
     
     for(int i =0;i<v.size();i++){
         nums[i]=v[i];
     }
    
    }
};