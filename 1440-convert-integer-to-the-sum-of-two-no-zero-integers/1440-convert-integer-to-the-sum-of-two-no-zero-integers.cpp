class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        for(int i = 1; i < n; i++){
            int j = n - i;
            if(i + j == n){
                if(check(i) && check(j))    return {i, j};
            }
        }
        return {1, 1};
    }
private:
    bool check(int x){
        while(x > 0){
            if(x % 10 == 0) return false;
            x /= 10;
        }
        return true;
    }

};