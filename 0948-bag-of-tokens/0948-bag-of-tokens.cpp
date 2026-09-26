class Solution {
public:
    int bagOfTokensScore(vector<int>& token, int power) {
        int n= token.size();
        int i =0;
        int j = n-1;
        sort(token.begin(),token.end());
        int ans =0;
        while(i<j){
            if(power>=token[i]){
                power-=token[i];
                ans++;
                i++;
            }
           
            else {
                    if(ans == 0)
        break;

                ans--;
                power+=token[j];
                j--;
                
            }

        }
        if(i==j && power>=token[i]){
            ans++;
         }
         
        return ans;
    }
};