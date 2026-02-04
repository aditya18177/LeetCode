class Solution {
public:
    long long total_hrs(vector<int> piles,long long c){
        long long ans=0;
        for(long long i:piles){
            ans+=(i+c-1)/c;
        }
        return ans;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        long long max_ele=*max_element(piles.begin(),piles.end());
        long long low=1;
        long long high=max_ele;
        while(low<=high){
            long long mid=low+(high-low)/2;
            long long tth=total_hrs(piles,mid);
            if(tth>h){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return low;
    }
};