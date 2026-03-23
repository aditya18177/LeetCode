class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string str1=strs[0];
        string str2=strs[strs.size()-1];
        int i=0;
        while(i<str1.length() && i<str2.length() && str1[i]==str2[i]) i++;
        return str1.substr(0,i);
    }
};