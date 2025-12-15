class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        
        long long res = 1;
        long long length = 1;
        for(int i = 1; i < prices.size(); i++){
            if(prices[i -1] - prices[i] == 1){
                length++;
                res += length;
            }
            else{
                res++;
                length = 1;
        }
        }
        return res;
    }
};