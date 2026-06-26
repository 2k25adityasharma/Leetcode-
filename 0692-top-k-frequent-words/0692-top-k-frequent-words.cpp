class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        vector<string>v;
        vector<string>ans;
    int n = words.size();
    unordered_map<string,int>mp;
        for(int i =0;i<n;i++){
      mp[words[i]]++;
    }
    for(auto i:mp)
        v.push_back(i.first);
   int c =0;
   while(c<k){
       int j=-1;
    int f=INT_MIN;

    for(int i =0;i<v.size();i++){
        if(f<mp[v[i]]){
       f= mp[v[i]];
       j=i;
        }
        else if(mp[v[i]] == f && v[i] < v[j])
        {
            j = i;
        }
    }
    ans.push_back(v[j]);
    v.erase(v.begin()+j);
  c++;
   }


 

   return ans;
    }
};