class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {

        int c = 0;

        sort(people.begin(), people.end());

        int n = people.size();
        int i = 0;
        int j = n - 1;

        while (i <= j) {

            int sum = people[i] + people[j];

            if (sum <= limit) {
                c++;
                i++;
                j--;
            }
            else {
                c++;
                j--;
            }
        }

        return c;
    }
};