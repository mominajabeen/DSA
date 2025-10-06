class Solution {
public:
    int swimInWater(vector<vector<int>>& grid) {
        int n = grid.size();
        set<pair<int, int>> visit;
        priority_queue<vector<int>, 
        vector<vector<int>>, greater<>> minHeap;
        vector<vector<int>> directions = {
            {0, 1},{0, -1}, {1, 0}, {-1, 0}};
        
        minHeap.push({grid[0][0], 0, 0});
        visit.insert({0, 0});

        while(!minHeap.empty()){
            auto curr = minHeap.top();
            minHeap.pop();
            int t = curr[0], r = curr[1], c = curr[2];
            if(r == n - 1 && c == n - 1)   return t;
            for(const auto& dir : directions){
                int neiR = r + dir[0], neiC = c + dir[1];
                if(neiR < 0 or neiC < 0 or neiR == n or neiC == n or 
                visit.count({neiR, neiC}))
                    continue;
                visit.insert({neiR, neiC});
                minHeap.push({max(t, grid[neiR][neiC]), neiR, neiC});
            }
        }
        return n * n;
    }
};
