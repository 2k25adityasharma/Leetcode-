class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        vector<int>ans;
        vector<int>v;
        int n = nums.size();
        for(int i =0;i<n;i++){
           mp[nums[i]]++;
        }
        for(auto i :mp)
            v.push_back(i.first);
       
       int c =0;
  while(c<k){

int maxi=0;
       int f= 0; 
        for(int i =0;i<v.size();i++){
        if(f<mp[v[i]]){
         maxi =v[i];
         f=mp[v[i]];
       
        }
        }
        ans.push_back(maxi);
        mp[maxi] = 0; 
        c++;
  }
       
       
        
  return ans;
    }
};