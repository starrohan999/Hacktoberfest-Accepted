#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
    }
  int xr=0;
  for(int i=0;i<n;i++){
    xr=xr^arr[i];
    }
  cout<<xr<<endl;
  return 0;
  }
