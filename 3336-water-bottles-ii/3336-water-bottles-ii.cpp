class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int fullBottles = numBottles;
        int emptyBottles = 0;
        int bottleDrunk = 0;
        while(fullBottles or emptyBottles >= numExchange){
            bottleDrunk += fullBottles;
            emptyBottles += fullBottles;
            fullBottles = 0;
            if(emptyBottles >= numExchange){
                fullBottles++;
                emptyBottles -= numExchange;
                numExchange++;
            }
        }
        return bottleDrunk;
    }
};