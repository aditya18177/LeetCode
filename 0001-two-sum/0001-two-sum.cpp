class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int,int> frq;
        for(int i=0;i<nums.size();i++){
            int x=target-nums[i];
            if(frq.find(x)!=frq.end()){
                ans.push_back(i);
                ans.push_back(frq[x]);
                return ans;
            }
            frq[nums[i]]=i;
        }
        return ans; 
    }
};