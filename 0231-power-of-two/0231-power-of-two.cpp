class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1)
        return true;
        double a = n;
        while(a>0){
            if(a==1)
            return true;
         a/=2;
         
        }
    
        return false;
    }
};