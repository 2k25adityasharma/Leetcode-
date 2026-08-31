class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        int n = emails.size();

        for (int i = 0; i < n; i++) {

            for (int j = 0; j < emails[i].size(); j++) {

                if (emails[i][j] == '@')
                    break;

                if (emails[i][j] == '.') {
                    emails[i].erase(emails[i].begin() + j);
                    j--;
                }

                if (emails[i][j] == '+') {
                    int at = emails[i].find('@');
                    emails[i].erase(emails[i].begin() + j,
                                    emails[i].begin() + at);
                    break;
                }
            }
        }

        set<string> s(emails.begin(), emails.end());

        return s.size();
    }
};