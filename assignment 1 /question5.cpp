#include <iostream>
using namespace std;
int main() 
{
    int a[10][10];
    int rows, cols;
    cin >> rows;
    cin >> cols;

    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < rows; i++)
      {
        for (int j = 0; j < cols; j++) 
        {
            cin >> a[i][j];
        }
    }
    cout << "\nSum of each row:\n";
    for (int i = 0; i < rows; i++) 
    {
        int sum = 0;
        for (int j = 0; j < cols; j++) 
        {
            sum += a[i][j];
        }
        cout << "Row " << i + 1 << " = " << sum << endl;
    }
    cout << "\nSum of each column:\n";
    for (int j = 0; j < cols; j++) 
    {
        int sum = 0;
        for (int i = 0; i < rows; i++) 
        {
            sum += a[i][j];
        }
        cout << "Column " << j + 1 << " = " << sum << endl;
    }

    return 0;
}
