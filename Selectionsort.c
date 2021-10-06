
#include <stdio.h>    
        
void swap(int *A, int i, int j) {    
          int temp = A[i];    
          A[i] = A[j];    
          A[j] = temp;    
}    
        
int findMinIndex(int *A, int start, int end) {    
     int min_index = start;    
        
     ++start;    
        
     while(start < end) {    
         if(A[start] < A[min_index])    
             min_index = start;    
        
         ++start;    
     }    
        
     return min_index;    
}    
        
void selectionSort(int *A, int n) {    
    for(int i = 0; i < n - 1; ++i) {    
        int min_index = findMinIndex(A, i, n);    
        
        if(i != min_index)    
            swap(A, i, min_index);    
    }    
}    
        
int main() {    
    int A[] = {5, 2, 6, 7, 2, 1, 0, 3}, n = 8;    
        
    selectionSort(A, n);    
        
    for(int i = 0; i < n; ++i)    
        printf("%d ", A[i]);  
    return 0;    
}