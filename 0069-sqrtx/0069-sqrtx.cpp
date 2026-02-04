class Solution {
public:
    int mySqrt(int x) {
        if(x==1) return 1;
        int low=1;
        int high=x/2;
        while(low<=high){
            long long mid=low+(high-low)/2;
            long long square=mid*mid;
            if(square==x){
                return mid;
            }else if(square>x){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return low-1;
    }
};