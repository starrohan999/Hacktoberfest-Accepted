#include <iostream>
using namespace std;

double findAvg(int arr[], int n){
  double ans;
  int sum=0;
  for(int i=0;i<n;i++){
    sum += arr[i];
  }
  ans = sum*1.0/n;
  return ans;
}

int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<findAvg(arr,n);
}
