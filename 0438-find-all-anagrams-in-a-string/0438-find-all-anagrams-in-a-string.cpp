class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char,int>sp;
        unordered_map<char,int>pp;
        for(int x:p){
            pp[x]++;
        }
  vector<int>ans;
        //jitni p ki lenth utni window 
        for(int i =0;i<p.size();i++){
      sp[s[i]]++;
     }
   //  ..case 1 ke liye checkking
     
     if(sp==pp){
        ans.push_back(0);
     }
    int j =0;
     // 1 badaya 1 gataya is condition statify then mp se vo wle element hata dunga 
     for( int i = p.size();i<s.size();i++){
          sp[s[i]]++;
          sp[s[j]]--;
          if(sp[s[j]]==0){
            sp.erase(s[j]);
          }
          j++;
          if(sp==pp){
            ans.push_back(j);
            }
     }
     return ans;
    }
};