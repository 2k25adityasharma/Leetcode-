class Solution {
public:
    int maxProduct(int n) {
     int a = -1;
     int b =-1;
    int t = n;
     while(t>0){
        int d = t%10;
    if (d >= a) {
    b = a;
    a = d;
}
else if (d > b) {
    b = d;
}
     t=t/10;
     }
    
return a*b;
    }
};