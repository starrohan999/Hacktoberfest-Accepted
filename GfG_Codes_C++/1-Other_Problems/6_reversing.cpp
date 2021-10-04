// Reversing a Number
// like this    - 1879 to 9818 && 100020 to 20001

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int rev_num = 0;
    int or_num = n;

    while (n > 0)
    {
        int rem = n % 10;
        rev_num = rev_num * 10 + rem;
        n /= 10;
    }

    cout << "The reversing number of " << or_num << " is " << rev_num << endl;

    return 0;
}