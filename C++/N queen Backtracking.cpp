#include<bits/stdc++.h>
using namespace std;
char arr[11][11];
int count11=0;
bool ispossible(int n,int row,int col)
{
      for(int i=row-1;i>=0;i--)
      {
            if(arr[i][col]=='Q')
            {
                  return false;
            }
      }
      for(int i=row-1,j=col-1;j>=0 &&i>=0;i--,j--)
      {
            if(arr[i][j]=='Q')
            {
                  return false;
            }
      }
      for(int i=row-1,j=col+1;j<n && i>=0;i--,j++)
      {
            if(arr[i][j]=='Q')
            {
                  return false;
            }
      }
      return true;
      
}
void nhelper(int n,int row)
{
      if(row==n)
      {
            //printing
            for(int i=0;i<n;i++)
            {
                  for(int j=0;j<n;j++)
                  {
                       cout<<arr[i][j]<<"      "; 
                  }
                  cout<<endl;
            }
            count11++;
            return;
      }
      //possible paths
      for(int j=0;j<n;j++)
      {
            if(ispossible(n,row,j))
            {
                  arr[row][j]='Q';
                  nhelper(n,row+1);
                  arr[row][j]='*';
            }
      }
         return;
}
void placenqueens(int n)
{
      for(int i=0;i<11;i++)
      {
            for(int j=0;j<11;j++)
            {
                  arr[i][j]='*';
            }
      }
      nhelper(n,0);
}
int main()
{
      int n;
      cin>>n;
      placenqueens(n);
       cout<<count11;
      return 0;
}