class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int maxWater = 0;
        int maxHeight = 0;
        while(left < right){
            maxHeight = min(height[left], height[right]);
            maxWater = max(maxHeight * (right - left), maxWater);
            // update pointers
            if(height[left] < height[right])    left++;
            else    right--; 
        }
        return maxWater;
    }
};