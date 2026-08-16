class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int n = cost.size();
        if(n==1)
        return cost[n-1];
        if(n==2)
        return cost[n-2]+cost[n-1];
        
        sort(cost.begin(),cost.end());
        int c = n-3;
        int sum =0;
        for(int i =n-1;i>=0;i--){
            
             
        if(i==c) {

            c-=3;
        continue;
        }

            sum+=cost[i];

        
          }

return sum;
          }
};