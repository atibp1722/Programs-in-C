#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int stack[50], top=-1;
int size, i;
void push(int element)
{
	//Checking if stack is already full
	if(size==top+1){
		printf("Stack overflow error!\n");
	}else{
		//increment stack by 1 to empty postion to add new element
		top++;
		stack[top]=element;
		printf("Pushed element is %d\n",element);
	}
}
void pop()
{
	//Checking if stack is already empty
	if(top==-1){
		printf("Stack underflow error!");
	}else{
		//decrement top by 1 to remove the top elements
		printf("Popped element is %d\n",stack[top]);
		top--;
	}
		
}
void showStack()
{
	if(top==-1)
	{
		printf("Stack underflow!, no elements to show!!");
	}else{
		//start from top element and decrement to display element in order
		for(i=top; i>=0; i--)
		{
			printf("The stack elements are %d\n",i);
		}
	}
}
int main(){
	int choice, cont, element;
	printf("Please enter size fo the stack\n");
	scanf("%d",&size);
	do
	{
		printf("1 to push \n2 to pop \n3 to display\n");
		scanf("%d",&choice); 
		switch(choice)
		{
			case 1:
				printf("Enter element to push\n");
				scanf("%d",&element);
				push(element);
				break;
			case 2:
				pop();
				break;
			case 3:
				showStack();
				break;
			default:
				printf("Invalid option!!\n");
				break;
		}
		printf("Do you wish to continue?\n1 for Yes & \n2 for No\n");
		scanf("%d",&cont);
	}while(cont==1);
	return 0;
}
