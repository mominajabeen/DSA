class Solution {
public:
    int countPalindromicSubsequence(string s) {
        // arrays to store the minimum and maximum occurances of each character in the input string
        vector<int> minExist(26, INT_MAX);
        vector<int> maxExist(26, INT_MIN);

        // poputate minExist and maxExist array
        for(int i = 0; i < s.size(); i++){
            int charIndex = s[i] - 'a';
            minExist[charIndex] = min(minExist[charIndex], i);
            maxExist[charIndex] = max(maxExist[charIndex], i);
        }
        int uniqueCount = 0;
        // iterate over each character in alphabet
        for(int charIndex = 0; charIndex < 26; charIndex++){
            if(minExist[charIndex] == INT_MAX or maxExist[charIndex] == INT_MIN)
                continue;
            unordered_set<char> uniqueCharsBetween;
            for(int j = minExist[charIndex] + 1; j < maxExist[charIndex]; j++){

                uniqueCharsBetween.insert(s[j]);
            }
            uniqueCount += uniqueCharsBetween.size();
        }
        return uniqueCount;
    }
};