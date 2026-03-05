class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int ele_sum=0;
        int dig_sum=0;
        for(int x:nums){
            ele_sum+=x;
            while(x>0){
                dig_sum+=x%10;
                x=x/10;
            }
        }
        return abs(dig_sum-ele_sum);
    }
};