class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        int n=order.size();
        unordered_set<int> frq;
        vector<int> ans;
        for(int x:friends){
            frq.insert(x);
        }
        for(int z:order){
            if(frq.find(z)!=frq.end()){
                ans.push_back(z);
            }
        }
        return ans;
    }
};