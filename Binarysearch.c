//This code performs binary search on a sorted array and calculates time and space complexity
#include<stdio.h>
 int main()
 {
    int n;          //Size of the array
    int A[20];      //Array used to take values
    int i;          //Variable incremented in for loop 
    int j;          //Variable incremented in for loop
    int temp;       //Variable used to swap 2 array elements in buble sort loop(line - 19 to 31)
    int time = 0;   //Variable to track time complexity of the code
    int space = 0;  //Variable to track space complexity of the code
    time += 2;
 
 printf("Enter the size of Array: ");
 scanf("%d",&n);
 time += 2;

//loop to construct array
 printf("Enter %d numbers in ascending order : ",n);
   for(i=0;i<n;i++)
    {
       scanf("%d",&A[i]);
       time += 2;
    }
    time += 2;

//begining of binary search
    int left = 0;       //used to indicate left most element of the part of the arraay that is being searched
    int right = n-1;    //used to indicate right most element of the part of the arraay that is being searched
    int mid;            //number used to indicate middle of the part of arraay that is being searched 
    int x;              //x is the number to be searched
    int flag = 0;       //variabe used to indicate search element is found in the array
    time += 3;
 
 printf("Enter number to be searched\n");
 scanf("%d",&x);
    if(x < A[left] || x > A[right] ){
      printf("%d is not found in the array ",x);
      return 0;
      time += 3;
    }

//Binary search loop
    while(left <= right){
        mid = (left + right)/2;
        time += 2;
        if(A[mid] == x)
        {
            flag = 2;    //Indicates that search element is found
            break;
            time += 3;
        }
        else if (x < A[mid])
        {
            right = mid - 1;
            time += 2;
        }
        else if (x > A[mid])
        {
            left = mid + 1;
            time += 2;
        }  
    }  
    time++;

    //Result  
        if(flag == 2){
            printf("%d is found in the array at position %d\n",x,mid+1);
            time += 2;
         }
        if(flag == 0){
            printf("%d is not found in the array \n",x);
            time += 2;         
         }

 time += 3;
 space = (11 * 4) + (n * 4);
 printf("Space complexity = %d\nTime complexity = %d\n",space,time);
 return 0;
}
