class Solution {
public:
    int titleToNumber(string c) {
        int n = c.size();
        if(n==1){
        return int(c[0])-64;

        }
        int ans =0;
      for(int i =0;i<n;i++){
   ans =ans*26 +(c[i]-64);
      }
      return ans;
    }
};