class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int ans=0;
        int sum=0;
        for(int x:nums){
            sum+=x;
        }
        ans=sum%k;
        return ans;
    }
};