class Solution {
public:
    int maxProduct(int n) {
   vector<int>ans;
   while(n>0){
    int a = n%10;
    ans.push_back(a);
    n=n/10;
   }
int size = ans.size();
sort(ans.begin(),ans.end());
if(size>=2){
    return ans[size-2]*ans[size-1];
}
return 0;

    }
};