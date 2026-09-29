class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {

        vector<int> ans;

        for(int x : asteroids) {

            while(!ans.empty() && ans.back() > 0 && x < 0) {

                if(ans.back() < abs(x)) {
                    ans.pop_back();
                }
                else if(ans.back() == abs(x)) {
                    ans.pop_back();
                    x = 0;
                    break;
                }
                else {
                    x = 0;
                    break;
                }
            }

            if(x != 0) {
                ans.push_back(x);
            }
        }

        return ans;
    }
};