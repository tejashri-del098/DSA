class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        /*int n = matrix.size();
        int m = matrix[0].size();
        int i = 0;
        int j = m-1;
        while(i < n && j >= 0){
            if(matrix[i][j]== target){
                return true;
            }else if (matrix[i][j] > target){
                j--;
            }else{
                i++;
            }
        }
        return false;*/
        /*int n = matrix.size();
        int m = matrix[0].size();
        vector<int>arr;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                arr.push_back(matrix[i][j]);
            }
        }
        int left = 0;
        int right = arr.size()-1;
        while(left <= right){
            int mid = left + (right- left)/2;
            if(arr[mid] == target){
                return true;
            }
            else if(arr[mid] > target){
                right = mid-1;
            }else{
                left = mid+1;
            }
        }
        return false;*/
        int n = matrix.size();
        int m = matrix[0].size();

        int left = 0;
        int right = n*m-1;

        while(left <= right){
            int mid = left +(right-left)/2;
            int row = mid/m;
            int col = mid%m;

            if(matrix[row][col] == target){
                return true;
            }
            else if(matrix[row][col] > target){
                right = mid -1;
            }else{
                left = mid+1;
            }
        }
        return false;
         
            
    }
};