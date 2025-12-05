class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int arraySum = 0;
        for(int& n : nums){
            arraySum += n;
        }
        if(arraySum % 2 == 0)   return nums.size() - 1;
        return 0;
    }
};