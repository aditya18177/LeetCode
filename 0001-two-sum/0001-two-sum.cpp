class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> frq;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            frq[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++){
            frq[nums[i]]--;
            int x=target-nums[i];
            if(frq.find(x)!=frq.end() && frq[x]!=0){
                ans.push_back(i);
                for(int j=i+1;j<nums.size();j++){
                    if(nums[j]==x){
                        ans.push_back(j);
                        break;
                    }
                }
                break;
            }
        }
        return ans;
    }
};