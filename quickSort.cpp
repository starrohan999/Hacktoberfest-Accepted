#include<iostream>
using namespace std;
template<class T>
int partition(T *a, int p, int q)
{
 T pivot= a[p];
 int i=p;
 int j=q;
 while(i<=j)
 {
 	while(a[i] <= pivot && i<=q)
 	{
 i=i+1;
 	}
 
 	while(a[j] > pivot)
 	{
 	j=j-1;
 	} 
 
 	if(i < j)
 	{
 	T temp=a[i];
a[i] = a[j];
 	a[j] = temp;
 }
 }
 
 a[p]=a[j];
 a[j]=pivot;
 return j;
}
template<class T>
void Quick_Sort(T* a, int low, int high) {
 	if(low<high){
 		int j= partition(a,low,high);
 		Quick_Sort(a,low,j-1);
 		Quick_Sort(a,j+1,high);
 	}
}
template<class T>
void display(T *a, int size)
{
 	for(int i = 0; i<size; i++)
 		cout << a[i] << " ";
 	cout << endl;
}
int main() {
 	int n;
 	cout << "Enter the number of elements: ";
 	cin >> n;
 	int arr[n]; 
 	cout << "Enter elements:" << endl;
 	for(int i = 0; i<n; i++)
 	{
 		cin >> arr[i];
 	}
 	int l=0;
 	int h=n-1;
 
 	Quick_Sort<int>(arr,l,h);
 
 	cout << "Array after Sorting: ";
 	display(arr, n);
} 
/* Sample output: 
Enter the no. of elements: 5
Enter elements:
5 3 1 2 4
Array after sorting: 1 2 3 4 5
*/
