class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int ans=INT_MAX;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[j]==nums[i]){
                    for(int k=j+1;k<n;k++){
                        if(nums[k]==nums[i]){
                            ans=min(ans,abs(i-j)+abs(j-k)+abs(i-k));
                        }
                    }
                }
            }
        }
        if(ans==INT_MAX) return -1;
        return ans;
    }
};