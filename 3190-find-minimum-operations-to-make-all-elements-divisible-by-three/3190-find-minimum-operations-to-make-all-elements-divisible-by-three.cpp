class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int ans = 0;
        for(int x : nums){
            if(x % 3 != 0){
                ans += min(x % 3, 3 - (x % 3));
            }
        }
        return ans;
    }
};