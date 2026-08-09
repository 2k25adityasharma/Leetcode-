class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<int>v(score.begin(),score.end());
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        int m = v.size();
        vector<string>ans(n,"\0");
     for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
        if(v[i] == score[j]) {
            ans[j] = to_string(i + 1);
        }
    }
}
    for(int i =0;i<n;i++){
        if(ans[i]=="1")
        ans[i]= "Gold Medal";
        else if(ans[i]=="2")
        ans[i]="Silver Medal";
        else if(ans[i]=="3")
        ans[i]="Bronze Medal" ;
    }
    return ans;
    }
};