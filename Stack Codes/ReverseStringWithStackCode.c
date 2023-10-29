#include <stdio.h>
#include <string.h>

int stack[100], top=-1;
int size=100, i;
char inputString[50]; 
char outputString[50];
void push(char element){ 
	if(size==top+1)
	{
		printf("Stack overflow error\n");
	}else{
		top++;
		stack[top]=element;
		printf("Pushed element is %c\n", element);
	}
}
char pop(){
	if(top==-1){
		printf("Stack underflow error\n");
	}else{
		printf("Popped element is %c\n", stack[top]);
		//first return top element then only decrement the top
		return stack[top--];
	}
	
}
int main() {
	printf("Enter the string\n");
	scanf("%s",inputString);
	//get length of the string
	for(i=0; i<=strlen(inputString); i++){
		//get the corresponding element at each index
		push(inputString[i]);
	}
	for(i=0; i<=strlen(inputString); i++){
		//each element at index is popped
		outputString[i] = pop();
	}
	printf("The reversed string is \n");
	for(i=0;i<=strlen(inputString); i++){
		printf("%c", outputString[i]);
	}
	
	return 0;
}
