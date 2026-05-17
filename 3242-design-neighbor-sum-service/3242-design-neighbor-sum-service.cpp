class NeighborSum {
public:
    unordered_map<int,pair<int,int>> cords;
    int n;
    int m;
    vector<vector<int>> grid;
    NeighborSum(vector<vector<int>>& grid) {
        this->grid=grid;
        n=grid.size();
        m=grid[0].size();
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                cords[grid[i][j]]={i,j};
            }
        }
    }
    
    int adjacentSum(int value) {
        int x=cords[value].first;
        int y=cords[value].second;
        int sum=0;
        if(x-1>=0) sum+=grid[x-1][y];
        if(y-1>=0) sum+=grid[x][y-1];
        if(x+1<n) sum+=grid[x+1][y];
        if(y+1<m) sum+=grid[x][y+1];
        return sum;
    }
    
    int diagonalSum(int value) {
        int x=cords[value].first;
        int y=cords[value].second;
        int sum=0;
        if(x-1>=0 && y-1>=0) sum+=grid[x-1][y-1];
        if(x-1>=0 && y+1<m) sum+=grid[x-1][y+1];
        if(x+1<n && y-1>=0) sum+=grid[x+1][y-1];
        if(x+1<n && y+1<m) sum+=grid[x+1][y+1];
        return sum;
    }
};

/**
 * Your NeighborSum object will be instantiated and called as such:
 * NeighborSum* obj = new NeighborSum(grid);
 * int param_1 = obj->adjacentSum(value);
 * int param_2 = obj->diagonalSum(value);
 */