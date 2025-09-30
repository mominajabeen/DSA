class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int end = nums.size() - 1;
        
        while(end > 0){
            vector<int> ans;
            for(int i = 0; i < end; i++)
                nums[i] = (nums[i] + nums[i + 1]) % 10;
            end--;
        }
        return nums[0];
    }
};