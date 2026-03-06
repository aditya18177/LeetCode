class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int max_sum=0;
        int sum=0;
        for(int i=0;i<n/2;i++){
            sum=nums[i]+nums[n-i-1];
            max_sum=max(sum,max_sum);
        }
        return max_sum;
    }
};