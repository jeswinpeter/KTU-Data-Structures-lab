/*This code performs operations of user choice on a stack
  An array is used to construct the stack*/
#include<stdio.h>

int MAX_SIZE;
int stack[10];
int top = -1;

//Stack function push(line 10 to 18), used to add element to the top of the stack
void push(int value) {
    if(top == MAX_SIZE){
        printf("The stack is full. Can't add %d to the stack\n",value);
    }
    else {
        stack[++top] = value;
        printf("%d is pushed into the stack\n ",value);
    }
}

//Stack function pop(line 20 to 30), used to remove element from the top of the stack
int pop() {
    if(top < 0) {
        printf("Stack is empty, cannot pop any values");
        return -1;
    }
    else{
        int value = stack[top--];
        printf("%d is popped from the stack",value);
        return value;
    }
}

//Stack function display(line 32 to 43), used to print the stack
void display() {
     if(top < 0) {
        printf("Stack is empty\n");
    }
    else {
        printf("----- STACK -----\n");
        for(int i = 0; i <= top; i++){
            printf("%d\t",stack[i]);
        }
        printf("\n");
    }
}

//Construction and operations on stack(line 45 to 76)
int main() {
    int option;     //Variable to store the choice they make
    int element;    //Stores the value that is being pushed to the stack

    printf("Enter Max_Size of the Queue -> ");
    scanf("%d",&MAX_SIZE);

    //-------------- MENU ---------------
    printf("The operations that can be performed on a stack are listed below :\n");
    printf("1 -> Push\n");
    printf("2 -> Pop\n");
    printf("3 -> Display\n");
    printf("4 -> Exit\n");

    while (1) {
        printf("Enter the operation number you want to perform: ");
        scanf("%d",&option);

        switch (option) {
            case 1:
                printf("Enter the number to be pushed to the stack: ");
                scanf("%d",&element);
                push(element);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting....");
                return 0;
            default:
                printf("Invalid entry. Please choose a valid number. ");
        }
    }
    return 0;
}
