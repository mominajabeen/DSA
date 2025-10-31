class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_set<int>numbers;
        vector<int>res;
        for(int i = 0; i < nums.size(); i++){
            if(numbers.find(nums[i]) == numbers.end()){
                numbers.insert(nums[i]);
            }
            else    res.push_back(nums[i]);
        }
        return res;
    }
};