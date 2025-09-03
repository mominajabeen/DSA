class Solution {
public:
    static bool comp(vector<int>& a, vector<int>& b){
        if(a[0] == b[0])
            return a[1] > b[1];
        return a[0] < b[0];
    }
    int numberOfPairs(vector<vector<int>>& points) {
        int n = points.size();
        sort(points.begin(), points.end(), comp);
        int ans = 0;
        for(int i = 0; i < n; i++){
            int x1 = points[i][0], y1 = points[i][1];
            long long k = -1000000000000;
            for(int j = i + 1; j < n; j++){
                int x2 = points[j][0], y2 = points[j][1];
                if(y2 > y1) continue;
                if(y2 > k)  ans++;
                if(y2 > k)  k = y2;
            }
        }
        return ans;
    }
};