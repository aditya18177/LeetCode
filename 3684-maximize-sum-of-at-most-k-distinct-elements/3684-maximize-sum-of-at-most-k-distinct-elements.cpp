class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        unordered_set<int> frq(nums.begin(),nums.end());
        vector<int> temp;
        for(auto it:frq){
            temp.push_back(it);
        }
        sort(temp.rbegin(),temp.rend());
        int sum=0;
        if(k>temp.size()) return temp;
        return vector<int>(temp.begin(),temp.begin()+k);
    }
};