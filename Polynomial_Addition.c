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
	printf("Printing......\n");
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

struct node * add_Poly(struct node * head,struct node * head2) {
	p_ptr = head;
	q_ptr = head2; 
	// r_ptr = head_r;
	while(q_ptr -> link != NULL || p_ptr -> link != NULL) {
		printf("In adding loop....\nhead_r = %u\n",head_r);
		if(head_r == NULL) {
			head_r = create();
			r_ptr = head_r;
		}
		if(p_ptr -> expo == q_ptr -> expo) {
			r_ptr -> coeff = p_ptr -> coeff + q_ptr -> coeff;
			r_ptr -> expo = p_ptr -> expo;
			r_ptr -> link = create();
			printf("rptr -> coeff = %d",r_ptr -> coeff);
			p_ptr = p_ptr -> link;
			q_ptr = q_ptr -> link;
			r_ptr = r_ptr -> link;
		}
		else if (p_ptr -> expo > q_ptr -> expo) {
			r_ptr -> coeff = p_ptr -> coeff;
			r_ptr -> expo = p_ptr -> expo;
			r_ptr -> link = create();
			p_ptr = p_ptr -> link;
			r_ptr = r_ptr -> link;
		}
		else if (q_ptr -> expo > p_ptr -> expo) {
			r_ptr -> coeff = q_ptr -> coeff;
			r_ptr -> expo = q_ptr -> expo;
			r_ptr -> link = create();
			q_ptr = q_ptr -> link;
			r_ptr = r_ptr -> link;
		}

		if (p_ptr -> link == NULL) {
			r_ptr -> coeff = p_ptr -> coeff;
			r_ptr -> expo = p_ptr -> expo;
			r_ptr -> link = create();
			p_ptr = p_ptr -> link;
			r_ptr = r_ptr -> link;
		}
		else if (q_ptr -> link == NULL) {
			r_ptr -> coeff = q_ptr -> coeff;
			r_ptr -> expo = q_ptr -> expo;
			r_ptr -> link = create();
			q_ptr = q_ptr -> link;
			r_ptr = r_ptr -> link;
		}
	}	
	r_ptr -> link = NULL;
	printf("Completed Addition...");
	return head_r;
}

int main() {
	printf("Enter no of terms in the 1st polynomial: ");
 	scanf("%d",&no_terms_1);
 	printf("\n----- 1st Polynomial -----\n");
	head_p = create_poly(no_terms_1,head_p);

	printf("\nEnter no of terms in the 2nd polynomial: ");
 	scanf("%d",&no_terms_2);
	printf("\n----- 2nd Polynomial -----\n");
	head_q = create_poly(no_terms_2,head_q);

	printf("\n--------- 1st Polynomial ---------\n");
	print_Poly(head_p);
	printf("\n-------------------------------\n");
	printf("\n--------- 2nd Polynomial ---------\n");
	print_Poly(head_q);
	printf("\n-------------------------------\n");

	head_r = add_Poly(head_p,head_q);
	printf("Calling Print function");
	printf("\n--------- Resultant Polynomial ---------\n");
	print_Poly(head_r);
	printf("\n-------------------------------\n");
	return 0;
}
	
		
		
		
			
			
