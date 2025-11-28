#include <iostream>
#include <stack>
using namespace std;
bool isMatchingPair(char open, char close) 
{
    return (open == '(' && close == ')') ||
           (open == '{' && close == '}') ||
           (open == '[' && close == ']');
}

bool isBalanced(string exp) 
{
    stack<char> s;

    for (char c : exp) {
        if (c == '(' || c == '{' || c == '[') {
            s.push(c);
        }
        // If closing bracket → check
        else if (c == ')' || c == '}' || c == ']') {
            if (s.empty()) return false;   // No matching open
            if (!isMatchingPair(s.top(), c)) return false;
            s.pop();
        }
    }

    return s.empty();
}

int main() {
    string exp;

    cout << "Enter an expression: ";
    cin >> exp;

    if (isBalanced(exp))
        cout << "Parentheses are balanced.\n";
    else
        cout << "Parentheses are NOT balanced.\n";

    return 0;
}
