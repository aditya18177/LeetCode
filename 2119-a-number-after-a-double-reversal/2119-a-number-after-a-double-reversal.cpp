class Solution {
public:
    bool isSameAfterReversals(int num) {
        if (num==0) return true;
        string s=to_string(num);
        int n=s.length();
        if(s[n-1]=='0') return false;
        return true;
        
    }
};