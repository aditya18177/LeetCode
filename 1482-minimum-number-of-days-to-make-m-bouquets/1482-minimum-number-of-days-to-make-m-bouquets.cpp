class Solution {
public:
    bool possible(vector<int>& arr,int d,int m,int k){
        int ans=0;
        int cnt=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<=d){
                cnt++;
            }else{
                ans+=cnt/k;
                cnt=0;
            }
        }
        ans+=cnt/k;
        if(ans>=m) return true;
        return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        long long flowers=1L*m*k;
        if(flowers>n) return -1;
        int low=*min_element(bloomDay.begin(),bloomDay.end());
        int high=*max_element(bloomDay.begin(),bloomDay.end());
        while(low<=high){
            int mid=low+(high-low)/2;
            if(possible(bloomDay,mid,m,k)){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return low;
    }
};