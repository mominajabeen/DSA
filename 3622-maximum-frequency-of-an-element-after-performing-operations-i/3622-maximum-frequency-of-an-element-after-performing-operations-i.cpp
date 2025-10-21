class Solution {
public:
    int maxFrequency(vector<int>& nums, int k, int numOperations) {
        int n = nums.size(), ans = 0, left = 0, right = 0;
        sort(nums.begin(), nums.end());

        // hashmap to store frequency of each element
        unordered_map<int, int> count;
        for(int num : nums){
            count[num]++;
        }

        // first pass: choose an existing number as the reference point 
        for(int mid = 0; mid < n; mid++){
            while(nums[mid] - nums[left] > k)   left++;

            while(right < n - 1 && nums[right + 1] - nums[mid] <= k)    right++;

            int total = right - left + 1;
            // Update ans with maximum achievable frequency for nums[mid]
            ans = max(ans, min(total - count[nums[mid]], numOperations) + count[nums[mid]]);
        }
        left = 0;
        for(right = 0; right < n; right++){
            int mid = (nums[left] + nums[right]) / 2;

            while(mid - nums[left] > k or nums[right] - mid > k){
                left++;
                mid = (nums[left] + nums[right]) / 2;
            }
            ans = max(ans, min(right - left + 1, numOperations)); 
        }
        return ans;
    }
};