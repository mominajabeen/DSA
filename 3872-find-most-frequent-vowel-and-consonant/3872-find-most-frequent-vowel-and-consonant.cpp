class Solution {
public:
    int maxFreqSum(string s) {
        int freq[26], maxVowel = 0, maxConst = 0;
        for(char c : s){
            int i = c - 'a';
            freq[i]++;
            if(c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u')
                maxVowel = max(maxVowel, freq[i]);
            else
                maxConst = max(maxConst, freq[i]);
        }
        return maxConst + maxVowel;
    }
};