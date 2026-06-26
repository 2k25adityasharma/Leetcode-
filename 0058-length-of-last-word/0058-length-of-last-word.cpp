class Solution {
public:
    int lengthOfLastWord(string s) {
      int n = s.size();
      int ans =0;
       for(int i = n-1;i>=0;i--){
        
        if(s[i]==' ')
        s.pop_back();
       else if('a'<=s[i]&&s[i]<='z')
        break;
         else if('A'<=s[i]&&s[i]<='Z')
         break;
       }
         
       for(int i =n-1;i>=0;i--){
       if(s[i]==' ')
       break;
       else if('a'<=s[i]&&s[i]<='z')
       ans++;
       else if('A'<=s[i]&&s[i]<='Z')
       ans++;
       }
       return ans;
    }

};