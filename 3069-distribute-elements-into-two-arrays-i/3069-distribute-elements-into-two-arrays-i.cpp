class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int>arr1;
        vector<int>arr2;
        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);
        
            int a=0;
            int b =0;
        for(int i =2;i<nums.size();i++){
            if(arr1[a] >arr2[b]){
                arr1.push_back(nums[i]);
                a++;
            }
            else{
                arr2.push_back(nums[i]);
                b++;
            }
          
        }
       int i =0;
          for(int j = 0; j < arr1.size(); j++) {
            nums[i] = arr1[j];
            i++;
        }

      
        for(int j = 0; j < arr2.size(); j++) {
            nums[i] = arr2[j];
            i++;
        }

        return nums;
     

    }
};