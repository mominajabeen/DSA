class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.begin(), capacity.end());
        int totalApples = 0;
        for(int i = 0; i < apple.size(); i++){
            totalApples += apple[i];
        }
        int res = 0;
        for(int i = capacity.size() - 1; i >= 0 && totalApples > 0; i--){
            totalApples -= capacity[i];
            res++;
        }
        return res;
    }
};