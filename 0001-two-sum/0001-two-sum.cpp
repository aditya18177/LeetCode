class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> frq;
        for(int i=0;i<nums.size();i++){
            int x=target-nums[i];
            if(frq.find(x)!=frq.end()){
                return {frq[x],i};
            }
            frq[nums[i]]=i;
        }
        return {-1,-1};
    }
};