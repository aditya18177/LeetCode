class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int curr_len=0;
        int max_len=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                curr_len++;
                max_len=max(max_len,curr_len);
            }else{
                curr_len=0;
            }
        }
        return max_len;
    }
};