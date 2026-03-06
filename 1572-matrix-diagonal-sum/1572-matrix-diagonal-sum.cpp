class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int sum=0;
        int i=0;
        int j=0;
        while(i<n && j<n){
            sum+=mat[i][j];
            i++;
            j++;
        }
        i=0;
        j=n-1;
        while(i<n && j>=0){
            if(n%2!=0 && i==j){
                i++;
                j--;
                continue;
            }
            sum+=mat[i][j];
            i++;
            j--;
        }
        return sum;   
    }
};