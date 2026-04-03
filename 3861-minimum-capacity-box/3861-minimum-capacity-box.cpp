class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        int ans=INT_MAX;
        int index=-1;
        for(int i=0;i<capacity.size();i++){
            if(capacity[i]>=itemSize){
                ans=min(ans,capacity[i]);
            }
        }
        if(ans==INT_MAX) return -1;
        for(int i=0;i<capacity.size();i++){
            if(capacity[i]==ans){
                index=i;
                break;
            }
        }
        return index;
    }
};