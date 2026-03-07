class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int low=0;
        int high=m-1;
        while(low<=high){
            int mid=(low+high)/2;
            int max_ele=-1;
            int row_index=-1;
            for(int i=0;i<n;i++){
                if(max_ele<mat[i][mid]){
                    max_ele=mat[i][mid];
                    row_index=i;
                }
            }
            int left=mid-1>=0 ? mat[row_index][mid-1] : -1;
            int right=mid+1<m ? mat[row_index][mid+1] : -1;
            if(max_ele> left && max_ele>right){
                return {row_index,mid};
            }else if(max_ele<left){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return {-1,-1};
    }
};