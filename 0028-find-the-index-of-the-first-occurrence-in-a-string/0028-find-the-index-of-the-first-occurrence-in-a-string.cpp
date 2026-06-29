class Solution {
public:
    int strStr(string haystack, string needle) {
      auto f = haystack.find(needle);
      if(f!=string::npos)
      return f;
      else
      return -1;
        
    }
};