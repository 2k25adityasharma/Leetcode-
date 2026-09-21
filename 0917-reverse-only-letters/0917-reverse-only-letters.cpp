class Solution {
public:
    bool isLetter(char c) {
        return (c >= 'a' && c <= 'z') ||
               (c >= 'A' && c <= 'Z');
    }

    string reverseOnlyLetters(string s) {
        int i = 0;
        int j = s.size() - 1;

        while (i < j) {

          
         while(i < j && !isLetter(s[i])) {
                i++;
            }

          
            while (i < j && !isLetter(s[j])) {
                j--;
            }

         
            if (i < j) {
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }

        return s;
    }
};