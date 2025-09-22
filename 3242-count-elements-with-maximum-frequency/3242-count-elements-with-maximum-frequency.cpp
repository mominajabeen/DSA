class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int maxFreq = 0;
        unordered_map<int, int> freqCount;
        for(auto const& num : nums){
            freqCount[num]++;
            maxFreq = max(maxFreq, freqCount[num]);
        }
        int res = 0;
        for(auto const& freq : freqCount){
            if(freq.second == maxFreq)  res += freq.second;
        }
        return res;
    }
};