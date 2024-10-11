#include<stdio.h>
#include<stdlib.h>

struct node {
	int coeff;
	int expo;
	struct node * link;
};

struct node * head_p = NULL;
struct node * head_q = NULL;
struct node * head_r = NULL;
struct node * ptr,* p_ptr,* q_ptr,* r_ptr;
struct node * Ctemp;			//Used for temporary storage of address 
struct node * tempH;			//Used for temporary storage of address
int value;
int count;
int no_terms_1;	//No of terms in the 1st Polynomial
int no_terms_2;	//No of terms in the 2nd Polynomial

struct node * create_poly(int size,struct node * head) {
	count = 0;
	while(count < size) {
		
		ptr = (struct node *)malloc(sizeof(struct node));
				printf("Enter exponent of X : ");
				scanf("%d",&value);
				ptr -> expo = value;
				printf("Enter the coefficient of X^%d : ",value);
				scanf("%d",&value);
				ptr -> expo = value;
				count++;
				if(count = size - 1) {
					ptr -> link = NULL;
				}
			}
}

/*create() -> to create new nodes
  Whenever a new node is created this function returns address of new node*/
struct node * create() {
	
	return temp;
}

int main() {
	
	
	printf("Enter no of terms in the 1st polynomial: ");
 	scanf("%d",&no_terms_1);
 	printf("Enter no of terms in the 2nd polynomial: ");
 	scanf("%d",&no_terms_2);

	//Loop to construct the Polynomial 
}
	
		
		
		
			
			
