class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int,int> frq;
        for(int x:nums){
            frq[x]++;
        }
        int n=nums.size();
        vector<vector<int>> indexes(101);
        for(int i=0;i<n;i++){
            if(frq[nums[i]]>=3){
                indexes[nums[i]].push_back(i);
            }
        }
        int ans=INT_MAX;
        for(auto x:indexes){
            if(x.size()<3) continue;
            for(int j=0;j<=x.size()-3;j++){
                ans=min(ans,2 * (x[j+2] - x[j]));
            }
        }
        if(ans==INT_MAX) return -1;
        return ans;
    }
};