class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        int first=0;
        int second=0;
        int curr=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2!=0){
                if(curr==0){
                    curr=1;
                }else{
                    curr=0;
                }
            }
            if((i+1)%6==0){
                if(curr==0){
                    curr=1;
                }else{
                    curr=0;
                }
            }
            if(curr==0) first+=nums[i];
            if(curr==1) second+=nums[i];
        }
        return first-second;
    }
};