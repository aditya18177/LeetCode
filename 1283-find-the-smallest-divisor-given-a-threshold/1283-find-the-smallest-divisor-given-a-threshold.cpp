class Solution {
public:
    int sum_of_remainders(vector<int>& nums,int num){
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%num==0){
                sum+=nums[i]/num;
            }else{
                sum+=(nums[i]/num)+1;
            }
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        int low=1;
        int high=*max_element(nums.begin(),nums.end());
        while(low<=high){
            int mid=low+(high-low)/2;
            int sum=sum_of_remainders(nums,mid);
            if(sum<=threshold){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return low;
    }
};