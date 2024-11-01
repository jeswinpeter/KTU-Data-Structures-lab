#include<stdio.h>
#include<stdlib.h>		//To use exit 0
#include<ctype.h>		//To use isalnum function

char stack[80];
int top = -1;

char pop() {
	if(top == -1) {
		printf("\nThe Stack is Empty!!!");
		exit(0);
	}
	else {
		return stack[top--];
	}
}

void push(char y) {
	if(top >= 100 - 1) {
		printf("The Stack is Full!!!");
	}
	else {
		stack[++top] = y;
	}
}

//---- Checking Precedence ----
int priority(char y) {
	if(y == '(') {
		return 0;
	}
	if(y == '+' || y == '-') {
		return 1;
	}
	if(y == '*' || y == '/') {
		return 2;
	}
	if(y == '^') {
		return 4;
	}
}

int main() {
	char exp[40];
	char *e,x;
	printf("Enter the expression -> ");
	scanf("%s",exp);
	printf("\n");
	e = exp;
	
	printf("The postfix expression is :\n");
	
	while(*e != '\0') {
		if(isalnum(*e)) {			//Checks if the character is an alphabet or a number
			printf("%c ",*e);
		}
		else if(*e == '(') {        
            push(*e);     	 //push '(' onto stack 
        }         
        else if(*e == ')')
        {
            while((x = pop()) != '(')         /* pop and keep popping until '(' encounterd  */
                printf("%c ", x);
        }
		else {
			while(priority(stack[top]) >= priority(*e)){
				printf("%c",pop());
			}
			push(*e);
		}
		e++;
	}
	
	while(top != -1) {
		printf("%c",pop());
	}
	printf("\n");
	return 0;
}
