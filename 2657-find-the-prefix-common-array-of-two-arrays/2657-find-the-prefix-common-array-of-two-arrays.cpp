class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n =A.size();
        vector<int>ans;
        unordered_map<int,int>mpa;
        unordered_map<int,int>mpb;

        for(int i =0;i<n;i++){
           mpa[A[i]]++;
           mpb[B[i]]++;

         int c =0;
          for(auto i :mpa){
            if(mpb.find(i.first)!=mpb.end())
             c++;
          }
          ans.push_back(c);
        }
        return ans;
    }
};