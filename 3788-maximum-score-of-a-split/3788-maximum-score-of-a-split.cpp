class Solution {
public:
    long long maximumScore(vector<int>& nums) {
        long long sum = 0;
        for(int x : nums){
            sum += x;
        }

        long long ans = LLONG_MIN;
        int n = nums.size();
        int mini = nums[n-1];

        for(int i = n-1; i > 0; i--){
            mini = min(mini, nums[i]);   
            sum -= nums[i];              

            long long score = sum - mini;  
            ans = max(ans, score);
        }

        return ans;
    }
};