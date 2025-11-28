class Solution {
public:
    int ans = 0;
    vector<vector<int>> adj;
    void build_adj(int n, vector<vector<int>>& edges, vector<int>& values){
        for(auto& e : edges){
            int i = e[0], j = e[1];
            adj[i].push_back(j);
            adj[j].push_back(i);
        }
    }
    int dfs(int i, int parent, vector<int>& values, int k){
        int sum = values[i];
        for(int j : adj[i]){
            if(j == parent) continue;
            sum += dfs(j, i, values, k);
            sum %= k;
        }
        if(sum % k == 0){
            ans++;
            return 0;
        }
        return sum;
    }
    int maxKDivisibleComponents(int n, vector<vector<int>>& edges, vector<int>& values, int k) {
        adj.resize(n);
        build_adj(n, edges, values);
        dfs(0, -1, values, k);
        return ans;
    }
};