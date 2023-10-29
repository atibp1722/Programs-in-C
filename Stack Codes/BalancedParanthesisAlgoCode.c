#include <stdio.h>
#include <conio.h>
#include <string.h>

char stack[99],top=-1;
int size=50,i;
char expression[100];
void push(char element){
	if(size==top+1){
		printf("Stck overflow error\n");
	}else{
		top++;
		stack[top]=element;
		printf("Pushed element is %c\n",element);
	}
}
void pop(){
	if(top==-1){
		printf("Stack underflow error\n");
	}
	else{
		printf("Popped element is %c\n", stack[top]);
		top--;
	}
}
void checkBalance(){
	//iterate from start of the string till the end of string
	for(i=0; i<strlen(expression); i++){
		//pusing to the stack if expression has '(' or an opening bracket 
		if(expression[i]=='('){
			push(expression[i]);
		//ignore from stack if it is not '(' or an opening bracket 
		}else if(expression[i]==')'){
			pop();
		}
	}
	if(top==-1){
		printf("Expression is balanced");
	}else{
		printf("Expression is unbalanced");
	}
}

int main(){
	printf("Enter the expression to check for balance \n");
	scanf("%s",expression);
	checkBalance();
	return 0;
}
