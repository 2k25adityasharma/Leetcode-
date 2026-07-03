class Solution {
public:
    bool checkPerfectNumber(int n) {
       int sum =0;
       if(n==1) return false;
        for(int i =1;i*i<=n;i++){
           if(n%i==0){
            
            sum +=i;
            int a = n/i;
            if(i!=a && a !=n){
                sum+=a;
            }
           }
        }
        if(sum ==n)return true;
        else  return false;
    }
};