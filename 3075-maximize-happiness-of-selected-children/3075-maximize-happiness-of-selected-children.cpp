class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long ans = 0;
        priority_queue<int> maxHeap;
        for(int i = 0; i < happiness.size(); i++){
            maxHeap.push(happiness[i]);
        }
        for(int i = 0; i < k; i++){
            int happy = maxHeap.top() - i;
            ans += (happy > 0) ? happy : 0;
            maxHeap.pop();
        }
        return ans;
    }
};