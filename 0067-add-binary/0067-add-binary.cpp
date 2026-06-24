class Solution {
public:
    string addBinary(string a, string b) {
        int n = a.size();
        int m = b.size();
        int i = n - 1;
        int j = m - 1;
        
        string c;
        if (m > n)
            c = string(m + 1, '0');
        else
            c = string(n + 1, '0');
            
        int k = c.size() - 1;
        string ans;
        
   
        while (i >= 0 && j >= 0 && k >= 0) {
            int l = a[i] - '0';
            int valB = b[j] - '0';  
            int valC = c[k] - '0'; 
            int sum = l + valB + valC;
            
            if (sum == 0) {
                ans.push_back('0');
                i--; j--; k--;
            }
            else if (sum == 1) {
                ans.push_back('1'); 
                i--; j--; k--;
            }
            else if (sum == 2) {
                ans.push_back('0');
                c[k - 1] = '1';     
                i--; j--; k--;
            }
            else if (sum == 3) {
                ans.push_back('1');
                c[k - 1] = '1';   
                i--; j--; k--;
            }
        }
        
        
        while (i >= 0 && k >= 0) {
            int l = a[i] - '0';
            int valC = c[k] - '0';
            int sum = l + valC;
            
            if (sum == 0) {
                ans.push_back('0');
                i--; k--;
            }
            else if (sum == 1) {
                ans.push_back('1');
                i--; k--;
            }
            else if (sum == 2) {
                ans.push_back('0');
                c[k - 1] = '1';
                i--; k--;
            }
        } 
   
        while (j >= 0 && k >= 0) {
            int valB = b[j] - '0';
            int valC = c[k] - '0';
            int sum = valB + valC;
            
            if (sum == 0) {
                ans.push_back('0');
                j--; k--;
            }
            else if (sum == 1) {
                ans.push_back('1');
                j--; k--;
            }
            else if (sum == 2) {
                ans.push_back('0');
                c[k - 1] = '1';
                j--; k--;
            }
        }
        
      
        if (k == 0 && c[k] == '1') {
            ans.push_back('1');
        }
        
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};