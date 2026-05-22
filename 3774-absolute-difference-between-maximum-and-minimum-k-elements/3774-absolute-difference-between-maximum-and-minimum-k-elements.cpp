class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int maxsum=0;
        int minsum=0;
        int n=nums.size();
        for(int i=0;i<k;i++){
            minsum+=nums[i];
            maxsum+=nums[n-i-1];
        }
        return abs(maxsum-minsum);
    }
};