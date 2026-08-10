class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n <= 0)
            return false;

        if(n == 1)
            return true;

        double t = n;

        while(t >= 1) {
            t = t / 3;

            if(t == (int)t && t == 1)
                return true;
        }

        return false;
    }
};