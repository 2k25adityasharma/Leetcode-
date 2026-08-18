class Solution {
public:
    bool searchMatrix(vector<vector<int>>& a, int target) {
     int n = a.size();
        
    int m = a[0].size();
        int  l =0;
        int h = n*m -1;
        int mid =0;
        while(l<=h){
            mid=(l+h)/2;
            int i = mid/m;
            int j = mid-(i*m);
            if(a[i][j]==target)
            return true;
            else if(a[i][j]>target)
            h=mid-1;
            else
            l=mid+1;
        }
        return false;
    }
};