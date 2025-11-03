class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int totalTime = 0;
        int i = 0, j = 0;
        while(i < neededTime.size() && j < neededTime.size()){
            int currentTotal = 0, currentMax = 0;

            while(j < neededTime.size() && colors[i] == colors[j]){
                currentTotal += neededTime[j];
                currentMax = max(currentMax, neededTime[j]);
                j++;
            }
            totalTime += currentTotal - currentMax;
            i = j;
        }
        return totalTime;
    }
};