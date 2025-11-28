#include <iostream>
using namespace std;
int main() 
{
    int n, arr[100];
    cin >> n;
    cout << "Enter " << n - 1 << " sorted elements:\n";
    for (int i = 0; i < n - 1; i++)
        cin >> arr[i];
    int missing = n; 
    for (int i = 0; i < n - 1; i++) 
    {
        if (arr[i] != i + 1) 
        {
            missing = i + 1;
            break;
        }
    }
    cout << "Missing number (Linear Search) = " << missing;
    return 0;
}
