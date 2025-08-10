class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        string c = ""; 
        int minLength = strs[0].size();  
        for (int i = 1; i < strs.size(); i++) {
            minLength = min(minLength, (int)strs[i].size());
        }
        for (int i = 0; i < minLength; i++) {
            char a = strs[0][i]; 
            for (int j = 1; j < strs.size(); j++) {
                if (strs[j][i] != a) {
                    return c;
                }
            }
            c += a;
        }
        return c;
    }
};
