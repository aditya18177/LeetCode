class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        if(nums.size()<=2){
            return -1;
        }
        int minn=*min_element(nums.begin(),nums.end());
        int maxx=*max_element(nums.begin(),nums.end());
        for(int x:nums){
            if(x!=minn && x!=maxx){
                return x;
            }
        }
        return -1;
    }
};