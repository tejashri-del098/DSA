class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int i =0;
        int left = 0;
        int right = n-1;
        for(int j = n-1; j>= 0; j--){
           if(matrix[i][j] > target){
             int mid = left+(right-left)/2;
             if(mid == target){
                return true;
             }else if(mid > target){
                right--;
             }else{
                left++;
             }

           }
           return true;
        }
        return false;
    }
};