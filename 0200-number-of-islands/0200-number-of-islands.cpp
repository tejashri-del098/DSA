class Solution {
public: 
    void dfs(int row,int col,vector<vector<char>>& grid, vector<vector<bool>>& visited){
        int n = grid.size();
        int m = grid[0].size();
        visited[row][col] = true;
        int dr[]= {-1,1,0,0};
        int dc[]= {0,0,-1,1};

        for(int k = 0; k < 4; k++){
            int newrow = row+dr[k];
            int newcol =  col+dc[k];

            if(newrow >= 0 && newrow < n && newcol >= 0 && newcol <m){
                if(grid[newrow][newcol] == '1' && !visited[newrow][newcol]){
                    
                    dfs(newrow, newcol, grid, visited);
                }
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<bool>>visited(n,vector<bool>(m,false));
        int cnt = 0;
        for(int i = 0; i < n;i++ ){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == '1' && !visited[i][j]){
                    cnt++;
                    dfs(i,j,grid,visited);
                }
            }
        }
    return cnt;
    }
};