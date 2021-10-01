#include<iostream>
using namespace std;
int towerofHanoi(int n,char src,char dest,char helper)
{

    if(n==0)
    return 0;

    towerofHanoi(n-1,src,helper,dest);
    cout<<"Move From"<<src<<"to"<<dest<<endl;
    towerofHanoi(n-1,src,dest,helper);
}

int main()
{

    towerofHanoi(2,'A','B','C');
}
