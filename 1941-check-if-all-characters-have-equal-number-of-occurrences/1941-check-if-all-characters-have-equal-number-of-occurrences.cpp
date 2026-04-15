class Solution {
public:
    bool areOccurrencesEqual(string s) {
        vector<int> frq(26,0);
        for(char c:s){
            frq[c-'a']++;
        }
        int count;
        for(int i=0;i<26;i++){
            if(frq[i]!=0) count=frq[i];
        }
        for(int i=0;i<26;i++){
            if(frq[i]==0) continue;
            if(frq[i]!=0 && frq[i]!=count) return false;
        }
        return true;
    }
};