class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> frq;
        vector<int> ans;
        for(int x:nums2){
            frq.insert(x);
        }
        unordered_set<int> frq2;
        for(int x:nums1){
            if(frq.find(x)!=frq.end()){
                frq2.insert(x);
            }
        }
        for(auto x:frq2){
            ans.push_back(x);
        }
        return ans;
    }
};