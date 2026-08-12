class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n = nums.size();
            int ansa =0;
        for(int i =0;i<n;i++){
            int a  = nums[i];
            int n =0;
            while(a>0){
                int b= a%10;
            n++;
            a= a/10; 
            }
            if(n%2==0)
            ansa++;
        }
        return ansa;
    }
};