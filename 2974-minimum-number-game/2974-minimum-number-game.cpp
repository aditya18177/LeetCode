class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        int n=nums.size();
        int i=1;
        int j=0;
        while(i<n && j<n){
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
            i+=2;
            j+=2;
        }
        return ans;
    }
};