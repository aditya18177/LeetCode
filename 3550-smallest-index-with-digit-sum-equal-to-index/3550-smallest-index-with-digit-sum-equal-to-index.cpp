class Solution {
public:
    int digitsum(int x){
        int ans=0;
        while(x>0){
            ans+=x%10;
            x=x/10;
        }
        return ans;
    }
    int smallestIndex(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(digitsum(nums[i])==i){
                return i;
            }
        }
        return -1;
    }
};