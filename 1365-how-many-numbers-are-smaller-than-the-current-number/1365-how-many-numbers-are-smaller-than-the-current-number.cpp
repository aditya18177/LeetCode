class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> frq(101,0);
        for(int x:nums){
            frq[x]++;
        }
        for(int i=1;i<101;i++){
            frq[i]+=frq[i-1];
        }
        int n=nums.size();
        vector<int> ans(n,0);
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                ans[i]=0;
                continue;
            } 
            ans[i]=frq[nums[i]-1];
        }
        return ans;
    }
};