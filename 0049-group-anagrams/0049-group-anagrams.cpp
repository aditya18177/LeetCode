class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string,vector<string>> ana;
        for(const auto& s:strs){
            string k=s;
            sort(k.begin(),k.end());
            ana[k].push_back(s);
        }
        vector<vector<string>> ans;
        for(auto& p:ana){
            ans.push_back(move(p.second));
        }
        return ans;
    }
};