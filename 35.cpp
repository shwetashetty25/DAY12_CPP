//user input c style string:
#include <iostream>
using namespace std;
int main()
{
    char str[100];
    cout << "Enter a string:";
    cin >> str;
    cout << "You entered:" << str << endl;
    cin >> str;
    cout << "\nEnter another string:" << endl;
    return 0;
}