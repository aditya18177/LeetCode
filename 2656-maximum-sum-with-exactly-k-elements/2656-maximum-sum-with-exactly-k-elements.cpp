class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int element=*max_element(nums.begin(),nums.end());
        int ans=0;
        while(k>0){
            ans+=element;
            element++;
            k--;
        }
        return ans;
    }
};