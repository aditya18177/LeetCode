class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int min_ele=INT_MAX;
        int max_ele=INT_MIN;
        int n=nums.size();
        unordered_set<int> frq;
        for(int x:nums){
            min_ele=min(min_ele,x);
            max_ele=max(max_ele,x);
            frq.insert(x);
        }
        vector<int> ans;
        for(int i=min_ele;i<=max_ele;i++){
            if(frq.find(i)==frq.end()){
                ans.push_back(i);
            }
        }
        return ans;
    }
};