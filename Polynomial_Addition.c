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
struct node * ptr,* p_ptr,* q_ptr,* r_ptr;	//Pointer variables used for traversal
struct node * Ctemp;			//Used for temporary storage of address 
struct node * tempH;			//Used for temporary storage of address
int temp_coeff;
int temp_expo;
int count;
int no_terms_1;	//No of terms in the 1st Polynomial
int no_terms_2;	//No of terms in the 2nd Polynomial

/*create() -> to create new nodes
  Whenever a new node is created this function returns address of new node*/
struct node * create() {
	struct node *temp = (struct node *)malloc(sizeof(struct node));
	return temp;
}

/* Function to create polynomial linked list */
struct node * create_poly(int size,struct node * head) {
	count = 0;
	while(count < size) {
		
		printf("Enter exponent of X : ");
		scanf("%d",&temp_expo);
		printf("Enter the coefficient of X^%d : ",temp_expo);
		scanf("%d",&temp_coeff);
		if(count == 0) {
			head = create();
			head -> expo = temp_expo;
			head -> coeff = temp_coeff;
			head -> link = NULL;
		}
		else {
			Ctemp = create();
			ptr = head;
			while(ptr -> link != NULL) {
					ptr = ptr -> link;
			}
			ptr -> link = Ctemp;
			Ctemp -> expo = temp_expo;
			Ctemp -> coeff = temp_coeff;
			Ctemp -> link = NULL;
		}
		count++;
	}
	return head;
}

int print_Poly(struct node * head) {
	if(head == NULL) {
		printf("Polynomial is EMPTY !!!!");
		return 0;
	}
	else {
		ptr = head;
		
		while(ptr != NULL) {
			printf("(%dX^%d)",ptr -> coeff,ptr -> expo);	
			
			if(ptr -> link != NULL)
				printf(" + ");

			ptr = ptr -> link;
		}
		
	}
}

// void add_Poly(struct node * head,struct node * head2) {

// }

int main() {
	printf("Enter no of terms in the 1st polynomial: ");
 	scanf("%d",&no_terms_1);
 	printf("\n----- 1st Polynomial -----\n");
	head_p = create_poly(no_terms_1,head_p);

	printf("Enter no of terms in the 2nd polynomial: ");
 	scanf("%d",&no_terms_2);
	printf("\n----- 2nd Polynomial -----\n");
	head_q = create_poly(no_terms_2,head_q);

	printf("\n--------- 1st Polynomial ---------\n");
	print_Poly(head_p);
	printf("\n-------------------------------\n");
	printf("\n--------- 2nd Polynomial ---------\n");
	print_Poly(head_q);
	printf("\n-------------------------------\n");

	// add_Poly(head_p,head_q);
	//printf("\n--------- Resultant Polynomial ---------\n");
	// print_Poly(head_r);
	//printf("\n-------------------------------\n");
}
	
		
		
		
			
			
