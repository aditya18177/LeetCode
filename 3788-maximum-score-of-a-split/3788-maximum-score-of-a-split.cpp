class Solution {
public:
    long long maximumScore(vector<int>& nums) {
        int n=nums.size();
        vector<long long> prefixsum(n,0);
        vector<int> suffixmin(n,0);
        long long sum=0;
        for(int i=0;i<n;i++){
            prefixsum[i]=sum+nums[i];
            sum=prefixsum[i];
        }
        suffixmin[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            suffixmin[i]=min(nums[i],suffixmin[i+1]);
        }
        long long ans=INT_MIN;
        for(int i=0;i<n-1;i++){
            long long score=prefixsum[i]-suffixmin[i+1];
            ans=max(ans,score);
        }
        return ans;
    }
};