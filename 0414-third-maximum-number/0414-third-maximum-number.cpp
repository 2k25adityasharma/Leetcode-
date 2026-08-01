class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int i =0;i<nums.size();i++)
        mp[nums[i]]++;

        for(auto i:mp)
        ans.push_back(i.first);

        sort(ans.begin(),ans.end());
        n= ans.size();
        if(n<=2)
        return ans[n-1];

       return ans[n-3];
    }
};