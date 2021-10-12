#include <iostream>

using namespace std;

int sqRootfloor(int x)
{
    int i = 1;
    while (i * i <= x)
    {
        i++;
    }
    return (i - 1);
}

int main()
{
    cout << sqRootfloor(15);

    return 0;
}