#include<stdio.h>
 int main()
 {
    int n;      //Size of the array
    int A[20];  //Array used to take values
    int i;      //Variable incremented in for loop 
    int j;      //Variable incremented in for loop
    int temp;   //Temporary variable used to swap 2 array elements in buble sort loop (line -> 21 to 33)
 printf("Enter the size of Array: ");
 scanf("%d",&n);
//loop to construct array
   for(i=0;i<n;i++)
    {
       printf("Enter number %d : ",i+1);
       scanf("%d",&A[i]);
    }
 printf("\n");
//Bubble sort loops
   for(i=0;i<n-1;i++)
   {
     for(j=0;j<n-i-1;j++)
      {
        if(A[j]>A[j+1])
        {
            //Code to swap 2 adjacent elements of an array (line -> 28 to 30 ) 
            temp = A[j];
            A[j]=A[j+1];
            A[j+1]=temp;
        }
      }
   }
   
 printf("The sorted array is: \n");
//loop to print the sorted array
   for (i = 0; i < n; i++)
    {
      printf("%d\t",A[i]);
    }
 }