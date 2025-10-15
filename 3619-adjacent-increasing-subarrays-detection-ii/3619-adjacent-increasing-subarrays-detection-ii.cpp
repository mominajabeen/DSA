class Solution {
public:
    int maxIncreasingSubarrays(vector<int>& nums) {
        int prevIdx = 0, curr = 1;
        int ans = 1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] > nums[i - 1]){
                curr++;
            }
            else{
                prevIdx = curr;
                curr = 1;
            }
            ans = max(ans, max(curr >> 1, min(curr, prevIdx)));
        }
        return ans;
    }
};