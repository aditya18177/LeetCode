class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        unordered_map<int,string> frq;
        int n=names.size();
        for(int i=0;i<n;i++){
            frq[heights[i]]=names[i];
        }
        sort(heights.begin(),heights.end(),greater<int>());
        for(int i=0;i<n;i++){
            names[i]=frq[heights[i]];
        }
        return names;
    }
};