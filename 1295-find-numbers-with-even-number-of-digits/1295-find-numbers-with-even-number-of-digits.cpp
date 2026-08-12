class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int m = nums.size();
            int ansa =0;
        for(int i =0;i<m;i++){
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