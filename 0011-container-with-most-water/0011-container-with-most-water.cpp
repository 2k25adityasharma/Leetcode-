class Solution {
public:
    int maxArea(vector<int>& height) {
    int i =0;
    int j = height.size()-1;
    int ans =0;
    while(i<j){
        int mul =1;
     if(height[i] <= height[j]){
      mul = (j-i) * height[i];
      ans =max(ans,mul);
      i++;
     }    
     else{
      mul = (j-i) * height[j];
        ans =max(ans,mul);
      j--;  
     }
  }
    return ans;
    }
};