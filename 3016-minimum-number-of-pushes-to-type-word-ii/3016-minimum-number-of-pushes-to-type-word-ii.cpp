class Solution {
public:
    int minimumPushes(string word) {

        int ans =0;
       unordered_map<char,int>mp;
       int n = word.size();
       for(int i =0;i<n;i++)
       mp[word[i]]++;

        int c=0;
        int i =1;
        char a ='0';
       while(!mp.empty()){
        int maxi =0;
        for(auto x:mp){
            if(maxi <x.second){
                maxi = x.second;
                a=x.first;
             }
          
        }
        c++;
        ans += i * maxi;
       
       
  if(c%8==0)
        i++;
       
    mp.erase(a);
       }
       return ans;
    }
};