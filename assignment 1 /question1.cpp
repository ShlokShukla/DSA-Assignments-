#include <iostream>
using namespace std;
int main() {
    int arr[100], n = 0, choice;
    while (true) 
    {
        cout << "1. CREATE\n";
        cout << "2. DISPLAY\n";
        cout << "3. INSERT\n";
        cout << "4. DELETE\n";
        cout << "5. LINEAR SEARCH\n";
        cout << "6. EXIT\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) 
        {
        case 1: 
        {  
            cout << "Enter number of elements: ";
            cin >> n;
            cout << "Enter elements:\n";
            for (int i = 0; i < n; i++) {
                cin >> arr[i];
            }
            cout << "Array created successfully!\n";
            break;
        }

        case 2: 
            { 
            if (n == 0) 
            {
                cout << "Array is empty!\n";
            } else 
            {
                cout << "Array elements: ";
                for (int i = 0; i < n; i++) 
                {
                    cout << arr[i] << " ";
                }
                cout << endl;
            }
            break;
        }

        case 3: {  
            int pos, val;
            cin >> pos;
            cin >> val;
            if (pos < 1 || pos > n+1) 
            {
                cout << "Invalid position!\n";
            } else {
                for (int i = n; i >= pos; i--) 
                {
                    arr[i] = arr[i - 1];
                }
                arr[pos - 1] = val;
                n++;
            }
            break;
        }

        case 4: 
            {  
            int pos;
            cin >> pos;
            if (pos < 1 || pos > n) 
            {
                cout << "Invalid position!\n";
            } else {
                for (int i = pos - 1; i < n - 1; i++) 
                {
                    arr[i] = arr[i + 1];
                }
                n--;
            }
            break;
        }

        case 5: 
            { 
            int key, i;
            cin >> key;

            bool found = false;
            for (i = 0; i < n; i++) 
            {
                if (arr[i] == key) 
                {
                    found = true;
                    break;
                }
            }
            if (!found)
                cout << "element not found!\n";
            break;
        }

        case 6:
            cout << "Exiting program...\n";
            return 0;

        default:
            cout << "Invalid choice! Try again.\n";
        }
    }
}
