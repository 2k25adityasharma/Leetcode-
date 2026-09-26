class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n = heights.size();
        vector<int>s(heights.begin(),heights.end());

        sort(s.begin(),s.end());
        int c =0;
        for(int i =0;i<n;i++){
          if(s[i]!=heights[i])
          c++;
        }
        return c;
    }
};