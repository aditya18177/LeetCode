class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> frq;
        for(int x:arr){
            frq[x]++;
        }
        unordered_set<int> occ;
        for(auto x:frq){
            if(occ.find(x.second)!=occ.end()){
                return false;
            }
            occ.insert(x.second);
        }
        return true;
    }
};