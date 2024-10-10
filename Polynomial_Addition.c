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
struct node * p_ptr,* q_ptr,* r_ptr;
struct node * Ctemp;			//Used for temporary storage of address 
struct node * tempH;			//Used for temporary storage of address
int value;
int count;

/*create() -> to create new nodes
  Whenever a new node is created this function returns address of new node*/
struct node * create() {
	struct node *temp = (struct node *)malloc(sizeof(struct node));
	return temp;
}

int main() {
	int no_terms_1;	//No of terms in the 1st Polynomial
	int no_terms_2;	//No of terms in the 2nd Polynomial
	
	printf("Enter no of terms in the 1st polynomial: ");
 	scanf("%d",&no_terms_1);
 	printf("Enter no of terms in the 2nd polynomial: ");
 	scanf("%d",&no_terms_2);

	//Loop to construct the Polynomial 
	while(count < no_terms_1) {
		Ctemp = create();
		
		if( Ctemp == NULL ) {
			printf("!!! Memory Full !!!");
			return 0;
		}
		else {
			head_p = Ctemp;
			p_ptr = head_p;
			count = 0;
			while(count < no_terms_1) {
				printf("Enter exponent of X : ");
				scanf("%d",&value);
				p_ptr -> expo = value;
				printf("Enter the coefficient of X^%d : ",value);
				scanf("%d",&value);
				p_ptr -> expo = value;
				p_ptr = p_ptr -> link;
				count++;
			}
		}
	}
}
