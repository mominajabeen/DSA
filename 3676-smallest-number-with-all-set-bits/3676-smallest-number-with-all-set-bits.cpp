class Solution {
public:
    int smallestNumber(int n) {
        int p = 1;
        while(p <= n){
            p <<= 1;
        }
        return p - 1;
    }
};