//Author : Sanjana Sawant

#include <stdio.h>
#define MAX 20

int quicksort(int[], int, int);
int partition(int[], int, int);

int partition(int a[], int l, int r)
{
    //Partition algorithm
   int pivot, start, end, temp;
   pivot = a[l];
   start = l;
   end = r;
   while(start<end)
   {
       while(a[start] <= pivot)
            start++;
       while(a[end] > pivot)
            end--;
       if (start < end)
       {
           temp = a[start];
           a[start] = a[end];
           a[end]=temp;
       }
   }
   temp = a[l];
   a[l] = a[end];
   a[end] = temp;
   return end;
}

int quicksort(int a[], int l, int r)
{
    //Quick sort algorithm
    int j;
    if (l<r) //if left element is smaller than right element
    {
        j = partition(a, l, r);  //Divide the array in two parts
        quicksort(a, l, j-1);    //Perform quick sort on left part
        quicksort(a, j+1, r);    //Perform quick sort on right part
    }
}

int main()
{
    int a[MAX], n, i;

    printf("---------Program for Quick Sort------------");

    printf("\n\nEnter the size of array : ");
    scanf("%d",&n);

    printf("\nEnter %d numbers : ", n);
    for (i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nOriginal array: \n");
    for (i=0; i<n; i++)
    {
        printf("%d \t", a[i]);
    }

    //Calling function for quick_sort
    quicksort(a, 0, n-1);
    printf("\n\nSorted array: \n");
    for (i=0; i<n; i++)
    {
        printf("%d \t",a[i]);
    }

    printf("\n\n");
    return 0;
}
