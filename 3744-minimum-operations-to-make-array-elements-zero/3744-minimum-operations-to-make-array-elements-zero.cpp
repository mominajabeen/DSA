class Solution {
public:
    long long minOperations(vector<vector<int>>& queries) {
        long long ans = 0;
        for(int i = 0; i < queries.size(); i++){
            long long start = queries[i][0], end = queries[i][1];
            long long ops = 0;

            for(long long d = 1, prev = 1; d < 17; d++){
                long long cur = prev * 4LL;

                long long l = max(start, prev), r = min(end, cur - 1);

                if(r >= l)  ops += (r - l + 1) * d;
                prev = cur;
            }
            ans += (ops + 1) / 2;
        }
        return ans;
    }
};