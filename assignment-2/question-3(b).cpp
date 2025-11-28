#include <iostream>
using namespace std;
int main() {
    int n, arr[100];
    cout << "Enter n (array contains n-1 elements): ";
    cin >> n;

    cout << "Enter " << n - 1 << " sorted elements:\n";
    for (int i = 0; i < n - 1; i++)
        cin >> arr[i];

    int low = 0, high = n - 2;
    int missing = n; // default if last is missing

    while (low <= high) 
    {
        int mid = (low + high) / 2;

        if (arr[mid] == mid + 1) 
        {
            low = mid + 1;  
        }
        else 
        {
            missing = mid + 1; 
            high = mid - 1;   
        }
    }

    cout << "Missing number (Binary Search) = " << missing;

    return 0;
}
