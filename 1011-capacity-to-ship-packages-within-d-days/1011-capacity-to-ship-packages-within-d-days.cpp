class Solution {
public:
    bool possible(vector<int>& weights,int w,int days){
        int curr_w=0;
        int curr_d=1;
        for(int i=0;i<weights.size();i++){
            if(curr_w<w && weights[i]+curr_w<=w){
                curr_w+=weights[i];
            }else{
                curr_d++;
                curr_w=0;
                if(weights[i]<=w){
                    curr_w+=weights[i];
                }else{
                    return false;
                }
            }
        }
        if(curr_d<=days) return true;
        return false;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int low=*max_element(weights.begin(),weights.end());
        int sum=0;
        for(int i:weights){
            sum+=i;
        }
        int high=sum;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(possible(weights,mid,days)){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return low;
    }
};