class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int n = patterns.size();
        int ans =0;
        for(int i =0;i<n;i++){
         string a = patterns[i];
         if(word.find(a)!=string::npos){
            ans++;
         }
       
        }
        return ans;
    }
};