class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long xorr=0;
        for(int x:nums) xorr^=x;
        int b1=0;
        int b2=0;
        int rightmost=xorr & (-xorr);
        for(int i=0;i<nums.size();i++){
            if(nums[i] & rightmost){
                b1=b1^nums[i];
            }else{
                b2=b2^nums[i];
            }
        }
        return {b1,b2};
    }
};