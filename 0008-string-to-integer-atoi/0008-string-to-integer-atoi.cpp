class Solution {
public:
    int helper(string s,int i,int sign,long ans){
        if(i>s.size() || !isdigit(s[i])){
            return sign*ans;
        }
        ans=ans*10+(s[i]-'0');
        if(sign*ans<=INT_MIN) return INT_MIN;
        if(sign*ans>=INT_MAX) return INT_MAX;
        return helper(s,i+1,sign,ans);
    }
    int myAtoi(string s) {
        int n=s.length()-1;
        int i=0;
        while(i<n && s[i]==' ')i++;
        int sign=1;
        if(i<n && (s[i]=='-' || s[i]=='+')){
            if(s[i]=='-') sign=-1;
            i++;
        }
        return helper(s,i,sign,0);
    }
};