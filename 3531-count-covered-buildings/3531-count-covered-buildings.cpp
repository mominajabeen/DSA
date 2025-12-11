class Solution {
public:
    int countCoveredBuildings(int n, vector<vector<int>>& buildings) {
        int count = 0;
        unordered_map<int, set<int>> st1, st2;
        for(auto& p : buildings){
            st1[p[0]].insert(p[1]);
            st2[p[1]].insert(p[0]);
        }
        for(auto& p : buildings){
            auto& it1 = st1[p[0]];
            auto& it2 = st2[p[1]];
            auto[downy, uph] = it1.equal_range(p[1]);
            auto[downx, upx] = it2.equal_range(p[0]);
            bool up = downy != it1.begin();
            bool down = uph != it1.end();
            bool right = upx != it2.end();
            bool left = downx != it2.begin();
            if(up && down && right && left)     count++;
        }
        return count;
    }
};