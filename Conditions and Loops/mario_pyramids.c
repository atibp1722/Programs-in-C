#include<stdio.h>

int main(){
	int i,j,h,k,x=1;
	printf("Enter the height of pyramid\n");
	scanf("%d",&h);
	for(i=h; i>=1; i--)
	{
		for(j=1; j<=i-1; j++)
		{
			printf(" ");
		}
		for(k=1; k<=x; k++)
		{
			printf("#");
		}
		x++;
		printf("  ");
		for(j=1; j<=i; j++)
		{
			printf("#");
		}
		printf("\n");
	}
	return 0;
}
