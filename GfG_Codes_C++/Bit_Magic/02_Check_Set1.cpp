// 23/06/2021
// Check Kth bit is set or not - Using Left Shift

#include <iostream>
using namespace std;

void isKthbitSet(int n, int k)
{
    if(n & (1<<(k-1)))
    cout<<"Set";
    else
    cout<<"Not Set";
}

int main()
{
    int n=5, k=1;
    isKthbitSet(n,k);

    return 0;
}