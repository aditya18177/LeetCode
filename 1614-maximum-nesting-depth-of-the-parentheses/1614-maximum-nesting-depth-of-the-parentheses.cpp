class Solution {
public:
    int maxDepth(string s) {
        int ans=0;
        int nest=0;
        for(char c:s){
            if(c=='(') nest++;
            if(c==')') nest--;
            ans=max(ans,nest);
        }
        return ans;
    }
};