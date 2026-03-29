class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length()) return false;
        s+=s;
        int n=goal.length();
        for(int i=0;i<=n;i++){
            if(goal==s.substr(i,n)) return true;
        }
        return false;
    }
};