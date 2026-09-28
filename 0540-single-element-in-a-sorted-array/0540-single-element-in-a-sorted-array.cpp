class Solution {
public:
    int singleNonDuplicate(vector<int>& a) {
        int l = 0;
        int h = a.size() - 1;

        while (l < h) {
            int mid = l + (h - l) / 2;

           
            if (mid % 2 == 1) {
                mid--;
            }

           
            if (a[mid] == a[mid + 1]) {
                l = mid + 2;
            } else {
              
                h = mid;
            }
        }
        
    
        return a[l];
    }
};