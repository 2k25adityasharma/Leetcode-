class Solution {
public:
    bool checkDivisibility(int n) {
        
        int t = n;
        int add =0;
        int mul =1;
        while(t>0){
            int a = t%10;
         
            add+=a;
            mul*=a;

            
            t/=10;
        }
        int h = add+mul;
        if(n%h==0)
        return true;
        else
            return false;
        
    }
};