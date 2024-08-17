#include<stdio.h>
void main(){
 int sizeOfArray;
 int itration;
 int searchElement;
 int a[25];
 int count = 0;
 int timecomplexity = 0;
 timecomplexity += 1;
 int spacecomplexity = 0;
 timecomplexity += 1;
 timecomplexity += 1;
   printf("Enter size of array\n");
    timecomplexity += 1; 
     scanf("%d",&sizeOfArray);
      timecomplexity += 1; 
   printf("Enter values to array a[]\n");
    timecomplexity += 1;  
       for(itration=0;itration<sizeOfArray;itration++){
          scanf("%d",&a[itration]);
          timecomplexity += 1; 
          timecomplexity += 1; 
          }
       timecomplexity += 1;      
   printf("Enter number to be searched\n");
    timecomplexity += 1;
     scanf("%d",&searchElement);
      timecomplexity += 1;
       for(itration=0;itration<sizeOfArray;itration++){
            if(a[itration] == searchElement){
                timecomplexity += 1;
               count += 1;
               printf("%d is found at position %d\n",searchElement,itration+1);
                timecomplexity += 1;
              }
           timecomplexity += 1;
          }
         timecomplexity += 1; 
   if(count >= 1){
      timecomplexity += 1;
      printf("%d is found %d times\n",searchElement,count);
      timecomplexity += 1;
     }
   else printf("%d is not found \n",searchElement);
   timecomplexity += 1;
   timecomplexity += 1;
   timecomplexity += 2;
   spacecomplexity = (4*4)+(4*sizeOfArray)+8;
   timecomplexity += 1;
   printf(" Time complexity = %d \n",timecomplexity);
   printf(" Space complexity = %d \n",spacecomplexity);
}
