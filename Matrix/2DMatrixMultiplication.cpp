#include <iostream>
using namespace std;
int main() {
	int n,i,j,k,sum=0;
	cout<<"Enter n"<<endl;
  cin>>n;
  int a[n][n],b[n][n],c[n][n];
  cout<<"Enter first matrix"<<endl;
  for(i=0;i<n;i++){
  for(j=0;j<n;j++){
  cin>>a[i][j];
  }
  }
  cout<<"Enter second matrix"<<endl;
  for(i=0;i<n;i++){
  for(j=0;j<n;j++){
  cin>>b[i][j];
  }//cout<<endl;
  }
  for(i=0;i<n;i++){
  for(j=0;j<n;j++){
    for(k=0;k<n;k++){
  sum+=a[i][k]*b[k][j];//00*00+ 01*10 , 00*01 + 01*11
    }
    c[i][j]=sum;
    sum=0;
  }
  }
  cout<<"The product of two matrix is : "<<endl;
   for(i=0;i<n;i++){
  for(j=0;j<n;j++){
  cout<<c[i][j]<<' ';
  }cout<<endl;
   }
  
	return 0;
}
