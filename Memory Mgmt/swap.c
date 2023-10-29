#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b);
int main(void)
{
	int x=1;
	int y=2;
	printf("x is %i, y is %i",x,y);
	swap(&x,&y);
	printf("\nAfter swap x is %i, y is %i",x,y);
}
void swap(int *a, int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
