class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> frq;
        for(char c:s) frq[c]++;
        vector<pair<int,char>> frqarr;
        for(auto it:frq){
            frqarr.push_back({it.second,it.first});
        }
        sort(frqarr.rbegin(),frqarr.rend());
        string ans="";
        for(auto p:frqarr){
            ans+=string(p.first,p.second);
        }
        return ans;
    }
};