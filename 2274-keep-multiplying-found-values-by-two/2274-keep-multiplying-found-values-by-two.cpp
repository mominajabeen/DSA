class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        unordered_set<int> set;
        for(int n : nums){
            set.insert(n);
        }
        while(true){
            if(set.find(original) != set.end()) original *= 2;
            else    return original;
        }
        return original;
    }
};