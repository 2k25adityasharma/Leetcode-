class Solution {
public:
    int maxVowels(string s, int k) {
        int j =0;
        int vowel=0;
        int ans=0;
        for(int i =0;i<s.size();i++){
          if(s[i]=='a' || s[i]=='e'||s[i]=='i' ||s[i]=='o' ||s[i]=='u'){
            vowel++;
          }
          if(i-j+1==k){
            ans=max(ans,vowel);

           if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u')
            vowel--;

            j++;
          }

        }
        return ans;
    }
};