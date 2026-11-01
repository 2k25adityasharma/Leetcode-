class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {

        int n = nums.size();
        vector<int> ans(n, -1);

        if(2*k+1 > n) return ans;

        long long sum = 0;

        for(int i = 0; i < 2*k+1; i++){
            sum += nums[i];
        }

        int startpoint = 0;
        int endpoint = 2*k;

        for(int i = k; i < n-k; i++){

            ans[i] = sum / (2*k+1);

            sum -= nums[startpoint];
            startpoint++;

            endpoint++;
            if(endpoint < n)
                sum += nums[endpoint];
        }

        return ans;
    }
};