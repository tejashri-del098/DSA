class Solution {
public:

    int dfs(int row, int col,
            vector<vector<int>>& matrix,
            vector<vector<int>>& dp) {

        if(dp[row][col] != -1) {
            return dp[row][col];
        }

        int ans = 1;

        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};

        int n = matrix.size();
        int m = matrix[0].size();

        for(int k = 0; k < 4; k++) {

            int nr = row + dr[k];
            int nc = col + dc[k];

            if(nr >= 0 && nr < n &&
               nc >= 0 && nc < m &&
               matrix[nr][nc] > matrix[row][col]) {

                ans = max(ans,
                          1 + dfs(nr, nc, matrix, dp));
            }
        }

        return dp[row][col] = ans;
    }

    int longestIncreasingPath(vector<vector<int>>& matrix) {

        int n = matrix.size();
        int m = matrix[0].size();

        vector<vector<int>> dp(n, vector<int>(m, -1));

        int res = 0;

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {

                res = max(res,
                          dfs(i, j, matrix, dp));
            }
        }

        return res;
    }
};