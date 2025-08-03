class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        while(i+1<n && nums[i]<nums[i+1]){
            i++;
        }
        if(i==0 || i==n-1) return false;
        int j=i;
        while(j+1<n && nums[j]>nums[j+1]){
            j++;
        }
        if(j==i || j==n-1) return false;
        int k=j;
        while(k+1<n && nums[k]<nums[k+1]){
            k++;
        }
        if(k==j) return false;
        return k==n-1;
    }
};