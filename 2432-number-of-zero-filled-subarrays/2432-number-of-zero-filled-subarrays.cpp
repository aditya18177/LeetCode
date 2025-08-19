class Solution {
public:
    long long some(int n){
        long long ans=0;
        if(n%2==0){
            ans+=n/2;
            ans*=n+1;
        }else{
            ans+=(n+1)/2;
            ans*=n;
        }
        return ans;
    }
    long long zeroFilledSubarray(vector<int>& nums) {
        vector<int> zeros;
        int len=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                len++;
            }
            if(nums[i]!=0 && len!=0){
                zeros.push_back(len);
                len=0;
            }
        }
        if(len!=0) zeros.push_back(len);
        long long ans=0;
        for(int x:zeros){
            ans+=some(x);
        }
        return ans;
    }
};