#include<iostream>
using namespace std;

   int main()
   {
      int b,i,j,w,lr=0,lc=0,n,m;
      int a[10][10];
      
      cout<<"Enter the no. of rows in matrix: ";
      cin>>m;
      cout<<"Enter no. of columns in matrix: ";
      cin>>n;
      cout<<"Enter the elements in matrix: ";
      
      for(i=0;i<m;i++)
      {
         for(j=0;j<n;j++)
         {
            cin>>a[i][j];
         }
      }
      
      cout<<"Enter the base address: ";
      cin>>b;
      cout<<"Enter the storage size of one element stored in array: ";
      cin>>w;
      
      i=m-1;
      j=n-1;
      
      cout<<"Address of A[i][j]: "<<b + w*(n*(i-lr)+(j-lc));
      
      return 0;

}