class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        unordered_set<int> frq1;
        unordered_set<int> frq2;
        unordered_set<int> frq3;
        for(int x:nums1){
            frq1.insert(x);
        }
        for(int x:nums2){
            frq2.insert(x);
        }
        for(int x:nums3){
            frq3.insert(x);
        }
        vector<int> ans;
        for(int i=1;i<=100;i++){
            int count=0;
            if(frq1.find(i)!=frq1.end()) count++;
            if(frq2.find(i)!=frq2.end()) count++;
            if(frq3.find(i)!=frq3.end()) count++;
            if(count>=2){
                ans.push_back(i);
            }
        }
        return ans;
    }
};