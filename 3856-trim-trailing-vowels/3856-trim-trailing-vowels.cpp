class Solution {
public:
    string trimTrailingVowels(string s) {
        int n=s.length()-1;
        while(n>=0){
            if(s[n]=='a' || s[n]=='e' || s[n]=='i' || s[n]=='o' || s[n]=='u'){
                n--;
            }else{
                break;
            }
        }
        return s.substr(0,n+1);
    }    
};