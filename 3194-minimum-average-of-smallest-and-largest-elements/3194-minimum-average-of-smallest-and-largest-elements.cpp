class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        double min_avg=INT_MAX;
        int i=0;
        int j=nums.size()-1;
        while(i<j){
            double avg=(nums[i]+nums[j])/2.0;
            min_avg=min(min_avg,avg);
            i++;
            j--;
        }
        return min_avg;
    }
};