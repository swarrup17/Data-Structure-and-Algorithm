#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define  MAX_SIZE 100
int stack[MAX_SIZE];
int top=-1;
void push(int value){
	if(top==MAX_SIZE)
	{
	printf("Stack overflow!! can`t push element \n");
    }
	else {
		stack[++top]=value;
		printf("Element %d pushed to stack",value);	
        	}
}
void pop(){
	if(top==-1){
		printf("Stack underflow!! can`t pop element \n");
	}
	else{
	printf("Element %d poped to stack",stack[top--]);	
	}
}
void display(){
	if(top==-1){
		printf("stack empty");
	}
	else{
			printf("stack elements:");
			int i;
			for(i=top;i>=0;i--){
					printf("%d",stack[i]);
			}
			printf("\n");
	}
}
int main(){
	int choice,value;
	while(1){

	printf("MENU");
	printf("\n1.PUSH");
	printf("\n2.POP");
	printf("\n3.Display Items");
	printf("\n4.Enter your choice");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("Enter value to push:");
		scanf("%d",&value);
		push(value);
		break;
		case 2:
		printf("Enter value to pop:");
		scanf("%d",&value);
		pop();
		break;
		case 3:
		display();
		break;
		case 4:
			printf("Exiting program");
	exit(0);
	default:
		printf("INVALID!!!!");
	}
}
return 0;
}