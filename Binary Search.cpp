#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int size,int target){
  int low=0;
  int high=size-1;
  int ans=-1;
  while(low<=high){
    int mid=low+(high-low)/2;
    if(target==arr[mid]){
      return mid;
      }
    else if(target>arr[mid]){
      low=mid+1;
      }
    else{
      high=mid-1;
      }
     }
  }
int main(){
  int size;
  cin>>size;
  int arr[size];
  for(int i=0;i<size;i++){
    cin>>arr[i];
    }
  int target;
  cin>>target;
  int ans=binarySearch(arr,size,target);
  cout<<ans<<endl;

  return 0;
  }
