#include<stdio.h>
void main(){
	int size;
 	int i;
 	int j;
 	int temp;
	int a[30];
	int time = 0;
 printf("Enter size of array: ");
 scanf("%d",&size);

 printf("Enter the elements: \n");
 	time += 4;	//(2*print)+(1*scan)+(1*time initialisation)
 for (i = 0; i < size; i++) {
 	scanf("%d",&a[i]);
 		time += 2;	//(1*for loop)+(1*scan)
 }
 
 printf("The unsorted array is : \n");
 	time += 2;	//(1*for loop wrong condition)+(1*print)
 for (i = 0; i < size; i++) {
 	printf("%d\t",a[i]);
 	time += 2;	//(1*for loop)+(1*print)
 }
 printf("\n");

 for(i = 1; i < size; i++ ) {
 	temp = a[i];
 	j = i - 1;
 	while( j >= 0 && temp < a[j]) {
 		a[j+1] = a[j];
 		j--;
 		time += 3;	//(1*while)+(2*body work)
 	}
 	a[j+1] = temp;
 	time += 5;	//(1*for loop)+(1*While wrong)+(3*body work)
 }
 time ++;		//1*for loop wrong condition

 printf("The sorted array is : \n");
 for (i = 0; i < size; i++) {
 	printf("%d\t",a[i]);
	time += 2;	//(1*for loop)+(1*print)
 }
 printf("\n");

 time += 5;	//(1*for loop wrong condition)+(5*print(line 24 to 43))
 printf("Space complexity of the program is : %d\n",(5*4)+(size*4));
 printf("Time complexity of the program is : %d\n",time);
}
