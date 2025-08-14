class Solution {
public:
    string largestGoodInteger(string num) {
        int res = -1;
        for(int i = 0; i + 2 < num.length(); i++){
            if(num[i] == num[i + 1] && num[i] == num[i + 2])
                res = max(res, num[i] - '0');
        }
        return (res == -1) ? "" : string(3, '0' + res);
    }
};