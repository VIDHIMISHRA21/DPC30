#include <iostream>
#include <stack>
using namespace std;

bool isValid(string s) {
    stack<char> st;

    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            st.push(c); // push opening brackets
        } else {
            if (st.empty()) return false; // no opening for this closing

            char top = st.top();
            st.pop();

            if ( (c == ')' && top != '(') ||
                 (c == '}' && top != '{') ||
                 (c == ']' && top != '[') ) {
                return false; // mismatch
            }
        }
    }

    return st.empty(); // valid only if no unclosed brackets left
}

int main() {
    string s = "[{()}]";
    if (isValid(s))
        cout << "true";
    else
        cout << "false";
    return 0;
}
