class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long res = 0;
        int behindZeroIdx = INT_MAX;
        bool flag = false;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0){
                if(flag){
                    res += i - behindZeroIdx + 1;
                }
                else{
                    res += 1;
                    behindZeroIdx = i;
                    flag = true;
                }
            }
            else    flag = false;
        }
        return res;
    }
};