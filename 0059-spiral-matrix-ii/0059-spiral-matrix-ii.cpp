class Solution {
public:
    void fun(vector<vector<int>> & mat)
    {
        int count = 1;
      int left =0;
      int right = mat.size()-1;
      int top = 0;
      int bottom = mat.size()-1;
      while(top <= bottom && left <= right){
            for(int i = left ; i <= right; i++){
                mat[top][i]=count;
                count++;
            }
            top++;
            for(int i = top; i <= bottom; i++){
                mat[i][right]=count;
                count++;
            }
            right--;
            if(top <= bottom){
                for(int i = right; i >= left; i--){
                   mat[bottom][i]=count;
                count++;
                }
                bottom--;
            }
            if(left <= right){
                for(int i = bottom; i >= top; i--){
                    mat[i][left] = count;
                    count++;
                }
                left++;
            }
        }
    }

    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>ans(n,vector<int>(n,1));
         fun(ans);
         return ans;
    }
};