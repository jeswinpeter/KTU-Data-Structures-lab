#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node * link;
};

struct node * create() {
	struct node *temp = (struct node *)malloc(sizeof(struct node));
	printf("Created Node\n");
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

int insertionAtEnd(int value) {

	Ctemp = create();
	if( Ctemp == NULL ) {
		printf("!!! Memory Full !!!");
		return 0;
	}
	else {
		ptr = head;
		printf("IN else");
		while(ptr != NULL) {
				ptr = ptr -> link;
				printf("IN While");
		}
		ptr -> link = Ctemp;
		Ctemp -> link = NULL;
		Ctemp -> data = value;
	}
	
}

void DeletionAtBegining() {

}

void DeleteAtAnypos() {

}

void DeleteAtEnd() {

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
	printf("Enter value to list : ");
	scanf("%d",&value);
	head = insertionAtBegining(head,value);
	printList();
	printf("Enter value to list : ");
	scanf("%d",&value);
	insertionAtAnyPoint(3,value);
	printList();
	printf("Enter value to list : ");
	scanf("%d",&value);
	insertionAtEnd(value);
	printList();
	return 0;
}
