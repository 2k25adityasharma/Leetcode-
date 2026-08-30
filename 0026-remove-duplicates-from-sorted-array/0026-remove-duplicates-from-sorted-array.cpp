class Solution {
public:
    int removeDuplicates(vector<int>& a) {
    int n = a.size();
    int j=0;
    for(int i =0;i<n;i++){
      if(a[i]!=a[j]){
        j++;
        a[j]=a[i];
      }
    }
    return j+1;
    }
};