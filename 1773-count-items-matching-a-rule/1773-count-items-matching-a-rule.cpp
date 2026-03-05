class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int ans=0;
        int x=-1;
        if(ruleKey=="type"){
            x=0;
        }else if(ruleKey=="color"){
            x=1;
        }else{
            x=2;
        }
        for(auto y:items){
            if(y[x]==ruleValue){
                ans++;
            }
        }
        return ans;
    }
};