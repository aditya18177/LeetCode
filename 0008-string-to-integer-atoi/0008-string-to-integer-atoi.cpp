class Solution {
public:
    int helper(string s,int i,long long num,int sign,int n){
        if(i>=n || !isdigit(s[i])){
            return num*sign;
        }
        num=num*10+(s[i]-'0');
        if(sign*num<=INT_MIN) return INT_MIN;
        if(sign*num>=INT_MAX) return INT_MAX;
        return helper(s,i+1,num,sign,n);
    }
    int myAtoi(string s) {
        int i=0;
        int n=s.length();
        while(i<n && s[i]==' ') i++;
        int sign=1;
        if(i<n && (s[i]=='+' || s[i]=='-')){
            if(s[i]=='-') sign=-1;
            i++;
        } 
        
        return helper(s,i,0,sign,n);

    }
};