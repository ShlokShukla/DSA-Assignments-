#include <iostream>
#include <cstring>
using namespace std;
#define MAX 100
class Stack {
    char arr[MAX];
    int top;
public:
    Stack() {
        top = -1;
    }

    bool isFull() {
        return top == MAX - 1;
    }

    bool isEmpty() {
        return top == -1;
    }

    void push(char c) {
        if (!isFull()) {
            arr[++top] = c;
        }
    }

    char pop() {
        if (!isEmpty()) {
            return arr[top--];
        }
        return '\0'; 
    }
};

int main() {
    Stack s;
    char str[100];

    cout << "Enter a string: ";
    cin >> str;

    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        s.push(str[i]);
    }

    cout << "Reversed string: ";
    while (!s.isEmpty()) {
        cout << s.pop();
    }

    cout << endl;
    return 0;
}
