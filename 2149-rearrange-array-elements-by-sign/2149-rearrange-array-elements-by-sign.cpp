class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n,0);
        int i=0;
        int j=0;
        int k=1;
        while(i<n && j<n){
            if(nums[i]>0){
                ans[j]=nums[i];
                j+=2;
            }
            i++;
        }
        i=0;
        while(i<n && k<n){
            if(nums[i]<0){
                ans[k]=nums[i];
                k+=2;
            }
            i++;
        }

        return ans;
    }
};