class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int ans=INT_MAX;
        for(auto x:tasks){
            int time=x[0]+x[1];
            ans=min(ans,time);
        }
        return ans;
    }
};