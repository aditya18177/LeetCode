class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int max_gain=INT_MIN;
        int gai=0;
        for(int i:gain){
            gai+=i;
            max_gain=max(gai,max_gain);
        }
        return max(max_gain,0);
    }
};