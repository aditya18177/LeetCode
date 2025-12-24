class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int index=-1;
        for(int i=1;i<n;i++){
            if(nums[i]<nums[i-1]){
                index=i;
                break;
            }
        }
        if(index==-1){
            return true;
        }
        bool ans=true;
        for(int i=index;i<n-1;i++){
            if(nums[i]<=nums[i+1]){
                continue;
            }else{
                ans=false;
                return ans;
            }
        }
        if(nums[n-1]>nums[0]){
            return false;
        }
        for(int i=0;i<index-1;i++){
            if(nums[i]>nums[i+1]){
                return false;
            }
        }
        return true;
    }
};