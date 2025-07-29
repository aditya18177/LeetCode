class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int n=intervals.size();
        vector<vector<int>> ans;
        vector<int> mark(n,1);
        for(int i=0;i<intervals.size()-1;i++){
            vector<int> temp;
            if(intervals[i][1]>=intervals[i+1][0]){
                temp.push_back(intervals[i][0]);
                if(intervals[i+1][1]>=intervals[i][1]){
                    temp.push_back(intervals[i+1][1]);
                }else{
                    temp.push_back(intervals[i][1]); 
                }
                intervals[i+1][0]=temp[0];
                intervals[i+1][1]=temp[1];
                mark[i]=-1;
            }else{
                continue;
            }
        }
        for(int i=0;i<n;i++){
            if(mark[i]==-1){
                continue;
            }else{
                ans.push_back(intervals[i]);
            }
        }
        return ans;
    }
};