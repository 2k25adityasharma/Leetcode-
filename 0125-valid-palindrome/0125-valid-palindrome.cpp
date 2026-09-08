class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        vector<char>ans;
        for(int i =0;i<n;i++){

            if(65<= s[i] && s[i]<=90){
                char c = s[i]+32;
                ans.push_back(c);
            }
            else if( 97<= s[i] && s[i]<=122){
                ans.push_back(s[i]);
            }
             else if('0'<=s[i]&&s[i]<='9')
             ans.push_back(s[i]);
        }
        int m = ans.size();
        int i =0;
        int j = m-1;
        while(j>i){
            if(ans[i]!=ans[j])
            return false;
            i++;
            j--;
        }
        return true;
    }
};