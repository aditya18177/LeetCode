class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        int ans1=0;
        int ans2=0;
        unordered_set<int> frq1(nums1.begin(),nums1.end());
        unordered_set<int> frq2(nums2.begin(),nums2.end());
        for(int x:nums1){
            if(frq2.find(x)!=frq2.end()){
                ans1++;
            }
        }
        for(int x:nums2){
            if(frq1.find(x)!=frq1.end()){
                ans2++;
            }
        }
        return {ans1,ans2};
    }
};