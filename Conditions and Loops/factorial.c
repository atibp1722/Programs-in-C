#include<stdio.h>

int main(){
	int num,i,fact=1;
	printf("Enter any number\n");
	scanf("%d",&num);
	for(i=1; i<=num; i++)
	{
		fact=fact*i;
	}
	printf("\nFactorial is %d", fact);
	return 0;
}
