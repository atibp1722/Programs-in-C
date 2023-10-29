#include<stdio.h>

int main(){
	int n1=0,n2=1,num,i,fibo;
	printf("Enter a number\n");
	scanf("%d",&num);
	printf("\n%d %d ",n1,n2);
	for(i=2; i<num; i++)
	{
		fibo=n1+n2;
		printf(" %d ", fibo);
		n1=n2;
		n2=fibo;
	}
	return 0;
}
