class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
       int res = 0, count = 0;
       unordered_set<char> brokenLetterSet(brokenLetters.begin(), brokenLetters.end());
       for(int i = 0; i <= text.size(); ++i){
        if(i == text.size() or text[i] == ' '){
            res += count == 0;
            count = 0;
            }
            else if(count == 0){
                if(brokenLetterSet.find(text[i]) != brokenLetterSet.end())
                    count++;
            }
        }
       return res; 
    }
};