class Solution {
public:
    char findTheDifference(string s, string t) {
        int tsum=0;
        int ssum=0;
        for(char c:s){
            ssum+=c;
        }
        for(char c:t){
            tsum+=c;
        }
        return (char)(tsum-ssum);
    }
};