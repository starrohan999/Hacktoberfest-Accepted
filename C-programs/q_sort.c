#include <stdio.h>

void swap(int *x, int *y){
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}

int pivot(int list[], int left, int right){
    int i, j, pivot;
    i = left;
    j = right+1;
    pivot = left;

    do{
        do{i++;} while (list[i] < array[pivot]);
        do{j--;} while (list[pivot < array[j]]);

        if (i < j){swap(&list[i], &list[j]);}
    }while (i < j);

    swap(&list[pivot], &list[j]);

    return j;
}

void q_sort(int list[], int left, int right){
    int pivot;

    if (left < right){
        pivot = pivot(list, left, right);
        q_sort(list, left, pivot-1);
        q_sort(list, pivot + 1, right);
    }
}

int main(){
    int list[10] = {1,5,2,20,100,9,8,12,70,0};
    int i;

    printf("Before:");
    for (i = 0; i < 10; i++){
        printf("%d, ", list[i]);
    }
    printf("\n");

    q_sort(list, 0, 0);

    printf("after:");
    for (i = 0; i < 10; i++){
        printf("%d, ", list[i]);
    }
    printf("\n");

    return 0;
}