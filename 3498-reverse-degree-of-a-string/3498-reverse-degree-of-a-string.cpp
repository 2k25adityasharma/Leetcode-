class Solution {
public:
    int reverseDegree(string s) {
        int sum =0;
        for(int i =0;i<s.size();i++){
          int a =(i+1)*('z'-s[i]+1) ;
        sum+=a;
        }
        return sum;
    }
};