#include<stdio.h>

int main(){
	int num,i,flag=0;
	printf("Enter a number \n");
	scanf("%d",&num);
	for(i=2; i<=num/2; i++)
	{
		if(num %i == 0)
		{
			flag=1;
			printf("Number is not prime\n");
			break;
		}else if(num %i!=0 && num!=1)
		{
			printf("Number is a prime\n");
			flag=0;
		}else
		{
			printf("Invalid number\n");
		}
	}
	return 0;
}
