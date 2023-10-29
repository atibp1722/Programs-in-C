#include <stdio.h>
#include <string.h>
#include <ctype.h>

char stack[100], top=-1;
int size=50, i; 
char temp;
void push(char item){
	if(size==top+1){
		printf("Stack overflow error");
	}else{
		top++;
		stack[top]=item;
		printf("Pushed element is %c\n", item);
	}
}
char pop(){
	if(top==-1){
		printf("Stack underflow error");
	}else{
		printf("Popped element is %c", stack[top]);
		return stack[top--];
	}
}
int precedence(char opr){
	switch(opr){
		case '^':
			return 3;
			break;
		case '*':
		case '/':
			return 2;
			break;
		case '+':
		case '-':
			return 1;
			break;
		default:
			return 0;
			break;
	}
}
int main(){
	char inputString[100], outputString[100];
	//track values for output string
	int j=-1;
	printf("Enter your infix expression for conversion\n");
	scanf("%s",inputString);
	push('(');
	strcat(inputString,")");
	for(i=0; i<=strlen(inputString); i++){
		//the 4 conditions that need to be checked for adding to output string
		//check for operand i.e anything other than operators and parathesis
		if(isalpha(inputString[i])){
			//increment output string and put value to index of input string if conition has been met
			outputString[++j]=inputString[i];
			//check for open paranthesis
		}else if(inputString[i]=='('){
			push(inputString[i]);
		}else if(inputString[i]=='^' || inputString[i]=='+' || inputString[i]=='-' || inputString[i]=='*' || inputString[i]=='/'){
			char temp=pop();
			if(temp=='(')
			{
				push(temp);
				push(inputString[i]);
			}else if(precedence(temp)>=precedence(inputString[i]))
			{
				outputString[++j]=temp;
				push(inputString[i]);
			}
		}
			else if(inputString[i]==')')
			{
				temp=pop();
				while(temp!='('){
					outputString[++j]=temp;
					temp=pop();
				}
			}
		}
		printf("Post fix expression is %s\n", outputString);
		return 0;
	}
	
