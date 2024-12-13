/* This code implements Merge sort algorithm */
#include<stdio.h>

int array[31];

void merge(int array[] , int left,int mid, int right) {
    int i = left;
    int j = mid + 1;
    int k = left;
    int temp[100];

    while (i <= mid && j <= right) {
        if(array[i] <= array[j]) {
            temp[k] = array[i];
            i++;
        }
        else{
            temp[k] = array[j];
            j++;
        }
        k++;
    }

    while (i <= mid) {
        temp[k] = array[i];
        i++;
        k++;
    }

    while (j <= right) {
        temp[k] = array[j];
        j++;
        k++;
    }


    for(k = left; k <= right; k++) {
        array[k] = temp[k];
    }
    
}

void mergeSort(int array[] , int left, int right) {
    if(left < right) {
        int mid = (left + right)/2;
        mergeSort(array,left,mid);
        mergeSort(array,mid+1,right);
        merge(array,left,mid,right);
    }
}

void main() {
    int size;
    printf("Enter size of Array: ");
    scanf("%d",&size);

    printf("Enter values to array: ");
    for(int i = 0; i < size; i++ ) {
        scanf("%d",&array[i]);
    }

    printf("\n -------- Unsorted -------- \n");
    for(int i = 0; i < size; i++ ) {
        printf("%d\t",array[i]);
    }
    printf("\n -------- Unsorted -------- \n");

    mergeSort(array,0,size - 1);

    printf(" -------- Sorted -------- \n");
    for(int i = 0; i < size; i++ ) {
        printf("%d\t",array[i]);
    }
    printf("\n -------- Sorted -------- \n");
}