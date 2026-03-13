class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans="";
        int level=0;
        for(char c:s){
            if(c=='('){
                level++;
                if(level>1) ans+=c;
            }
            else if(c==')'){
                level--;
                if(level>0) ans+=c;
            }
        }
        return ans;
    }
};