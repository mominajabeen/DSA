class Solution {
public:
    string sortVowels(string s) {
        vector<char> array;
        for(auto const& c : s){
            if(c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u' or
            c == 'A' or c == 'E' or c == 'I' or c == 'O' or c == 'U')
                array.push_back(c);
        }
        string res;
        sort(array.begin(), array.end());
        int idx = 0;
        for(int i = 0; i < s.length(); i++){
            char c = s[i];
            if(c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u' or
            c == 'A' or c == 'E' or c == 'I' or c == 'O' or c == 'U'){
                res += array[idx];
                idx++;
            }
            else
                res += c;
        }
        return res;
    }
};