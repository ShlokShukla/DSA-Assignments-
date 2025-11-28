#include <iostream>
#include <stack>
#include <cctype>
#include <string>
using namespace std;
int precedence(char op) {
    if (op == '^') return 3;
    if (op == '*' || op == '/') return 2;
    if (op == '+' || op == '-') return 1;
    return 0;
}
bool isRightAssociative(char op) {
    return op == '^';
}
string infixToPostfix(string infix) {
    stack<char> st;
    string postfix = "";
    for (char c : infix) {
        if (isalnum(c)) {
            postfix += c;
        }
        else if (c == '(') {
            st.push(c);
        }
        else if (c == ')') {
            while (!st.empty() && st.top() != '(') {
                postfix += st.top();
                st.pop();
            }
        }
        else {
            while (!st.empty() &&
                   ((precedence(st.top()) > precedence(c)) ||
                   (precedence(st.top()) == precedence(c) && !isRightAssociative(c))) &&
                   st.top() != '(') {
                postfix += st.top();
                st.pop();
            }
            st.push(c);
        }
    }
    while (!st.empty()) {
        postfix += st.top();
        st.pop();
    }
    return postfix;
}
int main() {
    string infix;
    cout << "Enter Infix Expression: ";
    cin >> infix;
    cout << "Postfix Expression: " << infixToPostfix(infix) << endl;

    return 0;
}
