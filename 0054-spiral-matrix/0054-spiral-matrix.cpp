class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<int> ans;
        // first row, first column, last row, last column
        int fr=0, fc=0, lr=m-1, lc=n-1;
        while(fr<=lr && fc<=lc){
            for(int j=fc;j<=lc;j++){
                ans.push_back(matrix[fr][j]);
            }
            fr++;
            for(int i=fr;i<=lr;i++){
                ans.push_back(matrix[i][lc]);
            }
            lc--;
            if(fr<=lr){
                for(int j=lc;j>=fc;j--){
                    ans.push_back(matrix[lr][j]);
                }
                lr--;
            }
            if(fc<=lc){
                for(int i=lr;i>=fr;i--){
                    ans.push_back(matrix[i][fc]);
                }
                fc++;
            }
            
        }
        return ans;
    }
};