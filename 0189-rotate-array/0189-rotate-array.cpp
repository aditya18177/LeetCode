class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        vector<int> temp(n,0);
        for(int i=0;i<k;i++){
            temp[i]=nums[n-k+i];
        }
        int j=0;
        for(int i=k;i<n;i++){
            temp[i]=nums[j];
            j++;
        }
        for(int i=0;i<n;i++){
            nums[i]=temp[i];
        }
    }
};