class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int singlesum=0;
        int doublesum=0;
        for(int i:nums){
            if(i<10){
                singlesum+=i;
            }else{
                doublesum+=i;
            }
        }
        if(singlesum==doublesum) return false;
        return true;
    }
};