class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> frq;
        int sum=0;
        int ans=0;
        frq[0]=1;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(frq.find(sum-k)!=frq.end()){
                ans+=frq[sum-k];
            }
            frq[sum]++;
        }
        return ans;
    }
};