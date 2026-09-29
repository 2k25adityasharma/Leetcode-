class Solution {
public:
    int findLucky(vector<int>& arr) {
    unordered_map<int,int>mp;
    for(auto x: arr)
    mp[x]++;
 int ans=-1;
 int maxi =INT_MIN;
    for(auto x:mp){
        if(x.first==x.second){
         ans = x.first;
         maxi = max(maxi,ans);
        }
    }
if(maxi == INT_MIN)
return -1;

  return maxi ;
    }
};