class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int min_diff=INT_MAX;
        int n=arr.size();
        vector<vector<int>> ans;
        for(int i=1;i<n;i++){
            int curr_diff=arr[i]-arr[i-1];
            min_diff=min(min_diff,curr_diff);
        }
        for(int i=1;i<n;i++){
            if(arr[i]-arr[i-1]==min_diff){
                ans.push_back({arr[i-1],arr[i]});
            }
        }
        return ans;
    }
};