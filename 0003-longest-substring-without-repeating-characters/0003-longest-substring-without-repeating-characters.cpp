class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       unordered_map<char, int>mp;

      int n  = s.size();
      if(n==1) return 1;
      int j =0;
      int maxi =0;
      for(int i =0;i<n;i++){
        mp[s[i]]++;
       
        while(mp[s[i]]>1){
         
            mp[s[j]]--;
         j++;
        }
        maxi= max(maxi,i-j+1);
        
      }
  return maxi;
      }
};