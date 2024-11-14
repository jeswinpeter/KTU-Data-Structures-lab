/* This code implements quick sort algorithm using array */
#include<stdio.h>

int size;
int lower = 0;
int upper;
int pivot;
int start;
int end;
int aray[10];
int locate;

/* Places pivot element at correct position */
int partition(int aray[],int lower,int upper) {
    int temp;
    pivot = aray[lower];
    start = lower;
    end = upper;
    while(start < end) {
        while(aray[start] <= pivot) {
            start++;
        }
        while(aray[end] > pivot) {
            end--;
        }
        if( start < end ) {
            temp = aray[start];
            aray[start] = aray[end];
            aray[end] = temp;
        } 
    }

// --- Swapping ---
    temp = aray[lower];
    aray[lower] = aray[end];
    aray[end] = temp;
// --- Swapping ---

    return end;
}

void quick_sort(int aray[],int lower,int upper) {
    if(lower < upper) {
        locate = partition(aray,lower,upper); 
        quick_sort(aray, lower, locate-1);      //recurssive function call
        quick_sort(aray, locate+1, upper);      //recurssive function call
    }
}

void main() {
    printf("Enter size of array: ");
    scanf("%d",&size);
    upper = size - 1;
    
//loop to construct array
    for(int i = 0; i < size; i++) {
        printf("Enter number to array: ");
        scanf("%d",&aray[i]);
    }

//loop to print the unsorted array
    printf("--------- Unsorted ----------\n");
    for (int i = 0; i < size; i++) {
        printf("%d\t",aray[i]);
    }
    printf("\n--------- Unsorted ----------\n\n");

quick_sort(aray, lower, upper);

//loop to print the sorted array
    printf("\n--------- Sorted ----------\n");
    for (int i = 0; i < size; i++) {
        printf("%d\t",aray[i]);
    }
    printf("\n--------- Sorted ----------\n\n");
}