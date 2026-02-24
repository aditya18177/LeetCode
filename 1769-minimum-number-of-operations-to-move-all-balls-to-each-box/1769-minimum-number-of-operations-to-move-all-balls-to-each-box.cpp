class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n=boxes.size();
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(j==i) continue;
                ans[i]+=(abs(j-i))*(boxes[j]-'0');
            }
        }
        return ans;
    }
};