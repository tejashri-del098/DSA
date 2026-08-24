class Solution {
public: 
    int initialclr;
    void dfs (int row,int col,int color,vector<vector<int>>& ans, vector<vector<int>>& image,int dirrow[],int dircol[]){
      ans[row][col] = color;
      int n = image.size();
      int m  = image[0].size();
      for(int i = 0; i < 4; i++){
        int nrow = row+dirrow[i];
        int ncol = col+dircol[i];
        if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && image[nrow][ncol]==initialclr && ans[nrow][ncol] != color){
            dfs(nrow,ncol,color,ans,image,dirrow,dircol);

        }
      }


    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
         initialclr = image[sr][sc];
        vector<vector<int>> ans = image;
        int dirrow[] ={-1,0,1,0};
        int dircol[] ={0,+1,0,-1};
        dfs(sr,sc,color,ans,image,dirrow,dircol);
        return ans;
    }
};