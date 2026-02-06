class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> combined;
        int i=0;
        int j=0;
        int m=nums1.size();
        int n=nums2.size();
        while(i<m && j<n){
            if(nums1[i]>nums2[j]){
                combined.push_back(nums2[j++]);
            }else{
                combined.push_back(nums1[i++]);
            }
        }
        while(i<m) combined.push_back(nums1[i++]);
        while(j<n) combined.push_back(nums2[j++]);
        int x=n+m;
        if(x%2!=0){
            return combined[(n+m)/2.0];
        }
        return (combined[(n+m)/2]+combined[((n+m)/2)-1])/2.0;
        
    }
};