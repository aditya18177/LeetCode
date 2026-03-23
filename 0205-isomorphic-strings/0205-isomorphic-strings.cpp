class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> stot;
        unordered_map<char,char> ttos;
        int n=s.length();
        for(int i=0;i<n;i++){
            char a=s[i];
            char b=t[i];
            if(stot.find(a)==stot.end()){
                stot[a]=b;
            }else{
                if(stot[a]!=b) return false;
            }
            if(ttos.find(b)==ttos.end()){
                ttos[b]=a;
            }else{
                if(ttos[b]!=a) return false;
            }
        }
        return true;
    }
};