class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        vector<int> frq(101,0);
        for(int i:nums){
            frq[i]++;
        }
        int ans=0;
        for(int i=1;i<=100;i++){
            if(frq[i]%k==0){
                ans+=i*frq[i];
            }
        }
        return ans;
    }
};