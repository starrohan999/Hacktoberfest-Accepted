


#include <iostream>
using namespace std;
int main() {
  int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
  int a[3][3],b[3][3];
  int i,j;
  for(i=0;i<3;i++){
      for(j=0;j<3;j++){
          b[i][j]=matrix[i][j];
      }
  }
  for(i=0;i<3;i++){
      for(j=0;j<3;j++){
          cout<<b[i][j]<<' ';
      }cout<<endl;
  }
   for(i=0;i<3;i++){
      for(j=0;j<3;j++){
          a[i][j]=b[j][i];
     //  a[j][i]=b[i][j];
      }
  }
  cout<<endl;
   for(i=0;i<3;i++){
      for(j=0;j<3;j++){
          cout<<a[i][j]<<' ';
      }cout<<endl;
  }
    return 0;
}

