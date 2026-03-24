class Solution {
public:
    bool test(string s,string t){
        unordered_map<char,char> frq;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(frq.find(s[i])==frq.end()){
                frq[s[i]]=t[i];
                continue;
            }
            if(frq[s[i]]!=t[i]) return false;
        }
        return true;
    }
    bool isIsomorphic(string s, string t) {
        return test(s,t) && test(t,s);
    }
};