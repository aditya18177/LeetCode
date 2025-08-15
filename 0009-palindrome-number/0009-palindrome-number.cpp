class Solution {
public:
    bool isPalindrome(int x) {
        string a=to_string(x);
        int n=a.length();
        for(int i=0;i<n/2;i++){
            if(a[i]!=a[n-i-1]){
                return false;
            }
        }
        return true;
        
    }
};