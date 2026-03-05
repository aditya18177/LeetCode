class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
         int n = garbage.size();
        
        int lastM = 0, lastP = 0, lastG = 0;
        int total = 0;

        for(int i = 0; i < n; i++){
            for(char c : garbage[i]){
                total++;
                if(c == 'M') lastM = i;
                if(c == 'P') lastP = i;
                if(c == 'G') lastG = i;
            }
        }

        vector<int> prefix(n,0);
        for(int i = 1; i < n; i++){
            prefix[i] = prefix[i-1] + travel[i-1];
        }

        total += prefix[lastM] + prefix[lastP] + prefix[lastG];

        return total;
    }
};