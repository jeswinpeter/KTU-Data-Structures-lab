#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node * link;
};

struct node * create() {
	struct node *temp = (struct node *)malloc(sizeof(struct node));
	/*printf("Created Node\n");*/

	return temp;
}

struct node * head = NULL;
struct node * ptr,*ptr1;
struct node * Ctemp;
struct node * tempH;
int pos;
int value;

struct node * insertionAtBegining(struct node * head,int value){
	
	Ctemp = create();
	if( Ctemp == NULL ) {
		printf("!!! Memory Full !!!");
		return 0;
	}
	else if(head == NULL) {
		head = Ctemp;
		head -> data = value;
		head -> link = NULL;
	}
	else {
		tempH = head;
		head = Ctemp;
		head -> data = value;
		head -> link = tempH;
	}
	return head;
	
}

int insertionAtAnyPoint(int pos, int value) {

	Ctemp = create();
	if( Ctemp == NULL ) {
		printf("!!! Memory Full !!!");
		return 0;
	}
	else {
		ptr = head;
		while(ptr != NULL && ptr -> data != pos) {
			ptr = ptr -> link;
		}
		if ( ptr == NULL ) {
				printf("Error : Position element not found in the list !!!\n");
		}
		else {
			Ctemp -> link = ptr -> link;
			Ctemp -> data = value;
			ptr -> link = Ctemp;
		}
	}
	
}

void insertionAtEnd(int value) {

	Ctemp = create();
	if( Ctemp == NULL ) {
		printf("!!! Memory Full !!!");
	}
	else {
		ptr = head;
		while(ptr -> link != NULL) {
				ptr = ptr -> link;
		}
		ptr -> link = Ctemp;
		Ctemp -> link = NULL;
		Ctemp -> data = value;
	}
	
}

struct node * deletionAtBegining(struct node * head) {

	if(head == NULL) {
		printf("The list is Empty !!!");
	}
	else {
		Ctemp = head;
		head = head -> link;
		free(Ctemp);
		return head;
	}

}

void deletionAtAnyPosition() {
	printf("deleting");
}

void deletionAtEnd() {
	printf("deleting");
}

int printList() {
	if(head == NULL) {
		printf("List is EMPTY !!!!");
		return 0;
	}
	else {
		ptr = head;
		printf("------ Linked List ------\n");
		while(ptr != NULL) {
			printf("%d\t",ptr -> data);
			ptr = ptr -> link;
		}
		printf("\n-------------------------\n");
	}
}

int main(){
	printf("----- MENU -----\n");
	printf("1 -> Insertion at begening\n");
	printf("2 -> Insertion at Any position\n");
	printf("3 -> Insertion at end\n");
	printf("4 -> Deletion at begening\n");
	printf("5 -> Deletion at Any position\n");
	printf("6 -> Deletion at end\n");
	printf("7 -> Display Linked list\n");
	printf("8 -> Exit \n");

	int option;
	while(1) {
		printf("Enter operation no you want perform: ");
		scanf("%d",&option);

		switch(option) {
			case 1:
				printf("Enter value to the list: ");
				scanf("%d",&value);
				head = insertionAtBegining(head, value);
				break;
			case 2:
				printf("Enter value to the list: ");
				scanf("%d",&value);
				printf("Enter value after which you want to add: ");
				scanf("%d",&pos);
				insertionAtAnyPoint(pos, value);
				break;
			case 3:
				printf("Enter value to the list: ");
				scanf("%d",&value);
				insertionAtEnd(value);
				break;
			case 4:
				head = deletionAtBegining(head);
				break;
			case 5:
				printf("Enter value that you want to delete: ");
				scanf("%d",&value);
				deletionAtAnyPosition();
				break;
			case 6:
				deletionAtEnd();
				break;
			case 7:
				printList();
				break;
			case 8:
				printf("Exiting....\n");
				return 0;
			default:
				printf("Invalid entry Read MENU and try again !!!!\n");

		}
	}
	return 0;
}
