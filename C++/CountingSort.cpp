//this program is in accordance with counting sort algorithm of Introduction to Algorithms-Corman

#include<iostream>
#include<math.h>
using namespace std;

void CountSort(int arr[],int n,int k){
    int count[k];
    for(int i=0;i<=k;i++){
        count[i] = 0;
    }
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }
    for(int i =1;i<=k;i++){
        count[i] += count[i-1];
    }

    int output[n];
    for(int i=n-1;i>=0;i--){
        output[--count[arr[i]]] = arr[i];
    }

    //replacing original array with sorted array
    for(int i=0;i<n;i++){
        arr[i] = output[i];
    }

}


int main(){
    int arr[] = {1,3,2,3,4,1,6,4,3};
    int n = 9;
    int k = arr[0];
    for(int i=1;i<n;i++){
        k = max(k,arr[i]);
    }
    CountSort(arr,n,k);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}