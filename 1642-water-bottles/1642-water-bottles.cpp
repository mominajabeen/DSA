class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int res = numBottles;
        int remainingBottles = numBottles;
        int exchange = 0;

        while(remainingBottles >= numExchange){
             exchange = remainingBottles / numExchange;
             res += exchange;
             remainingBottles -= (numExchange * exchange);
             remainingBottles += exchange;
        }
        return res;
    }
};