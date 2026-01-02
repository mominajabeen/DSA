class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
       unordered_set<int> unique;
       for(int n : nums){
        if(unique.find(n) != unique.end()){
            return n;
        }
        else
            unique.insert(n);
       } 
       return 0;
    }
};