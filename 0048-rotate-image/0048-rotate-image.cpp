class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        
        // 1. Sahi Transpose: j = i se shuru kiya taaki double swap na ho
        for(int i = 0; i < n; i++) {
            for(int j = i; j < n; j++) { 
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        
        // 2. Sahi Row Reverse: Har row ke andar left aur right ko swap karo
        for(int i = 0; i < n; i++) {
            int left = 0;
            int right = n - 1;
            while(left < right) {
                swap(matrix[i][left], matrix[i][right]);
                left++;
                right--;
            }
        }
    }
};