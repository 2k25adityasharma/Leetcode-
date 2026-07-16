class Solution {
public:
    long long gcdSum(vector<int>& nums) {
     int n = nums.size();
     vector<int>ans;
     int maxi = 0;
     for(int i =0;i<n;i++){
        if(maxi<nums[i]){
            maxi = nums[i];
            }
        int b = gcd(nums[i],maxi);
        ans.push_back(b);
     }   
     sort(ans.begin(),ans.end());
    int l = 0;
    int h = n-1;
    long long sum =0;
    while(l<h){
    int b = gcd(ans[l],ans[h]);
    sum+=b;
    l++;
    h--;


    }
    return sum;
    }
};