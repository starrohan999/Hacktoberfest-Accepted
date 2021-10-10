#include<bits/stdc++.h>
using namespace std;

int maxContiguousSubarray(int arr[],int n){
    int max_till_here=1;
    int min_till_here=1;

    int max_product=1;

    for(int i=0;i<n;i++){
        if(arr[i]>0){
            max_till_here = max_till_here * arr[i];
            min_till_here = min(min_till_here * arr[i], 1);
        }
        else if(arr[i]<0){
            int temp = max_till_here;
            max_till_here=max(min_till_here * arr[i] , 1);
            min_till_here = temp * arr[i];
        }
        else{
            max_till_here = 1;
            min_till_here = 1;
        }
        if(max_till_here > max_product){
            max_product = max_till_here;
        }
    }
    return max_product;
}

int main(){
    int a;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    cout<<maxContiguousSubarray(arr,a);
}