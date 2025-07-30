class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cmax=nums[0];
        int smax=nums[0];
        for(int i=1;i<nums.size();i++){
            cmax=max(nums[i],cmax+nums[i]);
            smax=max(cmax,smax);
        }
        return smax;
    }
};