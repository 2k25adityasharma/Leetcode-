class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        if(arr[0]!=1){
      arr[0]=1;  
        }
       
        for(int i =1;i<n;i++){
            int a = abs(arr[i] - arr[i - 1]);
         if(a<=1){
           continue;
         }
          
         else{
            arr[i]=arr[i-1]+1;
           
         }

        }
        int maxi = 0;
        for(int i  =0;i<n;i++){
  maxi = max(maxi,arr[i]);
        }
        return maxi;
    }
};