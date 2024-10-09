#include<stdio.h>

int Max_Size; 
int front = -1;
int rear = -1;
int queue[10];

void enqueue(int value) {
	if ((rear + 1)%Max_Size == front) {
		printf("Queue is FULL!!\n");
	}
	else if(front == -1 && rear == -1) {
		front = 0;
		rear = 0;
		queue[rear] = value;
	}
	else {
		rear = (rear + 1) % Max_Size;
		queue[rear] = value;
	}
}

void dequeue() {
	if(front == -1 && rear == -1) {
		printf("Queue is Empty!!\n");	
	}
	else if(front == rear) {
		printf("The dequed element is -> %d\n",queue[front]);
        	front = -1;
        	rear = -1;
	}
	else {
		printf("%d is dequeued\n",queue[front]);
            	front = (front + 1) % Max_Size;
	}
}

void display() {
	if(front == -1 && rear == -1) {
		printf("Queue is Empty!!");	
	}
	else {
		int i = front;
		printf("------------ Queue ------------\n");
		while(i != rear) {
			printf("%d -> %d\t",i,queue[i]);
			i = (i + 1) % Max_Size;
		}
		printf("%d -> %d\n",rear,queue[rear]);
		printf("------------ Queue ------------\n");
	}
}

int main() {
	int option;     //Variable to store the choice the user makes
    	int value;      //Stores the value that is being enqueued to the que
    	
    	printf("Enter Max_Size of the Queue -> ");
        scanf("%d",&Max_Size);
    	
        //Menu
        printf("The operations that can be performed on a Circular Queue are listed below :\n");
        printf("1 -> Enqueue(Add element)\n");
        printf("2 -> Dequeue(remove element)\n");
        printf("3 -> Display\n");
        printf("4 -> Exit\n");
        
	//Loop to perform Queue functions
    while (1) {
        printf("Enter the operation number you want to perform: ");
        scanf("%d",&option);

        switch (option) {
            case 1:
                printf("Enter the number to be enqueued to the queue: ");
                scanf("%d",&value);
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting....\n");
                return 0;
            default:
                printf("Invalid entry. Please choose a valid option. \n");
        }
    }
    return 0;
}

