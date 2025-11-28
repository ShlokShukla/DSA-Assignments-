#include <iostream>
#include <cstring>
using namespace std;
int main() 
{
    char str1[100], str2[100];
    cout << "enter first string: ";
    cin >> str1;
    cout << "enter second string: ";
    cin >> str2;
    strcat(str1, str2);
    cout << "concaenated string: " << str1;
    return 0;
}
