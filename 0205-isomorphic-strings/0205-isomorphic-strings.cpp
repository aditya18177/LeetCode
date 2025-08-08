class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length()) return false;
        map<char,int> st,ts;
        for(int i=0;i<s.length();i++){
            char sc=s[i],tc=t[i];
            if(st.count(sc) && st[sc]!=tc) return false;
            if(ts.count(tc) && ts[tc]!=sc) return false;
            st[sc] = tc;
            ts[tc] = sc;
        }
        return true;
    }
};