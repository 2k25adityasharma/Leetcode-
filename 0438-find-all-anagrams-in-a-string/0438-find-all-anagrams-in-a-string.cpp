class Solution {
public:
    bool all_zero(unordered_map<char,int>mp){
        for(auto x:  mp){ 
            if(x.second!=0)
            return false;
        }
        return true;
    }
    vector<int> findAnagrams(string s, string p) {
        
        unordered_map<char,int>mp;
        for(auto x: p){
            mp[x]++;
        }

       
    vector<int>ans;
       int j =0;
    for(int i =0;i<s.size();i++){
       if(mp.find(s[i])!=mp.end()){
        mp[s[i]]--;
       }

       if(i-j+1==p.size()){
        if(all_zero(mp)){
            ans.push_back(j);
        }
       if(mp.find(s[j])!=mp.end()){
        mp[s[j]]++;
       } 
       j++;
       }
    }
    return ans;
    }
};