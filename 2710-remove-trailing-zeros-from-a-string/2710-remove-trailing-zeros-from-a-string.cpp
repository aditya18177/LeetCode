class Solution {
public:
    string removeTrailingZeros(string num) {
        int n=num.length()-1;
        while(num[n]=='0'){
            n--;
        }
        return num.substr(0,n+1);
    }
};