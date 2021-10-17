#include <bits/stdc++.h>
using namespace std;

#define fri(i,a,b) for(int i = a; i<=b; i++)
#define frd(i,a,b) for(int i = a; i>=b; i--)
int main()
{
    int n;
    cin>>n;
    int arr[n];
    fri( i ,  0 , n-1)
        cin>>arr[i];

    int flag;
    fri(i , 0, n-2){
        flag =0;
        fri(j , 0 ,n-2-i){
            if(arr[j] > arr[j+1]){
                swap(arr[j] , arr[j+1]);
                flag = 1;
            }
        }
        if(flag == 0)
            break;
    }

    fri( i , 0 , n-1)
        cout<<arr[i]<<" ";


    return 0;
}