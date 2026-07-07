class Solution {
public:
    long long sumAndMultiply(int n) {
        string s=to_string(n);
        string t="";
        long long sum=0;
        for(char c:s){
            if(c!='0'){
                t+=c;
                sum+=c-'0';
            }
        }
        if(t.empty()) return 0;
        long long x=stoi(t);
        return 1LL*x*sum;
    }
};