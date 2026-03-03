class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<int> frq(201,0);
        for(int x:nums){
            frq[x]++;
        }
        vector<vector<int>> ans;
        while(true){
            vector<int> part;
            for(int i=1;i<201;i++){
                if(frq[i]==0){
                    continue;
                }else{
                    part.push_back(i);
                    frq[i]--;
                }
            }
            if(part.empty()) break;
            ans.push_back(part);
        }
        return ans;
    }
};