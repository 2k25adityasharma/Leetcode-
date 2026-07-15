class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int e = 0;
        for(int i =2;i<=2*n;i=i+2)
        e +=i;

        int o = 0;
        for(int i =1;i<2*n;i=i+2)
        o+=i;

     int maxi =0;
     if(e>=0)
     maxi=e;
     else
     maxi =0;

   int ans =0;
     for(int i =1;i<=maxi;i++){
    if(e%i==0 && o%i ==0)
    ans = i;
     }
     return ans;
    }
};