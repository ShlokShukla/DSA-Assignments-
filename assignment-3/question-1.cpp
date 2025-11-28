#include <iostream>
using namespace std;
#define MAX 5   // Maximum size of stack
class Stack {
private:
    int arr[MAX];
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

    void push(int value) {
        if (isFull()) {
            cout << "Stack is FULL! Cannot push.\n";
        } else {
            arr[++top] = value;
            cout << value << " pushed to stack.\n";
        }
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack is EMPTY! Cannot pop.\n";
        } else {
            cout << "Popped element: " << arr[top--] << endl;
        }
    }

    void peek() {
        if (isEmpty()) {
            cout << "Stack is EMPTY!\n";
        } else {
            cout << "Top element: " << arr[top] << endl;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is EMPTY!\n";
        } else {
            cout << "Stack elements: ";
            for (int i = top; i >= 0; i--) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stack s;
    int choice, value;

    do {
        cout << "\n---- MENU ----\n";
        cout << "1. PUSH\n";
        cout << "2. POP\n";
        cout << "3. isEmpty\n";
        cout << "4. isFull\n";
        cout << "5. DISPLAY\n";
        cout << "6. PEEK\n";
        cout << "7. EXIT\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                s.push(value);
                break;

            case 2:
                s.pop();
                break;

            case 3:
                if (s.isEmpty())
                    cout << "Stack is EMPTY.\n";
                else
                    cout << "Stack is NOT empty.\n";
                break;

            case 4:
                if (s.isFull())
                    cout << "Stack is FULL.\n";
                else
                    cout << "Stack is NOT full.\n";
                break;

            case 5:
                s.display();
                break;

            case 6:
                s.peek();
                break;

            case 7:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 7);

    return 0;
}
