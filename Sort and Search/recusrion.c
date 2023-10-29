#include<stdio.h>

void show(int n);

int main(void){
	int height;
	printf("Enter height: ");
	scanf("%d",&height);
	show(height);
}	

//void show(int n){
//	int i,j;
//	for(i=0; i<n; i++)
//	{
//		for(j=0; j<i+1; j++)
//		{
//			printf("#");
//		}
//		printf("\n");
//	}
//}
void show(int n)
{
	int i;
	if(n<=0)
	{
		return;
	}
	show(n-1);
	for(i=0; i<n; i++)
	{
		printf("#");
	}
	printf("\n");
}
