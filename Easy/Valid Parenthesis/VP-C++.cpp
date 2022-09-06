#include <string.h>
#include <iostream>
#include <stack>

class Solution {
public:
    bool isValid(std::string s) {
        std::stack<char> st;   // stack to store the current chars
        for(auto& ch : s){
            if(ch == '[' || ch == '{' || ch == '('){
                st.push(ch);
            }else{
                if(st.empty() || ((ch == ']' && st.top() != '[') ||
                   (ch == ')' && st.top() != '(') ||
                   (ch == '}' && st.top() != '{'))){
                    return false;
                }
                st.pop();

            }

        }
        return st.empty();
    }
    
};