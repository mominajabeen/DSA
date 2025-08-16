class Solution {
public:
    int maximum69Number (int num) {
        string number = to_string(num);
        int k = 0;
        string res = "";

        for(int i = 0; i < number.length(); i ++){
            if(number[i] == '6' && k < 1){
                res += '9';
                k++;
            }
            else res += number[i];
        }
        return stoi(res);
    }
};