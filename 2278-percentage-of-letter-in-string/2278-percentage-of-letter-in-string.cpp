class Solution {
public:
    int percentageLetter(string s, char letter) {
        int n=s.length();
        vector<int> frq(26,0);
        for(char c:s){
            frq[c-'a']++;
        }
        return (frq[letter-'a']*100)/n;
    }
};