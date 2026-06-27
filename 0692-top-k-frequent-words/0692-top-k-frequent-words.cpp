class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        vector<string> v;
        vector<string> ans;
        int n = words.size();
        unordered_map<string, int> mp;
        
        for(int i = 0; i < n; i++){
            mp[words[i]]++;
        }
        
        for(auto i : mp)
            v.push_back(i.first);

        
        sort(v.begin(), v.end());

        int c = 0;
        while(c < k){
            int j = 0; 
            int f = mp[v[0]];

          
            for(int i = 1; i < v.size(); i++){
                if(mp[v[i]] > f){ 
                    f = mp[v[i]];
                    j = i;
                }
            }
            
            ans.push_back(v[j]);
          mp[v[j]]=0; 
            c++;
        }

        return ans;
    }
};