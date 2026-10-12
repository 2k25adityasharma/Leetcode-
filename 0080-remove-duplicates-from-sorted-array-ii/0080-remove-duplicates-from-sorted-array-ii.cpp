class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int n = nums.size();
       int c =1;
      for(int i =1;i<n;i++){
        if(nums[i-1] ==nums[i]){
            c++;
         if(c>2){
            nums.erase(nums.begin()+i) ;
            i--;
            n--;
         }
        }
        else{
            c=1;
        }
      }

     return n;
    }
};