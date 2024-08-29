#include<stdio.h>

struct poly{
	int exponent;
	int coefficient;
}A[10];

void main() {

 int no_terms;
 int i;
 
 
 printf("Enter no of terms in the polynomial: ");
 scanf("%d",&no_terms);

	for(i = 0; i < no_terms; i++) {
		printf("Enter exponent of X : ");
		scanf("%d",&A[i].exponent);
		printf("Enter the coefficient of X^%d : ",A[i].exponent);
		scanf("%d",&A[i].coefficient);
	}
	
	int j;
	int temp;
//Bubble sort loops
   for(i=0;i<no_terms-1;i++){
	for(j=0;j<no_terms-i-1;j++){
        	if(A[j].exponent > A[j+1].exponent) {
        	
            		//swaping exponents of X  
            		temp = A[j].exponent;
            		A[j].exponent=A[j+1].exponent;
            		A[j+1].exponent = temp;
            
		        //swaping coefficients of X
            		temp = A[j].coefficient;
            		A[j].coefficient=A[j+1].coefficient;
            		A[j+1].coefficient = temp;
        	}
      	}
   }
	
	for(i = no_terms-1; i >= 0; i--) {
		printf("(%dX^%d)",A[i].coefficient,A[i].exponent);	
		if(i >= 1)
			printf(" + ");
	}
}
