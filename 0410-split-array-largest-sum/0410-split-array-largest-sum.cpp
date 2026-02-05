class Solution {
public:
    bool possible(vector<int>& nums,int sum,int k){
        int subarray=1;
        int curr_sum=nums[0];
        for(int i=1;i<nums.size();i++){
            if(curr_sum+nums[i]<=sum){
                curr_sum+=nums[i];
            }else{
                subarray++;
                curr_sum=nums[i];
            }
        }
        if(subarray>k) return false;
        return true;
    }
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        int ans=-1;
        int low=*max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(),nums.end(),0);
        while(low<=high){
            int mid=low+(high-low)/2;
            if(possible(nums,mid,k)){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
};