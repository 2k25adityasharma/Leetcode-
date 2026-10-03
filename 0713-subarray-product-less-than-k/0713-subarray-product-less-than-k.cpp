class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int c=0;
        for(int i =0;i<nums.size();i++){
                long long m = 1;
            for(int j = i;j<nums.size();j++){
            
                m = m* nums[j];
            
            
        
             if(m <k)
             c++;
              else 
              break;
        }
    }
        return c;
    }
};