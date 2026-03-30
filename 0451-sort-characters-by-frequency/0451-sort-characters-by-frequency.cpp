class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> frq;
        for(char c:s) frq[c]++;
        vector<vector<char>> frqarr(s.length()+1);
        for(auto p:frq){
            frqarr[p.second].push_back(p.first);
        }
        string ans="";
        for(int i=s.length();i>=1;i--){
            for(char c:frqarr[i]) ans+=string(i,c);
        }
        return ans;
    }
};