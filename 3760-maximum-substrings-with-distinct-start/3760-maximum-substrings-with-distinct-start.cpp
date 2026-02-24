class Solution {
public:
    int maxDistinct(string s) {
        unordered_set<char> frq;
        for(char c:s){
            frq.insert(c);
        }
        return frq.size();
    }
};