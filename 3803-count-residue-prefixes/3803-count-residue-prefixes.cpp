class Solution {
public:
    int residuePrefixes(string s) {
        int ans=0;
        int n=s.length();
        unordered_set<char> frq;
        for(int i=0;i<n;i++){
            frq.insert(s[i]);
            if(frq.size()==((i+1)%3)){
                ans++;
            }
        }
        return ans;
    }
};