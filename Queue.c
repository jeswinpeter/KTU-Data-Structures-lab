//This code can create a Queue using array and perform basic queue operations
#include<stdio.h>

#define Max_Size 12
int queue[Max_Size];
int front = -1;
int rear = -1;

//Function to add elements to the rear of the queue
void enque(int value) {
    if(rear == Max_Size - 1) {
        printf("The queue is full !!! Can't perform enque function \n");
    }
    else if (front == -1 && rear == -1)
    {
        front = 0;
        rear = 0;
        queue[rear] = value;
    }
    else {
        rear++;
        queue[rear] = value;
    }
}

//function to remove element from the front of the queue
void deque() {
    if(front == -1 && rear == -1) {
        printf("The queue is empty!!! Can't perform deque function\n");
    }
    else if (front == rear)
    {
        printf("The dequed element is -> %d\n",queue[front]);
        front = -1;
        rear = -1;
    }
    else {
        printf("The dequed element is -> %d\n",queue[front]);
        front++;
    } 
}

//Function to display the elements of the queue
void display() {
    if(front == -1 && rear == -1) {
        printf("The queue is empty!!! Can't perform display function");
    } 
    else {
        printf("-----------Queue------------\n");
        for(int i = front; i < rear+1; i++) {
            printf("%d\t",queue[i]);
        }
        printf("\n");
        printf("-----------Queue------------\n");
    } 
}

//function to display 1 element at front 
void peek() {
    if(front == -1 && rear == -1) {
        printf("The queue is empty!!! Can't perform peek function\n");
    } 
    else {
        printf("The element in the front of the queue is : %d\n",queue[front]);
    }
}

//Constuction and operations on que
int main() {
    int option;     //Variable to store the choice the user makes
    int value;      //Stores the value that is being enqueued to the que
    
        //Menu(line 72 to 77)
        printf("The operations that can be performed on a queue are listed below :\n");
        printf("1 -> Enqueue(Add element)\n");
        printf("2 -> Dequeue(remove element)\n");
        printf("3 -> Display\n");
        printf("4 -> Peek\n");
        printf("5 -> Exit\n");
        
	//Loop to perform Queue functions
    while (1) {
        printf("Enter the operation number you want to perform: ");
        scanf("%d",&option);

        switch (option) {
            case 1:
                printf("Enter the number to be enqueued to the queue: ");
                scanf("%d",&value);
                enque(value);
                break;
            case 2:
                deque();
                break;
            case 3:
                display();
                break;
            case 4:
                peek();
                break;
            case 5:
                printf("Exiting....\n");
                return 0;
            default:
                printf("Invalid entry. Please choose a valid option. \n");
        }
    }
    return 0;
}
