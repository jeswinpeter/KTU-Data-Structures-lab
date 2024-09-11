//This code performs Selection sort on an array and calculates time and space complexity
#include<stdio.h>
void main(){
	int size;		//Size of the array
 	int i;			//Variable incremented in while loop
 	int j;			//Variable incremented in while loop
 	
	int a[30];		//Array used to take values
	int time = 0;	//Variable to track time complexity of the code
	int space = 0;	//Variable to track space complexity of the code
	 
	time += 2;

 printf("Enter size of array: ");
 scanf("%d",&size);
 time += 2;

//loop to take values to the array
 printf("Enter the elements: \n");
	for (i = 0; i < size; i++) {
 		scanf("%d",&a[i]);
		time += 2;
 	}
 time += 2;

//loop to print unsorted array
 printf("The unsorted array is : \n");
 	for (i = 0; i < size; i++) {
 		printf("%d\t",a[i]);
		time += 2;
 	}
	time += 2;

//------- Selection Sort ---------
int small;		//Index of smallest element in the portion of the array that is being sorted
int temp;		//Variable used to swap 2 array elements
//Selection sort loops
 	i = 0;
 	while(i < size) {
 		j = i + 1;
 		small = i;
 		while(j < size) {
 			if(a[small] > a[j]) {
 				small = j;
				time ++;
 			}
			j++;
			time += 2;
 		}
 		if(i != small) {
 			temp = a[small];
 			a[small] = a[i];
 			a[i] = temp;
			time += 4;
 		}
 		i++;
		time += 4;
 	}
	time += 2;
//-------------------------------

//loop to print sorted array
	printf("\nThe sorted array is : \n");
 	for (i = 0; i < size; i++) {
 		printf("%d\t",a[i]);
		time += 2;
 	}
 	printf("\n");

	time += 5;
	space = (7 * 4) + (size * 4);	// Space complexity calculation
 	printf("Space complexity = %d\nTime complexity = %d\n",space,time);
 }
