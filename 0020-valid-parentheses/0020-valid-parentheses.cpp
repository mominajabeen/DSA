class Solution {
public:
    bool isValid(string s) {
       stack<char> stk;
       for(auto const& ch : s){
        if(ch == '(' or ch == '{' or ch == '['){
            stk.push(ch);
        }
        else{
            if(stk.empty()) return false;

            char top = stk.top();
            stk.pop();
            if(ch == ')' && top != '(') return false;
            if(ch == '}' && top != '{') return false;
            if(ch == ']' && top != '[') return false;
        }
       } 
       return stk.empty();
    }
};