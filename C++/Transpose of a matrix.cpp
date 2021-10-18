#include<iostream>
using namespace std;
class Matrix
{
public:
int A[10][10], m, n, i, j;

void trans()
{
 
cout << "Enter rows and columns of matrix : ";
cin >> m >> n;
cout << "Enter elements of matrix : ";
for (i = 0; i < m; i++)
for (j = 0; j < n; j++)
cin >> A[i][j];
cout << "Entered Matrix : \n ";
for (i = 0; i < m; i++)
{
for (j = 0; j < n; j++)
cout << A[i][j] << " ";
cout << "\n ";
}
cout << "Transpose of Matrix : \n ";
for (i = 0; i < n; i++)
{
for (j = 0; j < m; j++)
{
//Changing row into column and column into row
cout << A[j][i] << " ";
}
cout << "\n ";
}
3
};
int  main ()
{
Matrix mx;
mx.trans();
return 0;
}