class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> jewel;
        int ans=0;
        for(char c:jewels){
            jewel.insert(c);
        }
        for(char c:stones){
            if(jewel.find(c)!=jewel.end()){
                ans++;
            }
        }
        return ans;
    }
};