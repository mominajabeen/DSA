class Solution {
    vector<pair<int, int>> directions = {{1,0}, {-1, 0}, {0, 1}, {0, -1}};
public:
    
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        
        int ROWS = heights.size(), COLS = heights[0].size();
        vector<vector<bool>> pac(ROWS, vector<bool>(COLS, false));
        vector<vector<bool>> atl(ROWS, vector<bool>(COLS, false));

        for(int c = 0; c < COLS; ++c){
            dfs(0, c, heights, pac);
            dfs(ROWS-1, c, heights, atl);
        }
        for(int r = 0; r < ROWS; ++r){
            dfs(r, 0, heights, pac);
            dfs(r, COLS - 1, heights, atl);
        }

        vector<vector<int>> res;
        for(int r = 0; r < ROWS; r++){
            for(int c = 0; c < COLS; c++){
                if(pac[r][c] && atl[r][c])  res.push_back({r, c});
            }
        }
        return res;
    }
private:
    void dfs(int r, int c, vector<vector<int>>& heights, vector<vector<bool>>& ocean){
        ocean[r][c] = true;
        for(auto [dr, dc]: directions){
            int row = r + dr;
            int col = c + dc;
            if(row >= 0 && row < heights.size() &&
            col >= 0 && col < heights[0].size() &&
            !ocean[row][col] &&
            heights[row][col] >= heights[r][c]){
                dfs(row, col, heights, ocean);
            }
        }
    }
};
