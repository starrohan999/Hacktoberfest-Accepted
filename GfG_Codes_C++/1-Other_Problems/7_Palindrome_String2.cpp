#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string input;

    cout << "Please enter a string: ";
    cin >> input;

    string s = string(input.rbegin(), input.rend());
    cout << "Reverce String: " << s << endl;

    if (input == string(input.rbegin(), input.rend()))
    {
        cout << input << " is a palindrome";
    }
    else
    {
        cout << input << " is not a palindrome";
    }

    return 0;
}