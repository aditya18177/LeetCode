class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int x=-1;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                x=i;
                break;
            }
        }
        if(x==-1) return;
        for(int j=x+1;j<n;j++){
            if(nums[j]!=0){
                swap(nums[x],nums[j]);
                x++;
            }
        }
    }
};