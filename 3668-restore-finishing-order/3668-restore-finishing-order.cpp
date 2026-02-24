class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        int n=order.size();
        unordered_set<int> frq(friends.begin(),friends.end());
        vector<int> ans;
        for(int z:order){
            if(frq.find(z)!=frq.end()){
                ans.push_back(z);
            }
        }
        return ans;
    }
};