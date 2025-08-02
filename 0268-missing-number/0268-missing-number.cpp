class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_map<int,int> imap;
        for (int num:nums) {
            imap[num]++;
        }
        for(int i=0;i<nums.size();i++){
            if(imap.find(i)==imap.end()){
                return i;
            }
        }
        return nums.size();

    }
};