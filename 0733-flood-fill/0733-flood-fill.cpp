class Solution {
public: 
    int V,E;
    void dfs(int row,int col ,vector<vector<int>>& image,int originalcolour, int color,vector<vector<bool>>& visited){
        visited[row][col] = true;
        image[row][col ] = color;

        int dr[4] = {-1,1,0,0};
        int dc[4]= {0,0,-1,1};

        for(int k = 0; k < 4; k++){
            int newrow = row + dr[k];
            int newcol = col + dc[k];
        
        if(newrow >= 0 && newrow < V && newcol >= 0 && newcol <E){
            
            if(image[newrow][newcol] == originalcolour && !visited[newrow][newcol]){
                 dfs(newrow, newcol,image,originalcolour,color,visited);
            }
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        V =image.size();
         E = image[0].size();
        int originalcolour = image[sr][sc];
        vector<vector<bool >> visited(V,vector<bool>(E,false));
    
        if(originalcolour == color)
        return image;
        dfs(sr,sc,image,originalcolour,color,visited);
        return image;
         
    }
};