class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        int n = nums.size();
        vector<int> res;
        for(int i = 0; i < (n - k + 1); i++){
            res.push_back(xSum(i, nums, k, x));
        }
        return res;
    }
private:
    int xSum(int i, vector<int>& nums, int k, int x){
        priority_queue<pair<int, int>> pq;
        unordered_map<int, int> freq;
        for(int j = i; j < i + k && j < nums.size(); j++){
            freq[nums[j]]++;
        }
        for(auto pair : freq){
            pq.push({pair.second, pair.first});
        }
        int ans = 0;
        for(int j = 0; j < x && !pq.empty(); j++){
            int val = pq.top().first * pq.top().second;
            ans += val;
            pq.pop();
        }
        return ans;
    }
};