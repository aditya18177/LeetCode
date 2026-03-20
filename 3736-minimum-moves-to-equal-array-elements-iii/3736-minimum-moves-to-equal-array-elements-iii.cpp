class Solution {
public:
    int minMoves(vector<int>& nums) {
        int ans=0;
        int value=*max_element(nums.begin(),nums.end());
        for(int x:nums){
            ans+=value-x;
        }
        return ans;
    }
};