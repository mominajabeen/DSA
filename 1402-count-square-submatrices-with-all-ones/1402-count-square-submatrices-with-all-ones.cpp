class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        // create a dp table with same dimensions as matrix
        vector<vector<int>> dp(n, vector<int>(m, 0));

        // variable to store total count of squares
        int ans = 0;
        
        // initialize first coulumn of DP table
        // each cell in first coulumn can only form a 1X1 square if matrix[i][0] = 1
        for(int i = 0; i < n; i++){
            dp[i][0] = matrix[i][0];
            ans += dp[i][0]; // add count of squares of first coulumn
        }
        for(int j = 1; j < m; j++){
            dp[0][j] = matrix[0][j];
            ans += dp[0][j];
        }
        for(int i = 1; i < n; i++){
            for(int j = 1; j < m; j++){
                if(matrix[i][j] == 1){
                    dp[i][j] = 1 + min({dp[i - 1][j - 1], dp[i][j - 1], dp[i - 1][j]});
                }
                ans += dp[i][j];
            }
        }
        return ans;
    }
};