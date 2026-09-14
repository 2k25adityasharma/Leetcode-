class Solution {
public:
    int addDigits(int num) {
        
        while (num > 9) {
            int t = num;
            int s = 0;
            
        
            while (t > 0) {
                int a = t % 10;
                s += a;
                t /= 10;
            }
            
     
            num = s;
        }
        return num;
    }
};