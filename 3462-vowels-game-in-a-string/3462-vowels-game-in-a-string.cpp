class Solution {
public:
    bool doesAliceWin(string s) {
       int countVowels = 0;
       for(auto const& c : s){
        if(c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u'){
            countVowels++;}
       }
       if(countVowels > 0)     return true;
       return false;
    }
};