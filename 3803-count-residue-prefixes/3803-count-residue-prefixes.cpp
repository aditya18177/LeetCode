class Solution {
public:
    int residuePrefixes(string s) {
        int ans=0;
        int n=s.length();
        string t="";
        unordered_set<char> frq;
        for(int i=0;i<n;i++){
            t+=s[i];
            frq.insert(s[i]);
            if(frq.size()==(t.length()%3)){
                ans++;
            }
        }
        return ans;
    }
};