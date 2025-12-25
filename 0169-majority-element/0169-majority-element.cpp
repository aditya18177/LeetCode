class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        int max_element=nums[0];
        for(int i=0;i<n;i++){
            if(count==0){
                max_element=nums[i];
            }
            if(nums[i]==max_element){
                count++;
            }else{
                count--;
            }
        }
        return max_element;
    }
};