#include <iostream>
#include <stack>
#include <cmath>
#include <cctype>
using namespace std;

int evaluatePostfix(string exp) {
    stack<int> st;

    for (int i = 0; i < exp.length(); i++) {
        char c = exp[i];
        if (c == ' ') continue;
        if (isdigit(c)) {
            int num = 0;

            while (i < exp.length() && isdigit(exp[i])) {
                num = num * 10 + (exp[i] - '0');
                i++;
            }
            i--;

            st.push(num);
        }
        else {
          
            int b = st.top(); st.pop();
            int a = st.top(); st.pop();

            switch (c) {
                case '+': st.push(a + b); break;
                case '-': st.push(a - b); break;
                case '*': st.push(a * b); break;
                case '/': st.push(a / b); break;
                case '^': st.push(pow(a, b)); break;
            }
        }
    }

    return st.top();
}

int main() {
    string exp;
    cout << "Enter Postfix Expression (with spaces if multi-digit): ";
    getline(cin, exp);

    cout << "Result = " << evaluatePostfix(exp) << endl;

    return 0;
}
